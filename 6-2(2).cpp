// 2-(2) ����Ʈ �Ű� ������ ���� �ϳ��� �����ڸ� �ۼ��ϰ� ���α׷��� �ϼ��϶�.
#include<iostream>
#include<string>
using namespace std;

class Person {
    // ��� ����
    int id;
    double weight;
    string name;
public:
    Person(int id = 1, string name = "Grace", double weight = 20.5) { // ����Ʈ �Ű� ������ ���� ������
        this->id = id; // this ������ ���
        this->weight = weight; // this ������ ���
        this->name = name; // this ������ ���
    }
    void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

int main() {
    Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
    // ���
    grace.show();
    ashley.show();
    helen.show();
}
