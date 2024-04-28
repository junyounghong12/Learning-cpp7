#include<iostream>
using namespace std;

class MyVector {
    int* mem; // �迭 ������
    int size;
public:
    MyVector(int n, int val); // ������
    void show() { // ��ü �迭 ���� ���
        for (int i = 0; i < size; i++) // �ݺ���
            cout << mem[i] << ' ';
        cout << endl;
    }
    ~MyVector() { delete[] mem; } // �Ҹ���
};

MyVector::MyVector(int n = 50, int val = 0) {
    mem = new int[n]; // �迭 ���� �Ҵ�         
    size = n;
    for (int i = 0; i < size; i++) mem[i] = val; // �ݺ���
}

int main() {
    MyVector a, b(5, 20); // ��ü a, b ����
    cout << "�׽�Ʈ ���α׷�" << endl;
    a.show();
    b.show();
}