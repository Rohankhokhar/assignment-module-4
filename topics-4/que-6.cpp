#include<iostream>
using namespace std;

class rr {
private:
    int pvalue; 
protected:
    int provalue; 
public:
    int pubvalue; 

   
    rr(int p, int pro, int pub) {
    	pvalue = p;
    	provalue =pro;
    	pubvalue =pub;
	}

    
    void display(){
        cout << "private Value: " << pvalue << endl; 
        cout << "protected Value: " << provalue << endl; 
        cout << "public Value: " << pubvalue << endl; 
    }
};

class bb : public rr {
public:
    
    bb(int p, int pro, int pub) : rr(p, pro, pub) {}

    
    void display(){
       
        cout << "protected Value: " << provalue << endl; 
        cout << "public Value: " << pubvalue << endl; 
    }
};

int main() {
    int pvalue = 1;
    int provalue = 2;
    int pubvalue = 3;

    rr rr(pvalue, provalue, pubvalue);
    rr.display(); 
    bb bb(pvalue, provalue, pubvalue);
    bb.display();

    
}

