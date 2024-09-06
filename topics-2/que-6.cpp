#include<iostream>
using namespace std;

class person{
	string name;
	int age ;
	string country;
	
	public :
		void set_name(string n){
			name = n;
			
		}
		
		string get_name(){
			return name;
		}
		
		void set_age(int a){
			age = a;
			
		}
		
		int get_age(){
			return age;
		}
		
		void set_country(string c){
			country = c;
			
		}
		
		string get_country(){
			return country;
		}
		
		void display(){
			cout << "person name :" << get_name() << endl ;
			cout << "person age :" << get_age() <<endl;
			cout << "person county :" <<get_country() << endl; 
		}
};

int main(){
	
	string n ,c;
	int a;
	
	cout << "enter person name :" ;
	cin >> n ;
	
	cout << "enter person age :" ;
	cin >> a;
	
	cout << "enter person country :";
	cin >> c;
	
	person p;
	p.set_name(n);
	p.set_age(a);
	p.set_country(c);
	p.display();
	
	
	
	
	
	
}
