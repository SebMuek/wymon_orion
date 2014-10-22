// Window
// Window.hpp

//#define NDEBUG
#ifndef _WINDOW_
#define _WINDOW_

#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <string>
#include <iostream>
#ifndef _DEBUG_ // "namespace.hpp"
#include "debug.hpp"
#endif

// Window //
// Window is a class derived from the "sf::RenderWindow". Thus, it is a rendering target for
// 2 dimensional render operations however, it offers additional window-related functionalities
// which the parent class doesn't (eg window icon operations)


class Window : public sf::RenderWindow {

protected :

	sf::Image mWinIcon ; // Window icon

public :

	// Contructors //

	// Default constructor //
	// does not create any window; has to be used along with "create()"

	Window () {
	} // Default constructor

	// Main constructor //
	// Creates a window

	Window ( sf::VideoMode Mode , const sf::String& Title , sf::Uint32 Style = sf::Style::Default ,
			 const sf::ContextSettings& Settings = sf::ContextSettings () ) {
	
		create ( Mode , Title , Style , Settings ) ;
	
	} // Main constructor

	// WinHandle constructor //
	// Creates a window from a window handle

	Window ( sf::WindowHandle Handle , const sf::ContextSettings& Settings = sf::ContextSettings () ) {
	
		create ( Handle , Settings ) ;
	
	} // WinHandle constructor

	// Destructor //

	virtual ~Window () {
	} // Destructor

	bool setWinIcon ( const std::string& Filename ) ;

} ; // Window

#endif
