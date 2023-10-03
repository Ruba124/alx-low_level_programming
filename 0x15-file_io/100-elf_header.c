#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

void C_heck(unsigned char *eit);
void PM(unsigned char *eit);
void C_lose(int F);
void CS(unsigned char *eit);
void PD(unsigned char *eit);
void PV(unsigned char *eit);
void PO(unsigned char *eit);
void PAB(unsigned char *eit);
void PT(unsigned long int e, unsigned char *eit);
void PEN(unsigned long int e, unsigned char *eit);
/**
 * PT - FUNCTION
 * @eit:para
 * @e:para
 */
void PT(unsigned long int e, unsigned char *eit)
{
	if (eit[EI_DATA] == ELFDATA2MSB)
		e >>= 8;
	printf("  Type:                              ");
	switch (e)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		default:
			printf("<unknown: %lx>\n", e);
	}
}
/**
 * PEN - FUNCTION
 * @e:para
 * @eit:para
 */
void PEN(unsigned long int e, unsigned char *eit)
{
	printf("  Entry point address:               ");
	if (eit[EI_DATA] == ELFDATA2MSB)
	{
		e = ((e << 8) & 0xFF00FF00) |
			((e >> 8) & 0xFF00FF);
		e = (e << 16) | (e >> 16);
	}
	if (eit[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e);
	else
		printf("%#lx\n", e);
}
/**
 * PO - function
 * @eit:para
 */
void PO(unsigned char *eit)
{
	printf("  OS/ABI:                            ");
	switch(eit[EI_OSABI])
	{
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		default:
			printf("<unknown: %x>\n", eit[EI_OSABI]);
	}
}
/**
 * PAB - function
 * @eit:para
 */
void PAB(unsigned char *eit)
{
	printf("  ABI Version:                       %d\n",
		eit[EI_ABIVERSION]);
}
/**
 * PD - function
 * @eit:para
 * Return:none
 */
void PD(unsigned char *eit)
{
	printf("  Data:                              ");
	switch(eit[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", eit[EI_CLASS]);
	}
}
/**
 * PV - functiom
 * @eit:para
 */
void PV(unsigned char *eit)
{
	printf("  Version:                           %d",
			eit[EI_VERSION]);
	switch(eit[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}


/**
 ** CS - function
 ** @eit:char
 ** Return:none
 */
void CS(unsigned char *eit)
{
	printf("  Class:                             ");
	switch(eit[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", eit[EI_CLASS]);
	}
}
/**
 * PM - function
 * @eit:char
 * Return:none
 */
void PM(unsigned char *eit)
{
	int i = 0;

	while(i < EI_NIDENT)
	{
		printf("%02x", eit[i]);
		if(i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * C_heck - functoin
 * @eit:para
 * Return:none
 */
void C_heck(unsigned char *eit)
{
	int i = 0;

	while(i < 4)
	{
		if (eit[i] != 127 &&
		eit[i] != 'E' &&
		eit[i] != 'L' &&
		eit[i] != 'F')
			{
				dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
				exit(98);
			}
	}
}
/**
 * C_lose - function
 * F:para
 * Return:any
 */
void C_lose(int F)
{
	if (close(F) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", F);
		exit(98);
	}
}

/**
 * main - function
 * @argc:iny
 * @argv:char
 * Return:int
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int a1, a2;
	
	a1 = open(argv[1], O_RDONLY);
	if (a1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		C_lose(a1);
	        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	a2 = read(a1, header, sizeof(Elf64_Ehdr));
	if (a2 == -1)
	{
		free(header);
		C_lose(a1);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	C_heck(header->e_ident);
	printf("ELF Header:\n");
	PM(header->e_ident);
	CS(header->e_ident);
	PD(header->e_ident);
	PV(header->e_ident);
	PO(header->e_ident);
	PAB(header->e_ident);
	PT(header->e_type, header->e_ident);
	PEN(header->e_type, header->e_ident);
	free(header);
	C_lose(a1);
	return(0);
}
