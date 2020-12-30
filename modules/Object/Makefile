CXX=g++
CXXFLAGS=-Wall -Wextra -pedantic -O3 -m64

LIBS    = `pkg-config --libs sdl2 SDL2_image`
VPATH   = src/
INCLUDE = -Iinclude
TARGETS = Object_core.o Object_methods.o

default: $(TARGETS)
	ar cr libObject.a $(TARGETS)
	
$(TARGETS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -fPIC $< -o $@ $(INCLUDE) $(LIBS)
	
clean:
	rm -f *.o *.a
	
	
