/**
 * \file
 * listing_09_01_coordin.h
 *
 * \brief
 * Structure templates and function prototypes.
 */
#ifndef LISTING_09_01_COORDIN_H_
#define LISTING_09_01_COORDIN_H_

struct polar
{
	double distance;    /**< distance from origin */
	double angle;       /**< direction from origin */
};

struct rect
{
	double x;    /**< horizontal distance from origin */
	double y;    /**< vertical distance from origin */
};

// prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif    // LISTING_09_01_COORDIN.H
