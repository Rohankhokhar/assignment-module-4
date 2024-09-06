#include <iostream>
using namespace std;

class matrix {
private:
    int size;
    int* arr;

public:
    matrix(int s) {
    	size =s;
	    arr = new int[size];
    }

    ~matrix() {
        delete[] arr;
    }

    void input() {
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    matrix operator+(matrix& m) {
        matrix temp(size);
        for (int i = 0; i < size; i++) {
            temp.arr[i] = this->arr[i] + m.arr[i];
        }
        return temp;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;

    cout << "enter value of size: ";
    cin >> size;

    matrix m1(size);
	matrix m2(size);

    cout << "Matrix 1:" << endl;
    m1.input();

    cout << "Matrix 2:" << endl;
    m2.input();

    matrix m3 = m1 + m2;

    cout << "matrix addition :" << endl;
    m3.display();

}

