#include <iostream>
#include <string>
using namespace std;

/*
构造函数需要注意的点

1.函数名称和类名保持一致
2.返回值类型 不需要写
3.构造函数可以有参数

*/

class Hero {
public:
    //默认构造函数
    Hero() {
        m_Name = "";
        m_SkillCounts = 4;
        m_Speed = 100;
        cout << "默认构造函数: Hero 构造完毕" << endl;
    }
    //有参构造函数1
    Hero(string name) {
        m_Name = name;
        m_SkillCounts = 4;
        m_Speed = 100;
        cout << "有参构造函数1: Hero 构造完毕" << endl;

    }
    //有参构造函数2
    Hero(string name,int skillcount) {
        m_Name = name;
        m_SkillCounts = skillcount;
        m_Speed = 100;
        cout << "有参构造函数2: Hero 构造完毕" << endl;

    }

private:
    string m_Name;
    int    m_SkillCounts;
    int    m_Speed;

};

int main() {
    Hero h1;
    Hero h2("诺手");
    Hero h3();      //函数声明 int main();  int work();
    Hero h4{};
    Hero h5 = Hero("剑圣");
    Hero h6 = {"猴子",6};

    return 0;
}