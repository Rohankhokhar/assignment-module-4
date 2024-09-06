#include<iostream>
using namespace std;

class person{
	protected :
	string name;
	int age ;
	
	person(string n ,int a){
		name = n;
		age = a;
	}
	
	void display(){
		cout << "person name :" << name << endl;
		cout << "person age :" << age << endl;
	}
};

class student : public person{
	float percentage ;
	
	public :
		
		student(string n , int a, float p) :person(n,a){
			percentage = p;
		}
		
		void sdisplay(){
			display();
			cout << "percentage :" << percentage << endl;
		}
};

class techer : public person{
	float salary ;
	
	public :
		techer(string n ,int a , float s) : person (n,a){
			salary = s;
		}
		
		void tdisplay(){
			display();
			cout << "salary :" << salary << endl ;
		}
};

int main(){
	int a;
	string n ;
	float p ,s ;
	
	cout << "enter person name :";
	cin >> n ;
	
	cout << "enter person age :";
	cin >> a ;
	
	cout << "enter student percentage :";
	cin >> p;
	
	
	cout << "for the student :";
	student student ( n , a, p);
	student.sdisplay();
}
