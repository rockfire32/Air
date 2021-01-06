# Air

Usage:

	// Create an object for working with the "Air" game engine
    Air::Air_Engine Eng;
	
	// We initialize the engine and its 'modules'
    if ( Eng.init() != 0 ) return -1;

	// Create an object, use names for access
    Eng.create_object("Castle0", SIZE_32X32, false);

    try
    {
    	// Load texture for object
        Eng.load_texture("Castle0", "default.png");
    }
    catch (const std::string &incorrect_path) {
        return -2;
    }

	// Allowing the object to be drawn*
    Eng.make_drawable("Castle0");

	// Start the main engine loop**
    Eng.loop();

*SDL2 is used for rendering
**The loop is exited by closing the window.
