#include<iostream>
using namespace std;

class car{
	string company ;
	string model ;
	int year;
	
	public :
		
		void set_company(string c){
			company = c;
		}
		
		string get_company(){
			return company;
		}
		
		void set_model(string m){
			model = m;
		}
		
		string get_model(){
			return model;
		}
		
		void set_year(int y){
			year = y;
		}
		
		int get_year(){
			return year;
		}
		
		void display(){
			cout << "company name :" << get_company() << endl;
			cout << "company model :" << get_model() << endl;
			cout << "company year :" << get_year() << endl;
		}
};

int main(){
	string c , m ;
	int y;
	
	cout << "enter company name :";
	cin >> c;
	
	cout << "enter company model name :";
	cin >> m;
	
	cout << "enter company year :";
	cin >> y;
	
	car c1;
	c1.set_company(c);
	c1.set_model(m);
	c1.set_year(y);
	c1.display();
}
	
	
	
	
	
	
	
	
