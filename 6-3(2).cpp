// 3-(2)디폴트 매개 변수를 가진 하나의 함수로 big()을 작성하고 프로그램을 완성하라.
#include <iostream>
using namespace std;

int big(int x, int y, int max = 100) {
    // 조건문 이용
    int bigger = x;
    if (bigger < y)
        bigger = y;
    if (bigger > max)
        bigger = max;
    return bigger;
}

int main() {
    int x = big(3, 5); // 3과 5중 큰 값은 5는 최대값 100보다 작으므로, 5 리턴 
    int y = big(300, 60); // 300과 60 중 큰 값 300이 최대값 100보다 크므로, 100리턴 
    int z = big(30, 60, 50); // 30과 60 중 큰 값 60이 최대값 50보다 크므로, 50리턴 
    cout << x << ' ' << y << ' ' << z << endl;
}
