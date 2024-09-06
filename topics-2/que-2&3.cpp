#include<iostream>
using namespace std;

class Bank{
	public :
		string acconter_name ;
		int account_number;
		string account_type;
		int balance ;
		
		Bank(string ac_name , int ac_number , string ac_type , int bal){
		acconter_name = ac_name ;
		account_number = ac_number ;
		account_type = ac_type ;
		balance =	bal ;
	}
	
	    int dipositammount(int diposited_ammount){
	    	balance +=  diposited_ammount;
		}
		
		int withdrwalamount(int withdrwal_ammount){
			if(withdrwal_ammount <=balance){
				balance -= withdrwal_ammount;
			}
			else{
				cout << "----------------------------" << endl;
				cout << "insuficiant balance !" << endl;
			}
		}
		
		void display(){
			cout << "accounter name is " << acconter_name << endl ;
			cout << "account number is " << account_number << endl ;
			cout << "account type is " << account_type << endl ;
			cout << "account balance is " << balance << endl ;
			
		}	
};

int main(){
	
	string acconter_name ;
	int account_number;
	string account_type;
	int balance ;
	int diposited_ammount;
	int withdrwal_ammount;
	
	cout << "enter accounter name :" ;
	cin >> acconter_name;
	
    cout << "enter accounter number :" ;
	cin >> account_number;
	
	cout << "enter account type :" ;
	cin >> account_type;
	
	cout << "enter account balance :" ;
	cin >> balance;	
	
	cout << "enter how much diposit to ammount in account :";
	cin >> diposited_ammount;
	
	cout << "enter a withdrawal ammount :";
	cin >> withdrwal_ammount ;
	
	Bank b(acconter_name , account_number ,  account_type , balance);
	
	b.dipositammount(diposited_ammount);
	b.withdrwalamount(withdrwal_ammount);
	b.display();
	
	
	
	
}
