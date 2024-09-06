#include<iostream>
using namespace std;

class criket{
	string name;
	int age ;
	string team ;
	
	public :
	criket(string n , int ag , string te){
	name = n ;
	age =  ag ;
	team = te ;	
	}
	
	void display(){
		cout << "cricketer name :" << name <<endl ;
		cout << "cricketer age  :" << age << endl ;
		cout << "cricketer team :" << team <<endl ;
	}
};

class batsman : public criket{
	int totalrun , avragerun ,bestperfomance ;
	int matchplayed = 10;
	
	public :
	    batsman(string n, int ag , string te, int t, int b) : criket(n, ag, te){
			totalrun =t;
			bestperfomance = b ;
			avr();
		}
		
		void avr(){
			avragerun = totalrun / 10 ;
		}
		
		
		void bdisplay(){
			display();
			cout << "total runs :" << totalrun << endl;
			cout << "avrage run :" << avragerun << endl;
			cout << "bestperofomance :" << bestperfomance << endl;
			
		}
};

int main(){
	int ag ,t,a,b;
	string n,te;
	
	cout << "enter cricketre name :" ;
	cin >> n ;
	
	cout << "enter cricketre age  :" ;
	cin >> ag ;
	
	cout << "enter cricketre team :" ;
	cin >> te ;
	
	cout << "enter cricketre totalrun :" ;
	cin >> t ;
	
	cout << "enter cricketre bestperfomance : :" ;
	cin >> b ;
	
	batsman B(n,ag,te,t,b);
	B.bdisplay();
}
