#include <iostream>
#include "human.h"
using namespace std;
int main() 
{
	human Ali;
	Ali.name="Azkar";
	Ali.age=30;
	Ali.adress="Kotli azad kashmir ";
	Ali.phone= 9090090909;
	
	cout<<"Name of Person "<<Ali.name<<endl;
	cout<<"Age of Person "<<Ali.age<<endl;
	cout<<"Ph # of Person "<<Ali.phone<<endl;
	cout<<"Adress of Person "<<Ali.adress<<endl;
};
