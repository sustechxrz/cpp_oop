#include <iostream>
using namespace std;

/*
this指针
1.解决命名冲突
2.*this就可以获取到这个对象本身

this    *this
&h      *(&h) == h
*/

class Hero {
public:
                    //当形参和成员变量同名时，形参会把成员变量覆盖掉
    Hero(int hp) {
        //hp = hp;    //这句话相当于形参自己给自己赋值，无意义
        this->hp = hp;
        cout << this << endl;
        cout << (*this).hp << endl;
    }
    int hp;
};
int main() {
    Hero h(100);
    cout << h.hp << endl;
    cout << &h << endl;
    cout << (*(&h)).hp << endl;
    return 0;
}