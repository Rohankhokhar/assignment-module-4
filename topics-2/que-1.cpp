#include<iostream>
using namespace std;

class calculater{
	public :
	int add(int num1 ,int num2){
		return num1+num2 ;
	}
	int sub(int num1 ,int num2){
		return num1-num2 ;
	}
	int mul(int num1 ,int num2){
		return num1*num2 ;
	}
	int div(int num1 ,int num2){
		return num1/num2 ;
	}
	
	
};
 
int main(){
	int num1 ,num2;
    calculater cal;
    
    cout << "enter num1 value :";
    cin >> num1 ;
    
    cout << "enter num2 value :";
    cin >> num2 ;
    
    cout << "addition is :"<< cal.add(num1,num2) << endl;
    cout << "substriction is :"<< cal.sub(num1,num2) << endl;
    cout << "multiplication is :"<< cal.mul(num1,num2) << endl;
    cout << "division is :"<< cal.div(num1,num2) <<endl ;
}
