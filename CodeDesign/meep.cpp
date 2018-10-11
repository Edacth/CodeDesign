#include "raylib.h"

class meep
{
public:

	//Vars
	bool enabled = true;
	Texture2D texture;

	// Constructors & Destructors
	meep();
	meep(bool _enabled);
	~meep();

	// Misc Functions
	void refresh();

private:
};
