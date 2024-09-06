#include<iostream>
using namespace std;

class circle{
	int radius ;
	int pi ;

	public :
		circle(int r){
			radius = r ;
		}
		
		int areaofcircle(){
			return 3.14 * radius * radius ;
		}
		
		int circumface_of_circle(){
			return 2 * 3.14 * radius ;
		}
		
		void display(){
			cout << "radius is :" << radius << endl;
			cout<<"area of circle is :"<< areaofcircle() << endl;
			cout << "circumface of circle :" << circumface_of_circle() << endl;
		}
};
int main(){
	int pi = 3.14 ;
    int r ;
    
    cout << "enter value of radius :";
    cin >> r ;
    
    circle circle(r);
    circle.display();
    
	
}
