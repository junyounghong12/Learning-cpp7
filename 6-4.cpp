#include<iostream>
using namespace std;

class MyVector {
    int* mem; // 배열 포인터
    int size;
public:
    MyVector(int n, int val); // 생성자
    void show() { // 객체 배열 내용 출력
        for (int i = 0; i < size; i++) // 반복문
            cout << mem[i] << ' ';
        cout << endl;
    }
    ~MyVector() { delete[] mem; } // 소멸자
};

MyVector::MyVector(int n = 50, int val = 0) {
    mem = new int[n]; // 배열 동적 할당         
    size = n;
    for (int i = 0; i < size; i++) mem[i] = val; // 반복문
}

int main() {
    MyVector a, b(5, 20); // 객체 a, b 생성
    cout << "테스트 프로그램" << endl;
    a.show();
    b.show();
}