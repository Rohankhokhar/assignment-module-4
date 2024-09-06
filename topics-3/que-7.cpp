#include<iostream>
using namespace std ;

class date{
	int day , month , year ;
	
	public :
		void set_dete(int d , int m , int y){
			day = d ;
			month = m ;
			year = y;
		}
		
		int dm( int month){
			switch ( month ){
				case 1:
					return 31 ;
				break ;	
				case 2:
					return 28 ;
				break ;	
				case 3:
					return 31 ;
				break ;	
				case 4:
					return 30 ;
				break ;	
				case 5:
					return 31 ;
				break ;	
				case 6:
					return 30 ;
				break ;	
				case 7:
					return 31 ;
				break ;	
				case 8:
					return 31 ;
				break ;	
				case 9:
					return 30 ;
				break ;	
				case 10:
					return 31 ;
				break ;	
				case 11:
					return 30 ;
				break ;	
				case 12:
					return 31 ;
				break ;	
			}
		}
		
		int isvalid(){
			if (month <1 || month> 12 || day <1 || day > dm(month)){
				cout << "invalid date !" << endl ;
			}
			else {
				cout << "valid date !" << endl ;
			}
		}
		
		void display(){
			cout << "date :" << day << "/" << month << "/" << year  << endl;
		}
};


int main(){
	int d , month ,y ;
	
	cout << "enter a day :" ;
	cin >> d ;
	
	cout << "enter a month :";
	cin >> month;
	
	cout << "enter a year :";
	cin >> y;
	
	date dd;
	dd.set_dete(d,month,y);
	dd.isvalid();
	dd.display();	
	
	
}
