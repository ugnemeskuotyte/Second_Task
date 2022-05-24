run: main.o generavimas.o inout.o rusiavimas.o skaic.o validacija.o studentas.o
	g++ main.o generavimas.o inout.o rusiavimas.o skaic.o validacija.o studentas.o -o run -O3

generavimas.o: generavimas.cpp
	g++ -c generavimas.cpp -O3

inout.o: inout.cpp
	g++ -c inout.cpp -O3

rusiavimas.o: rusiavimas.cpp
	g++ -c rusiavimas.cpp -O3

skaic.o: skaic.cpp
	g++ -c skaic.cpp -O3

validacija.o: validacija.cpp
	g++ -c validacija.cpp -O3

studentas.o: studentas.cpp
	g++ -c studentas.cpp -O3

main.o: main.cpp
	g++ -c main.cpp -O3

clean: 
	del *.o *.exe