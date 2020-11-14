#include "myMath.h"

#define e 2.718281828

double Power(double x , int y){
	double p=1;
	if(y<0) 
		return 1/Power(x,-1*y);
	else
		for (int i = 0; i < y; i++)
			p=p*x;
	return p;
	}

double Exponent(int x){
	return Power(e,x);
}	




