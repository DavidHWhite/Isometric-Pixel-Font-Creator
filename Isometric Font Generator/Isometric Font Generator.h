#pragma once

struct coords {
	double x;
	double y;

	coords();
	coords(double xin, double yin);
};

void convertCoords(coords *coordsIn, double zin);
