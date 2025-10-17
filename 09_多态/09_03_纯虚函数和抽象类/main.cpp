#include <iostream>
using namespace std;

class Animal {
public:
    virtual void eat() = 0;//加个 =0 就是纯虚函数
                           //含有纯虚函数的类叫抽象类，抽象类无法实例化对象
                           //抽象类就是为了继承而生
};

class Cat : public Animal {
public:
    virtual void eat() {
        cout << "猫吃东西" << endl;
    }
};

int main() {
    Cat c;
    c.eat();

    return 0;
}