#pragma once

struct coords {
	double x;
	double y;

	coords();
	coords(double xin, double yin);
};

coords convertCoords(coords *coordsIn, double zin);

std::string generateTop(int width, int height);
