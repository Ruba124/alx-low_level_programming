          global    main
          extern    puts

          section   .text
main:
          mov       rdi, message            ; First integer (or pointer) argument in rdi
          call      puts                    
          ret                               ; Return from main back into C library wrapper
message:
	db `Hello, Holberton`,0
