Compilation steps:

1- Directly:

	gcc myFemtoShell.c


2-With intermediate files:

	gcc -E myFemtoShell.c > myFemtoShell.i
	gcc -S myFemtoShell.i
	gcc -C myFemtoShell.s
	gcc -o myFemtoShell.out myFemtoShell.o
