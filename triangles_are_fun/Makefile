EXENAME = triangle_fun_2
EXE_SOLN = triangle_soln_2
OBJS = triangle.o
OBJS_SOLN = triangle_soln.o

CXX = clang++
CXXFLAGS = -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic
LD = clang++
LDFLAGS = -std=c++1y -stdlib=libc++ -lpng -lc++abi -lpthread

all : $(EXENAME)

$(EXENAME) : $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(EXENAME)

$(EXE_SOLN) : $(OBJS_SOLN)
	$(LD) $(OBJS_SOLN) $(LDFLAGS) -o $(EXE_SOLN)

$(OBJS) : triangle.cpp
	$(CXX) $(CXXFLAGS) triangle.cpp

$(OBJS_SOLN) : triangle_soln.cpp
	$(CXX) $(CXXFLAGS) triangle_soln.cpp

clean :
	-rm -f *.o $(EXENAME)
