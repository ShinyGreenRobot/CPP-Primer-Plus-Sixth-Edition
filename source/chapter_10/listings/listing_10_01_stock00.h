/**
 * \file
 * listing_10_01_stock00.h
 *
 * \brief
 * Stock class, version 00, interface.
 */
#ifndef LISTING_10_01_STOCK00_H_
#define LISTING_10_01_STOCK00_H_

#include <string>

class Stock    // class declaration
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	void acquire(const std::string & co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};   // note semicolon at the end

#endif    // LISTING_10_01_STOCK.H
