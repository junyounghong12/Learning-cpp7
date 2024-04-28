#include<iostream>
using namespace std;

class ArrayUtility {
public:
    static void intToDouble(int source[], double dest[], int size) { // int[]�� double[]�� ��ȯ
        for (int i = 0; i < size; i++) //�ݺ���
            dest[i] = (double)source[i];
    }
    static void doubleToInt(double source[], int dest[], int size) { // double[]�� int[]�� ��ȯ
        for (int i = 0; i < size; i++) //�ݺ���
            dest[i] = (int)source[i];
    }
};

int main() {
    int x[] = { 1,2,3,4,5 };
    double y[5];
    double z[] = { 9.9,8.8,7.7,6.6,5.6 };

    ArrayUtility::intToDouble(x, y, 5); // x[] -> y[]
    for (int i = 0; i < 5; i++) cout << y[i] << ' ';
    cout << endl;

    ArrayUtility::doubleToInt(z, x, 5); // z[] -> x[]
    for (int i = 0; i < 5; i++) cout << x[i] << ' ';
    cout << endl;
}