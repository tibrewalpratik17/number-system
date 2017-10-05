#include <iostream>
#include <iomanip>
#include "Decimal.h"
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

Decimal::Decimal()
{decimal="";nm=0.0;
}

void Decimal::accept(const string d)
{
	decimal=d;
	nm=atof(d.c_str());
}

string Decimal::operator +(const Decimal &otherDecimal) const
{
	double nm2=nm+otherDecimal.nm;
	string c=to_string(nm2);
	return c;
}

string Decimal::operator -(const Decimal &otherDecimal) const
{
	double nm2=0.0;
	if(nm>otherDecimal.nm)
		nm2=nm-otherDecimal.nm;
	else
		nm2=otherDecimal.nm-nm;
	string c=to_string(nm2);
	return c;
}

string Decimal::operator *(const Decimal &otherDecimal) const
{
	double nm2=nm*otherDecimal.nm;
	string c=to_string(nm2);
	return c;
}

string Decimal::operator /(const Decimal &otherDecimal) const
{
	string c="";
	if(otherDecimal.nm==0)
	{
		cout<<"DIVIDE BY ZERO ERROR\n";
		exit(1);
	}
	double nm2=nm/otherDecimal.nm;
	c=to_string(nm2);
	return c;
}
Decimal::~Decimal(void)
{
}

