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

	std::cout.precision(10);
	std::cout.setf(std::ios::fixed, std::ios::floatfield);

	coords newCoords = convertCoords(&startingCoords, 0.0);
	std::cout << newCoords.x << ", " << newCoords.y;

	//

	// TODO: Delete old files
	// TODO: Read data file, store data
	int width = 5;
	int height = 10;

	// TODO: Create new files
		// TODO: Create headers
	// TODO: Iterate through each glyph
		// TODO: Write unicode ID
		// TODO: Generate top font path(s)
		generateTop(width, height);
			// TODO: Write top font path(s) to top file
		// TODO: Generate shadow font path(s)
			// TODO: Write shadow font path(s) to shadow file
		// TODO: Generate side font path(s)
			// TODO: Write side font path(s) to side file
		// TODO: Generate front font path(s)
			// TODO: Write front font path(s) to front file
	
	system("pause");
	return 0;
}

std::string generateTop(int width, int height) {
	for(int x = 0; x < width; x++) {
		for(int y = 0; y < height; y++) {

		}
	}
}

coords convertCoords(coords *coordsIn, double zin) {
	coords newCoords(9.0 * (coordsIn->x + zin - (coordsIn->y / sqrt(3))),
		9.0 * (coordsIn->y + zin)
	);
	return newCoords;
}

