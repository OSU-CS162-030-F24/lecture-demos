CXX = g++ -g

my_program: main.o hello.o person.o
	$(CXX) main.o hello.o person.o -o my_program

main.o: main.cpp
	$(CXX) -c main.cpp

hello.o: hello.cpp
	$(CXX) -c hello.cpp

person.o: person.cpp
	$(CXX) -c person.cpp

clean:
	rm *.o my_program
