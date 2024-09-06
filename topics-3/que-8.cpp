#include<iostream>
using namespace std;

class address {
	string street;
	string city;
	string state;
	int zipcode;
	
	public:
		
	address(string st , string ct , string s , int z){
		street = st;
		city = ct ;
		state = s;
		zipcode = z;
	}
	
	void addressdisplay(){
	 cout << street << "," << city << "," << state << "-" << zipcode << endl;	
	}
};
class student {
	string name , classs ;
	int roll_no , marks ;
	
	public :
		
		student(string n, string c , int r , int m){
			name = n;
			classs = c ;
			roll_no = r;
			marks = m; 
		}
		
		int gred(){
		if (marks >= 90)
		return 'a';
        else if (marks >= 80)
		return 'b';
        else if (marks >= 70)
		return 'c';
        else if (marks >= 60)
		return 'd';
        else
		return 'F';
		}
		
		void display(){
			cout << "student name :" << name << endl;
			cout << "student class :" << classs << endl ;
			cout << "student roll no. :" << roll_no << endl ;
			cout << "student marks :" << marks << endl;
			cout << "gred :" << gred() << endl ;
		}
	
};

int main(){
	string st, ct, s , z , n , c ;
	int r , m ;
	
	cout <<"enter student name :" ;
	cin >> n ;
	
	cout <<"enter student class :" ;
	cin >> c;
	
	cout <<"enter student roll no." ;
	cin >> r;
	
	cout << "student marks :" ;
	cin >> m;
	
	cout <<"enter stret" ;
	cin >> st;
	
	cout <<"enter city :" ;
	cin >> ct;
	
	cout <<"enter state :" ;
	cin >> s;
	
	cout <<"enter zipcode:";
	cin >> z;
	
	student student(n,c,r,m);
	student.display();
	address address(st,ct,s,z);
	address.addressdisplay();
}



