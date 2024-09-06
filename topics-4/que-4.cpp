#include<iostream>
using namespace std;

class person{
	protected :
		string name ;
		int rollno ;
		
		public:
			person(string n , int r){
				name = n ;
				rollno = r;
			}
			
			void display(){
				cout << "name :" << name << endl;
				cout << "rollno :"<<rollno <<endl;
			}
};

class  ac :public person{
	protected :
	int chem , math , bio ;
	
	public:
		
		ac(string n , int r , int c, int m , int b) : person (n,r){
			chem = c;
			math = m;
			bio = b ;
		}
		
		void acdisplay(){
			display();
			cout << "chem :" <<chem << endl;
			cout << "math :" <<math << endl;
			cout <<"bio:" << bio << endl;
		}
};

class marksheet :public ac {
	
	public:
	marksheet (string n , int r, int c, int m , int b) :ac(n,r,c,m,b){
	}
	void mdisplay(){
		cout << "student marksheet :" << endl;
		display();
		acdisplay();
		
		float totalmarks = chem + math + bio ;
		float total = totalmarks / 3;
		
		cout <<"total mark :"<<totalmarks <<endl;
		cout <<"avrage marks:"<<total <<endl;
	}
};

int main(){
	string n;
	int c,m,b,r;
	
	cout << "enter student name :";
	cin >> n;
	
	cout << "enter student rollno :";
	cin >> r;
	
	cout << "enter chem marks :";
	cin >> c;
	
	cout << "enter math marks :";
	cin >> m;
	
	cout << "enter bio mareks :";
	cin >> b;
	
	marksheet marksheet(n,r,c,m,b);
	marksheet.mdisplay();
}
