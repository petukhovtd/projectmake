PROJECT_NAME = projectcmake_test

INCLUDE=-I/home/subeo/CLionProjects/projectmake/googletest-master/googletest/include
INCLUDE+=-I/home/subeo/CLionProjects/projectmake
CXXFLAGS = -Wall -g -pthread
LIB_DIR = -L/home/subeo/CLionProjects/projectmake/googletest-master/lib
LIB = -lgtest -lgtest_main
TLIB=/home/subeo/CLionProjects/projectmake/googletest-master/lib/libgtest.a
TLIB+=/home/subeo/CLionProjects/projectmake/googletest-master/lib/libgtest_main.a

OBJS = \
	test.o \
	../funcA.o \
	../foo/foo.o

all: $(PROJECT_NAME)

$(PROJECT_NAME): $(OBJS)
	g++ $(INCLUDE) $(CXXFLAGS) -o $@ $(OBJS) $(TLIB)

%.o: %.cpp
	g++ $(INCLUDE) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -vrf $(PROJECT_NAME) $(OBJS)

.PHONY: all clean