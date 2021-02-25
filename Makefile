output: chessviz-EmGuliev.o
	g++ chessviz-EmGuliev.o -o output

main.o: chessviz-EmGuliev.cpp
	g++ -Wall -Werror -c chessviz-EmGuliev.cpp

clean:
	rm *.o output