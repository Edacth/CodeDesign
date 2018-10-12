#include "tile.h"
#include <string>
#include <random>
#include <ctime>

Tile::Tile()
{
	*Background = LoadTexture("resources//mapTile_188.png");

	*tint = WHITE;
}

Tile::Tile(std::string _imageFilename)
{
	imageFilename = _imageFilename;
	std::string filePath = "resources//" + imageFilename;
	*Background = LoadTexture(filePath.c_str());
	*tint = WHITE;
}

Tile::~Tile()
{

}

Tile & Tile::operator = (const Tile& rhs)
{
	Background = new Texture2D(*rhs.Background);
	

	return *this;
}
