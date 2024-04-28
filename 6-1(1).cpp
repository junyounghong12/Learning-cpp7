// 1-(1)add() 함수를 중복 작성하고 프로그램을 완성하라.
#include <iostream>
using namespace std;

int add(int n[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) // 반복문 이용
        sum += n[i];
    return sum;
}

int add(int n[], int size, int m[]) {
    int sum = 0;
    sum = add(n, size) + add(m, size);
    return sum;
}

int main() {
    int a[] = { 1,2,3,4,5 };
    int b[] = { 6,7,8,9,10 };
    int c = add(a, 5); // 배열 a의 정수를 모두 더한 값 리턴 
    int d = add(a, 5, b); // 배열 a와 b의 정수를 모두 더한 값 리턴 
    cout << c << endl; // 15 출력 
    cout << d << endl; // 55 출력 
}