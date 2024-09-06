#include<iostream>
using namespace std;

template <typename t>

void swapvalue(t& a ,t& b){
	t temp =a;
	a = b;
	b = temp;
}

int main(){
	int x,y;
	
	cout << "enter value of x ";
	cin >> x;
	
	cout << "enter value of y ";
	cin >> y;
	
    cout << "a = " << x << " b = " << y << endl;
	swapvalue(x,y);
    cout << "a = " << x << " b = " << y << endl;

}
