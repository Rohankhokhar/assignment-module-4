#include<iostream>
using namespace std;

class rectangle{
	
	int length;
	int width;
	
	public:
		
	rectangle(int l , int w){
		length = l;
		width = w;
	}
	
	int area(){
		return length * width ;
	}
	
	int perameter(){
		return 2*(length + width);
	}
	
	void display(){
		cout << "length :" << length << endl ;
		cout << "width :" << width << endl;
		cout << "area of rectangle is :" << area() << endl;
		cout << "perameter of rectangle is " << perameter() << endl;
	}
};

int main(){
	int l , w ;
	
	cout <<  "enter length value of rectangle :" ;
	cin >> l;
	
	cout <<  "enter width value of rectangle :" ;
	cin >> w;
	
	rectangle rectangle(l,w);
	rectangle.display();
	
}
