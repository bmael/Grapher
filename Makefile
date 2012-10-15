CPP = g++
CFLAGS = -W -Wall


SRC= $(wildcard src/*.cpp) 
PARSING = $(wildcard src/parsing/*.cpp)

OBJ= $(addprefix obj/,$(notdir $(SRC:.cpp=.o)))
OBJPARSING = $(addprefix obj/parsing/,$(notdir $(PARSING:.cpp=.o))) 


bin/main: $(OBJ) $(OBJPARSING)
		$(CXX) $(CXXFLAGS) -o $@ $^

obj/%.o: src/%.cpp
		$(CXX) $(CXXFLAGS) -c $^ -o $@


obj/parsing/%.o: src/parsing/%.cpp
		$(CXX) $(CXXFLAGS) -c $^ -o $@





.PHONY : clean mrproper
clean:
	rm -rf *.o *~

mrproper: clean
	rm -rf main
