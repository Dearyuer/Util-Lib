all: testBuild clean run

testBuild: utilLib.o testBuild.o
	g++ utilLib.o testBuild.o -o testBuild

utilLib.o: utilLib.cpp
	g++ -c utilLib.cpp

testBuild.o: testBuild.cpp
	g++ -c testBuild.cpp

clean: testBuild.o utilLib.o
	rm testBuild.o utilLib.o

run: testBuild
	./testBuild