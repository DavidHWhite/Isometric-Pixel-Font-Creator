#pragma once

#include "INIH/INIReader.h"

std::string convertCoords(double xin, double yin, double zin);

std::string generateTop(int width, int height, std::vector<std::vector<bool>> glyph);

void writeHeaders(std::ofstream &topFile, std::ofstream &shadowFile, std::ofstream &sideFile, std::ofstream &frontFile, INIReader &reader);
