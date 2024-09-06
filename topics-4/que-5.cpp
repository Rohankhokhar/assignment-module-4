#include<iostream>
using namespace std;

class student {
	protected :
	int rollno;
	
	public:
	    student(int r){
	  	rollno = r;
	  } 
	  
	  void display(){
	  	cout << "student rollno :" << rollno << endl;
	  }
};
class test : public student{
	protected :
	int sub1 ,sub2;
	public:
		test(int r, int s1 , int s2) :student(r){
			sub1 = s1;
			sub2 = s2;
		}
		
		void tdisplay(){
			display();
			cout << "subject 1 :" << sub1 << endl;
			cout << "subject 2 :" << sub2 << endl;
		}
	
};
class result :public test{
	
	public :
		result(int r ,int s1, int s2) :test(r,s1,s2){
		}
		
		void rdisplay(){
			tdisplay();
			int totalmarks = sub1+sub2;
			cout << "result :" << totalmarks << endl;
		}
};

int main(){
	int r,s1,s2;
	
	cout << "enter student roll no :" ;
	cin >> r;
	
	cout << "enter subject 1 markes:";
	cin >> s1;
	
	cout << "enter subject 2 markes:";
	cin >> s2;
	
	result result(r,s1,s2);
	result.rdisplay();
}
