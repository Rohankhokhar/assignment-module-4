#include <iostream>
using namespace std;

class Max{
    int a, b;
public:
    Max(int x, int y) {
    	a =x;
    	b =y;
	} 
	
    friend int fmax( const Max& mf);

    void display()const {
        cout << "a = " << a << " b = " << b << endl;
    }
};

    int fmax( const Max& mf){
    return (mf.a > mf.b) ? mf.a : mf.b;
}

int main() {
    int x, y;

    cout << "enter value of number 1: ";
    cin >> x ;
    
    cout << "enter value of number 2:";
    cin >> y;
    
    Max mf(x, y);

    mf.display();

    cout << "The maximum number is: " << fmax(mf) << endl;

}

