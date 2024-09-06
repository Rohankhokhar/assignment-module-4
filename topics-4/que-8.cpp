#include<iostream>
using namespace std;

class aaa{
	public:
		int opretror(int num1 , int num2){
			return num1+num2;
		}
		int opretror(int num1 , int num2 , char op){
			return num1-num2;
		}
		int multipla(int num1 , int num2){
			return num1*num2;
		}
		int divison(int num1 , int num2 , char op){
			return num1/num2;
		}
		
		void display(int result){
			cout << "calculation is"  << result << endl;
		}
};
int main(){
	int num1,num2;
	char op;
	int result;
	
	cout << "enter value of num1:";
	cin >> num1;
	
	cout << "enter value of num2:";
	cin >> num2;
	
	cout << "enter opretor:";
	cin >> op;
	
	aaa a;
	
	switch (op) {
        case '+':
            result = a.opretror(num1, num2);
            break;
        case '-':
            result = a.opretror(num1, num2, op);
            break;
        case '*':
            result = a.multipla(num1, num2);
            break;
        case '/':
            result = a.divison(num1, num2,op);
            break;
        default:
            cout << "invalid operator!" << endl;
        
    }

    a.display(result);
	
}
