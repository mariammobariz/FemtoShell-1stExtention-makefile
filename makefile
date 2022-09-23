prog : FemtoShellExten.o FemtoShellLib.a
	gcc -o prog FemtoShellExten.o ./FemtoShellLib.a
FemtoShellExten.o : FemtoShellExten.c
	gcc -c FemtoShellExten.c
FemtoShellLib.a : rand.o fact.o fib.o
	ar -rs FemtoShellLib.a rand.o fact.o fib.o
rand.o : rand.c
	gcc -c rand.c
fact.o : fact.c
	gcc -c fact.c
fib.o : fib.c
	gcc -c fib.c
clear : 
	rm -f *.o *.a

prog2 : FemtoShellExten.c FemtoShellLib.so
	gcc -o prog2 FemtoShellExten.c ./FemtoShellLib.so
FemtoShellLib.so : rand.c fact.c fib.c
	gcc -shared -fpic -o FemtoShellLib.so rand.c fact.c fib.c
clear2 : 
	rm -f *.so
