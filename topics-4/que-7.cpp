#include<iostream>
using namespace std;

class A{
	public :
	    A(){
			cout << "i am class a" << endl;
		}
};

class B :public A{
	public :
		B(){
			cout << "i am class b" << endl;
		}
};

class C :public B{
	public :
	    C(){
			cout << "i am class c" << endl;
		}
};

int main(){
	C obj;
}
