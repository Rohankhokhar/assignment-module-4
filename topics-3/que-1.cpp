#include<iostream>
using namespace std;

inline int mul(int num1, int num2){
	return num1 * num2;
}

inline int cube(int x){
	return x * x * x;
}

int main(){
	int num1 , num2 , x;
	
	cout << "enter num1 value :" ;
	cin >> num1;
	
	cout << "enter num2 value :" ;
	cin >> num2;
	
	cout << "enter x value for cube :" ;
	cin >> x;
	
	int product = mul (num1 ,num2);
	cout << "multiply of two number is :" << product << endl;
	
	int cubevalue = cube(x);
	cout << "cube of number is :" << cubevalue << endl;	
	
}
