#include <iostream>
using namespace std;

//()
//add()

class AddFunctor {
public:
    AddFunctor() {
        m_acc = 0;
    }
    int operator()(int a, int b) {
        m_acc++;
        return a + b + m_acc;
    }
private:
    int m_acc;
};

int Add(int a, int b) {
    return a + b;
}
int main() {
    AddFunctor add;//仿函数，可以存储状态信息
    cout << add(5,6) << endl;
    cout << add(5,6) << endl;
    cout << add(5,6) << endl;
    cout << add(5,6) << endl;
    cout << add(5,6) << endl;
    //不存储状态信息
    cout << Add(5,6) << endl;
    cout << Add(5,6) << endl;
    cout << Add(5,6) << endl;
    cout << Add(5,6) << endl;
    cout << Add(5,6) << endl;
    cout << Add(5,6) << endl;

    return 0;
}