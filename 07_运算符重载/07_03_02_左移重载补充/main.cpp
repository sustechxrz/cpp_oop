#include <iostream>
using namespace std;

class Complex {
    friend void operator<<(ostream& cout, Complex& c);
public:
    Complex(int r, int i) : m_real(r), m_image(i){}
private:
    int m_real, m_image;
};

void operator<<(ostream& cout, Complex& c) {
    cout << c.m_real << "+" << c.m_image << "i" << endl;
}
int main() {
    Complex c(13,14);
    cout << c;
    return 0;
}