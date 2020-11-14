#include<stdio.h>
#include "myMath.h"

void fun1(double x){
	float ans= sub(add(Exponent(x), Power(x , 3)) ,2);
	printf("The value of f(𝑥) = 𝑒^𝑥 + 𝑥^3 − 2 at the point %f is: %.4f \n", x, ans );
}

void fun2(double x){
	float ans= add(mul(3 , x) , mul(2,Power(x,2)));
	printf("The value of f(𝑥) = 3𝑥 + 2𝑥^2 at the point %f is: %.4f \n", x, ans );
}

void fun3(double x){
	float ans= sub(div(mul(4, Power(x,3)) , 5) , mul(2,x));
	printf("The value of f(𝑥) = (4𝑥^3)/5 − 2𝑥 at the point %f is: %.4f \n", x, ans );
}


int main(){
	double t;
	printf("Please inset a real number:");
	scanf( "%lf", &t );
	fun1(t);
	fun2(t);
	fun3(t);
	return 0;
}