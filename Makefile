CXX=g++
CXXFLAGS=-Wall -Wextra -Weffc++ -pedantic -O3 -m64

#LIBS += `pkg-config --libs sdl2 SDL2_image`
LIBS = -L. -lGraphics -lLogics -lPoint -lObject

VPATH   = src/Engine
INCLUDE = -Iinclude
TARGETS = Air_core.o Air_methods.o

default: classes-cp modules-cp $(TARGETS)
	$(CXX) $(CXXFLAGS) --shared $(TARGETS) -o AirEngine.so $(INCLUDE) $(LIBS)

$(TARGETS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -fPIC $< -o $@ $(INCLUDE) $(LIBS)


classes-cp: classes-mk
	$(shell cp src/Point/*.a  ./  )
	$(shell cp src/Object/*.a ./  )
	
classes-mk:
	make -C src/Point/
	make -C src/Object/

modules-cp: modules-mk
	$(shell cp modules/Graphics/*.a ./  )
	$(shell cp modules/Logics/*.a   ./  )

modules-mk:
	make -C modules/Graphics/
	make -C modules/Logics/

clean:
	rm -f *.o *.a
		
	make -C src/Point/ clean
	make -C src/Object/ clean
	make -C modules/Logics/ clean
	make -C modules/Graphics/ clean
