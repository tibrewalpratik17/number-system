#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include "Convert.h"
using namespace std;

Convert::Convert(const string s,const int n):Systm(s,n)
{
}

string Convert::ConvertfromDecimal() const
{
	int l=in.length();
	int i,pos,j,k=0,flag=0;
	long long int a,b;
	double t;
	string c;
	pos=in.find(".");
	if(in[pos]=='.')
		flag=1;
	c=in.substr(0,pos);
	a=atoi(c.c_str());
	if(flag==1)
	{
		c=in.substr(pos+1,l-pos);
		b=atoi(c.c_str());
		t=b*pow(10,-(l-pos-1));
	}
	c="";
	while(a!=0)
	{
		if(a%n==0)
			c="0"+c;
		else if(a%n==1)
			c="1"+c;
		else if(a%n==2)
			c="2"+c;
		else if(a%n==3)
			c="3"+c;
		else if(a%n==4)
			c="4"+c;
		else if(a%n==5)
			c="5"+c;
		else if(a%n==6)
			c="6"+c;
		else if(a%n==7)
			c="7"+c;
		else if(a%n==8)
			c="8"+c;
		else if(a%n==9)
			c="9"+c;
		else if(a%n==10)
			c="A"+c;
		else if(a%n==11)
			c="B"+c;
		else if(a%n==12)
			c="C"+c;
		else if(a%n==13)
			c="D"+c;
		else if(a%n==14)
			c="E"+c;
		else
			c="F"+c;
		a=a/n;
	}
	if(flag==1&&t!=0)
	{
		c=c+".";
		while(t!=0&&k<10)
		{
			t=t*n;
			if(t>=15)
			{
				c=c+"F";
				t=t-15;
			}
			else if(t>=14)
			{
				c=c+"E";
				t=t-14;
			}
			else if(t>=13)
			{
				c=c+"D";
				t=t-13;
			}
			else if(t>=12)
			{
				c=c+"C";
				t=t-12;
			}
			else if(t>=11)
			{
				c=c+"B";
				t=t-11;
			}
			else if(t>=10)
			{
				c=c+"A";
				t=t-10;
			}
			else if(t>=9)
			{
				c=c+"9";
				t=t-9;
			}
			else if(t>=8)
			{
				c=c+"8";
				t=t-8;
			}
			else if(t>=7)
			{
				c=c+"7";
				t=t-7;
			}
			else if(t>=6)
			{
				c=c+"6";
				t=t-6;
			}
			else if(t>=5)
			{
				c=c+"5";
				t=t-5;
			}
			else if(t>=4)
			{
				c=c+"4";
				t=t-4;
			}
			else if(t>=3)
			{
				c=c+"3";
				t=t-3;
			}
			else if(t>=2)
			{
				c=c+"2";
				t=t-2;
			}
			else if(t>=1)
			{
				c=c+"1";
				t=t-1;
			}
			else
				c=c+"0";
			k++;
		}
	}
	return c;
}
string Convert::ConverttoDecimal() const
{
	int l=in.length();
	int i,pos,flag=0;
	long long int a=0;
	double t=0.0;
	string c="";
	pos=in.find(".");
	if(in[pos]=='.')
		flag=1;
	c=in.substr(0,pos);
	i=c.length()-1;
	while(i>=0)
	{
		if(c[i]>='A'&&c[i]<='F')
			a=a+(c[i]-55)*(int)pow(n,c.length()-i-1);
		else
			a=a+(c[i]-48)*(int)pow(n,c.length()-i-1);
		i--;
	}
	c="";
	i=0;
	if(flag==1)
	{
		c=in.substr(pos+1,l-pos-1);
		while(i<c.length())
		{
			if(c[i]>='A'&&c[i]<='F')
				t=t+(c[i]-55)*pow(n,-1-i);
			else
				t=t+(c[i]-48)*pow(n,-1-i);
			i++;
		}
	}
	t=t+a;
	c="";
	c=to_string(t);
	return c;
}
Convert::~Convert(void)
{
}
