CXX=g++
CXXFLAGS=-Wall -Wextra -Weffc++ -pedantic -O3 -m64

LIBS += `pkg-config --libs sdl2 SDL2_image`
LIBS += -L. -lGraphics -lLogics -lObject

VPATH   = src/
INCLUDE = -Iinclude -Imodules/include
TARGETS = Air_core.o Air_methods.o

default: modules-cp $(TARGETS)
	$(CXX) $(CXXFLAGS) --shared $(TARGETS) -o AirEngine.so $(INCLUDE) $(LIBS)

modules-cp: modules-mk
	$(shell cp modules/Graphics/libGraphics.a ./ )
	$(shell cp modules/Logics/libLogics.a ./     )
	$(shell cp modules/Object/libObject.a ./     )

modules-mk:
	make -C modules/Graphics/
	make -C modules/Logics/
	make -C modules/Object/
	
$(TARGETS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -fPIC $< -o $@ $(INCLUDE) $(LIBS)
	
clean:
	rm -f *.o *.a
	
	make -C modules/Graphics/ clean
	make -C modules/Logics/ clean
	make -C modules/Object/ clean
