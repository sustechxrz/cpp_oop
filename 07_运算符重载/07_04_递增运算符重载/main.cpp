#include <iostream>
using namespace std;

/*
++

前置++
后置++
*/

class Complex {
    friend ostream& operator<<(ostream& c, Complex a);
public:
    Complex() : real(0), image(0){}
    Complex(int real, int image) {
        this->real = real;
        this->image = image;
    }

    Complex& operator++() {
        this->real += 1;
        return *this;
    }

    Complex operator++(int) {
        Complex temp = *this;
        this->real += 1;
        return temp;
    }

private:
    int real;
    int image;
};

ostream& operator<<(ostream& c, Complex a) {
    c << a.real << "+" << a.image << "i" ;
    return c;
}

int main() {
    int x = 1;
    cout << ++(++x) << endl;
    cout << x << endl;

    Complex a(10,10);
    cout << a << endl;
    //++c;
    cout << ++(++a) << endl;
    cout << a << endl;

    cout << a++ << endl;
    cout << a << endl;

    //cout << ((a++)++)++ << endl;
    cout << a << endl;

    int b = 5;
    //cout << ((b++)++)++ << endl;
    cout << b << endl;


    return 0;
}