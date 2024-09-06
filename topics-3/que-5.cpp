#include<iostream>
using namespace std;

class triangle{
	int length1 , length2 ,length3;
	
	public :
	triangle(int l1 ,int l2, int l3){
		length1 = l1 ;
		length2 = l2 ;
		length3 = l3 ;
	}
	
	void shape(int length1 , int length2 ,int length3){
		if ( length1 == length2 && length1 == length3 ){
			cout << "triangle is equilateral" << endl ;
		}
		else if (length1 == length2 || length1 == length3 || length2 == length3 ){
			cout << "triangle is Isosceles" << endl ;
		}
		else{
			cout << "triangle is Scalene" << endl ;
		}
	}
};

int main(){
	int l1 , l2 , l3 ;
	
	cout << "enter length 1 value :" ;
	cin >> l1;
	
	cout << "enter length 2 value :" ;
	cin >> l2;
	
	cout << "enter length 3 value :" ;
	cin >> l3;
	
	triangle triangle (l1 , l2 , l3);
	triangle.shape(l1 ,l2 ,l3);
	}
