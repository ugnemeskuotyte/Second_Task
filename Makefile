run: main.o generavimas.o inout.o rusiavimas.o skaic.o validacija.o studentas.o
	g++ main.cpp generavimas.cpp inout.cpp rusiavimas.cpp skaic.cpp validacija.cpp studentas.cpp -o run

generavimas.o: generavimas.cpp
	g++ -c generavimas.cpp

inout.o: inout.cpp
	g++ -c inout.cpp

rusiavimas.o: rusiavimas.cpp
	g++ -c rusiavimas.cpp

skaic.o: skaic.cpp
	g++ -c skaic.cpp

validacija.o: validacija.cpp
	g++ -c validacija.cpp

studentas.o: studentas.cpp
	g++ -c studentas.cpp

main.o: main.cpp
	g++ -c main.cpp

clean: 
	del *.o *.exe