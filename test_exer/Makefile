EXENAME = triangle_fun
EXE_SOLN = triangle_soln
OBJS = test.o
OBJS_SOLN = test_soln.o

CXX = clang++
CXXFLAGS = -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic
LD = clang++
LDFLAGS = -std=c++1y -stdlib=libc++ -lpng -lc++abi -lpthread

all : $(EXENAME)

$(EXENAME) : $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(EXENAME)

$(EXE_SOLN) : $(OBJS_SOLN)
	$(LD) $(OBJS_SOLN) $(LDFLAGS) -o $(EXE_SOLN)

$(OBJS) : test.cpp
	$(CXX) $(CXXFLAGS) test.cpp

$(OBJS_SOLN) : test_soln.cpp
	$(CXX) $(CXXFLAGS) test_soln.cpp

clean :
	-rm -f *.o $(EXENAME)
