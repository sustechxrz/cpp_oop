#include <iostream>
using namespace std;


class Animal {
public:
    Animal() {
        m_Data = 1;
    }
    int m_Data;
};

class Cat : public Animal {
public:
    Cat() {
        m_Data = 2;
    }
    int m_Data;
};

void test() {
    Cat c;
    cout << c.m_Data << endl;
    cout << c.Animal::m_Data << endl;

    cout << &(c.m_Data) << endl;
    cout << &(c.Animal::m_Data) << endl;

}

int main() {
    test();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}