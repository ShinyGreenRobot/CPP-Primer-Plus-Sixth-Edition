/**
 * \file
 * listing_11_01_mytime0.h
 *
 * \brief
 * Time class before operator overloading.
 */
#ifndef LISTING_11_01_MYTIME0_H_
#define LISTING_11_01_MYTIME0_H_

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time Sum(const Time & t) const;
	void Show() const;
};

#endif    // LISTING_11_01_MYTIME0_H_
