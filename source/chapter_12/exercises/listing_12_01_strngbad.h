/**
 * \file
 * listing_12_01_strngbad.h
 *
 * \brief
 * Flawed string class definition.
 */
#include <iostream>

#ifndef LISTING_12_01_STRNGBAD_H_
#define LISTING_12_01_STRNGBAD_H_

class StringBad
{
private:
	char * str;                   // pointer to string
	int len;                      // length of string
	static int num_strings;       // number of objects
public:
	StringBad(const char * s);    // constructor
	StringBad();                  // default constructor
	~StringBad();                 // destructor
	// friend function
	friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};

#endif    // LISTING_12_01_STRNGBAD_H_
