#include<iostream>
using namespace std;

class employe{
	string employe_name;
	int employe_id , employe_salary ;
	
	public :
		employe(string n , int id , int s){
			employe_name = n ;
			employe_id = id;
			employe_salary = s;
		}
		
		set_salary(int p){
			if (p == 1){
				employe_salary += employe_salary*0.10 ;
			}
			else if (p == 2){
				employe_salary += employe_salary*0.05 ;
			}
			else if (p == 3){
				employe_salary = employe_salary;
			}
			else if (p == 4){
				employe_salary -= employe_salary * 0.05 ;
			}
			else if (p == 5){
				employe_salary -= employe_salary * 0.10;
			}
		}
		
		void display(){
			cout << "employe id :" << employe_id << endl;
			cout << "employe name :" << employe_name << endl;
			cout << "employe salary" << employe_salary <<endl;
		}
};


int main(){
	int id , s , p;
	string n;
	
	cout << "enter employe name :";
	cin >> n;
	
	cout << "enter employe id :";
	cin >> id;
	
	cout << "enter employe salary :" ;
	cin >> s ;
	
	cout << "enter performing rate of employe :";
	cin >> p ;
	
	employe employe ( n , id , s );
	employe.set_salary ( p);
	employe.display();
}
