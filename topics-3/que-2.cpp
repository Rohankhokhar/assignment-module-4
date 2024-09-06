#include<iostream>
using namespace std;

class calculator{
	int res ;
	public:
	calculator (int num1 , int num2 ,char opretor){
		if( opretor == '+'){
		res= num1 + num2;
		cout << "addition of two number is :" << res << endl ;
	    }
	    else if( opretor == '-'){
		res= num1 - num2;
		cout << "substriction of two number is :" << res << endl ;
	    }
	    else if( opretor == '*'){
		res= num1 * num2;
		cout << "multiplication of two number is :" << res << endl ;
	    }
	    else if( opretor == '/'){
		res= num1 / num2;
		cout << "divison of two number is :" << res << endl ;
	    }
	}
};

int main(){
	int num1 , num2 ;
	char opretor ;
	cout << "enter num1 value :" ;
	cin >> num1 ;
	
	cout << "enter num2 value :";
	cin >> num2;
	
	cout << "enter opretor (+,-,*,/) :-";
	cin >> opretor;
	
	calculator calculator (num1 , num2 , opretor);
}
