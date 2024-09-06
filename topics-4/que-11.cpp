#include<iostream>
using namespace std;

int area(int  radius) {
    return 3.14 * radius * radius; 
} 
int area(int length , int weight) {
    return length * weight;
}
int area(double hight ,double base ){
	return 0.5*hight*base;
}

int main(){
	int radius , length , weight , hight , base ;
	
	cout << "enter value of radius :";
	cin >> radius ;
	
	cout << "enter value of lenght :";
	cin >> length ;
	
	cout << "enter value of weight :";
	cin >> weight ;
	
	cout << "enter value of hight :";
	cin >> hight ;
	
	cout << "enter value of base :";
	cin >> base ;
	
	cout << "circle :" << area (radius) << endl ;
	cout << "rectangle :" << area (length,weight) << endl ;
	cout << "triangle :" << area (hight,weight) << endl ;
}
