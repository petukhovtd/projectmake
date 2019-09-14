PROJECT_NAME = projectcmake

INCLUDE=-I/home/subeo/CLionProjects/projectmake
CXXFLAGS = -Wall -g


OBJ = \
	main.o \
	funcA.o \
	foo/foo.o

all: $(PROJECT_NAME)

$(PROJECT_NAME): $(OBJ)
	g++ $(INCLUDE) $(CXXFLAGS) -o $@ $(OBJ)

%.o : %.cpp
	g++ $(INCLUDE) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -vrf $(PROJECT_NAME) $(OBJ)

.PHONY: all clean