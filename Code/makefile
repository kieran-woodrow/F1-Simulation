# // Old make file // 

# main: *.o
# 		g++ -g -o main *.o -std=c++11

# *.o: *.cpp
# 		g++ -c -g *.cpp

# run: main
# 		./main

# clean:
# 	rm -f *.o main

# // Old make file end // 


# // New make file start // 

CXX = g++
CXXFLAGS = -g -std=c++11 -Wall -Wextra

SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = main

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(EXECUTABLE)
	./$(EXECUTABLE)

clean:
	rm -f $(OBJECTS)4 $(EXECUTABLE)

.PHONY: all run clean

# // New make file end // 