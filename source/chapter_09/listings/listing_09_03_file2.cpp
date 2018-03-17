/**
 * \file
 * listing_09_03_file2.cpp
 *
 * \brief
 * Contains functions called in listing_09_02_file1.cpp.
 */
#include <cmath>
#include <iostream>

#include "listing_09_01_coordin.h" // structure templates, function prototypes

/**
 * \brief
 * Convert rectangular coordinates to polar coordinates.
 */
polar rect_to_polar(rect xypos)
{
	using namespace std;

	polar answer;

	answer.distance = sqrt( xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);

	return answer;    // returns a polar structure
}

/**
 * \brief
 * Displays polar coordinates, the angle is presented as degrees.
 */
void show_polar (polar dapos)
{
	using namespace std;

	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << dapos.distance;
	cout << ", angle = " << dapos.angle * Rad_to_deg;
	cout << " degrees\n";
}
