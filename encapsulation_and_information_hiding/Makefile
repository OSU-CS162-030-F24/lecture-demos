CXX = g++
EXE = a.out

$(EXE): main.o directory.o friend_list.o
	$(CXX) -g main.o directory.o friend_list.o -o $(EXE)

main.o: main.cpp
	$(CXX) -c main.cpp

directory.o: directory.cpp
	$(CXX) -c directory.cpp

friend_list.o: friend_list.cpp
	$(CXX) -c friend_list.cpp

clean:
	rm -f *.o $(EXE)
