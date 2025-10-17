#include <iostream>
using namespace std;

class Animal {
public:
    //实际上是调用一个虚函数指针，指针指向一个包含所有虚函数的数组的首地址
    virtual void eat() {
        cout << "动物吃东西" << endl;
    }
    virtual void run() {
        cout << "动物在跑" << endl;
    }
};

class Cat : public Animal {
public:
    void eat() {
        cout << "猫吃东西" << endl;
    }
};

void eat(Animal& a) {
    Animal b;
    a.eat();
}

void Test() {
    Cat c;
    eat(c);
    cout << "Animal's size = " << sizeof(Animal) << endl;
}
int main() {
    Test();
    return 0;
}