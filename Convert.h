#ifndef CONVERT_H
#define CONVERT_H
#include "Systm.h"
using namespace std;
class Convert:public Systm
{
	public:
		//default constructor		
		Convert(const string s="",const int n=0);
		//convert to decimal function
		string ConverttoDecimal() const;
		//convert from decimal function
		string ConvertfromDecimal() const;
		//destructor
		~Convert(void);
};
#endif
		
