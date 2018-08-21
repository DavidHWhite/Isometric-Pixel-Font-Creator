#pragma once

#include "INIH/INIReader.h"

struct tagIdentifier {
	string tagName;
	string defaultVal;
};

struct coord {
	int x;
	int y;

	coord(int xin, int yin) {
		x = xin;
		y = yin;
	}
};

struct CoordCompare {
	bool operator() (const coord& a, const coord& b) const {
		if(a.y < b.y)  return true;
		if(a.y > b.y)  return false;
		return (a.x < b.x);
	}
};

std::string convertCoords(double xin, double yin, double zin);

std::string generateTop(int width, int height, std::vector<std::vector<bool>> &glyph);

std::string generateShadow(int width, int height, std::vector<std::vector<bool>> &glyph);

std::string generateSide(int width, int height, std::vector<std::vector<bool>> &glyph);

std::string generateFront(int width, int height, std::vector<std::vector<bool>> &glyph);

void writeHeaders(std::ofstream files[], INIReader &reader);

void writeTagList(std::vector<tagIdentifier> &tags, INIReader & reader, std::ofstream * files);

void writeNameTag(std::string tag, std::ofstream * files, INIReader & reader);

void writeToAll(std::ofstream * files, std::string temp);
