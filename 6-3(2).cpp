// 3-(2)����Ʈ �Ű� ������ ���� �ϳ��� �Լ��� big()�� �ۼ��ϰ� ���α׷��� �ϼ��϶�.
#include <iostream>
using namespace std;

int big(int x, int y, int max = 100) {
    // ���ǹ� �̿�
    int bigger = x;
    if (bigger < y)
        bigger = y;
    if (bigger > max)
        bigger = max;
    return bigger;
}

int main() {
    int x = big(3, 5); // 3�� 5�� ū ���� 5�� �ִ밪 100���� �����Ƿ�, 5 ���� 
    int y = big(300, 60); // 300�� 60 �� ū �� 300�� �ִ밪 100���� ũ�Ƿ�, 100���� 
    int z = big(30, 60, 50); // 30�� 60 �� ū �� 60�� �ִ밪 50���� ũ�Ƿ�, 50���� 
    cout << x << ' ' << y << ' ' << z << endl;
}
