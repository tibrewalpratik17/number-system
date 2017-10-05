#ifndef DECIMAL_H
#define DECIMAL_H
using namespace std;
class Decimal
{
	private:
		string decimal;
		double nm;
	public:
		//default constructor		
		Decimal();
		//accept value function
		void accept(const string d);
		//adding two numbers
		string operator +(const Decimal &d2) const;
		//subtracting two numbers
		string operator -(const Decimal &d2) const;
		//multiplying two numbers
		string operator *(const Decimal &d2) const;
		//dividing two numbers
		string operator /(const Decimal &d2) const;
		//destructor
		~Decimal(void);
};
#endif	
