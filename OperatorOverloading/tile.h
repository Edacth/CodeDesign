#pragma once
//Tile.h
#include <string>
#include <iostream>
#include "raylib.h"
class Tile
{
public:
	Texture2D Background;
	Color tint;
	Tile(std::string imageFilename);
	Tile();
	~Tile();
};