#include <iostream>
using namespace std;

class Animal {
public:
    //虚函数
    virtual void eat() {
        cout << "动物吃东西" << endl;
    }
};

class Cat : public Animal {
public:
    void eat() {
        cout << "猫吃东西" << endl;
    }
};

//main -> test -> eat -> Animal::eat
//函数传参是个动物，但是传入不同的动物，会产生不同的定位，这就叫多态
//子类重写了父类的虚函数

void eat(Animal& a) {
    a.eat();
}

void test() {
    Cat c;
    eat(c);
}

int main() {
    test();
    return 0;
}