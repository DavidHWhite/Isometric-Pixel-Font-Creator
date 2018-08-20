#pragma once

#include "INIH/INIReader.h"

struct tagIdentifier {
	string tagName;
	string defaultVal;
};

std::string convertCoords(double xin, double yin, double zin);

std::string generateTop(int width, int height, std::vector<std::vector<bool>> &glyph);

std::string generateSide(int width, int height, std::vector<std::vector<bool>> &glyph);

void writeHeaders(std::ofstream files[], INIReader &reader);

void writeTagList(std::vector<tagIdentifier> &tags, INIReader & reader, std::ofstream * files);

void writeNameTag(std::string tag, std::ofstream * files, INIReader & reader);

void writeToAll(std::ofstream * files, std::string temp);
