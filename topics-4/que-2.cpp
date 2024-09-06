#include<iostream>
using namespace std;

class shape{
	protected :
	float length;
	float width;
	
	public :
	shape(float l , float w ){
		length = l;
		width = w;
	}
};

class rectangle :public shape{
	public:
	rectangle(float l , float w) :shape (l,w){
		
	}
	
	float getarea(){
		return length * width ;
	}
	
	void display(){
		cout << "area of rectangle is :" << getarea() << endl;
	}
};

int main(){
	int l , w;
	
	cout << "enter length :";
	cin >> l ;
	
	cout << "enter width :";
	cin >> w;
	
	rectangle rect(l,w);
	rect.display();
}
