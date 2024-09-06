#include <iostream>
using namespace std;

class swapnum {
    int a, b;
public:
    swapnum(int x, int y) {
    	a =x;
    	b = y;
	} 
    friend void swap(swapnum& sn);
    void display(){
        cout << "a = " << a << " b = " << b << endl;
    }
};

void swap(swapnum& sn) {
    sn.a = sn.a + sn.b; 
    sn.b = sn.a - sn.b; 
    sn.a = sn.a - sn.b;
}

int main() {
    int x, y;
    
    cout << "enter num1 : ";
    cin >> x ;
    
    cout << "enter num2 :" ;
    cin >> y;
    
    swapnum sn(x, y);
    sn.display();
    swap(sn);
    sn.display();


}

