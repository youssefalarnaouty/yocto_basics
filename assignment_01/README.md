Building steps:

1- Directly:
	
	gcc myFemtoShell.c


2-With intermediate files:

	gcc -E myFemtoShell.c > myFemtoShell.i
	gcc -S myFemtoShell.i
	gcc -C myFemtoShell.s
	gcc -o myFemtoShell.out myFemtoShell.o

Example:

	Type something > Hello my shell
	You said: Hello my shell
	Type something > Are you ready
	You said: Are you ready
	Type something > one more time ??
	You said: one more time ??
	Type something > exit
	Good Bye :)
