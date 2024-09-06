#include<iostream>
using namespace std;

class bank{
	int account_num ,balance ;
	
	public :
		bank(int a , int b){
			account_num = a;
			balance = b ;
		}
		
		void diposit_money(int d){
			balance += d ;
		}
		
		void withdrwal_money(int w){
			if(balance >= w){
				balance -= w;
				cout << "transection sucessfully done ! " << endl;
			}
			else{
				cout << "balance is insuficiant !" << endl;
			}
		}
		
		void display(){
			cout << "account number :" << account_num << endl ;
			cout << "remaining account balance :" << balance << endl ;
		}
};

int main(){

    int a ,b , diposit_money ,withdrwal_money ;

    cout << "enter a account number :";
    cin >> a;
    
    cout << "enter a account balance :";
    cin >> b;
    
    cout << "enter a diposit money :" ;
    cin >> diposit_money ;
    
    cout << "enter a withdrwal money :" ;
    cin >> withdrwal_money ;
    
    bank bank(a ,b);
    bank.diposit_money(diposit_money);
    bank.withdrwal_money(withdrwal_money);
    bank.display();
}
