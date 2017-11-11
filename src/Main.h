#ifndef MAIN_H
# define MAIN_H

# include "DebugDisplay.h"
# include "MainDisplay.h"
# include "LCD.h"
# include <string>

class Main
{

	private:
		static DebugDisplay *debugDisplay;
		static MainDisplay *mainDisplay;
		static LCD *lcd;

	public:
		static void run(int ac, char **av);
		static void windowClosed();
		static void GLError(std::string text);
		static DebugDisplay *getDebugDisplay() {return (debugDisplay);};
		static MainDisplay *getMainDisplay() {return (mainDisplay);};
		static LCD *getLcd() {return (lcd);};

};

#endif
