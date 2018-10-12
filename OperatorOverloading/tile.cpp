#include "tile.h"
#include <string>

Tile::Tile()
{
	Background = LoadTexture("resources//mapTile_188.png");
	tint = WHITE;
}

Tile::Tile(std::string imageFilename)
{
	std::string filePath = "resources//" + imageFilename;
	Background = LoadTexture(filePath.c_str());
	tint = WHITE;
}

Tile::~Tile()
{

}