#include "stdafx.h"
#include "Isometric Font Generator.h"

coords::coords() {
	coords(0.0, 0.0);
}
coords::coords(double xin, double yin) {
	x = xin;
	y = yin;
}

int main() {
	coords startingCoords(1.0, 3.0);

	convertCoords(&startingCoords, 0.0);

	return 0;
}

void convertCoords(coords *coordsIn, double zin) {
	coords newCoords(
		coordsIn->x - 
	
	);
}

