#pragma once
#ifndef SYSTM_H
#define SYSTM_H

#include <cstring>
using namespace std;
class Systm
{
	protected:
		string in;
		int n;
	public:
		//default constructor		
		Systm(const string b="",const int d=0);
		//virtual function to convert to decimal
		virtual string ConverttoDecimal() const=0;
		//virtual function to convert from decimal
		virtual string ConvertfromDecimal() const=0;
		//destructor		
		~Systm(void){};
};
#endif
