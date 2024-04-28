// 1-(2)����Ʈ �Ű� ������ ���� �ϳ��� add() �Լ��� �ۼ��ϰ� ���α׷��� �ϼ��϶�.
#include <iostream>
using namespace std;

int add(int n[], int size, int m[] = NULL) {
	int sum = 0;
	// ���ǹ�, �ݺ��� �̿�
	if (m == NULL) {
		for (int i = 0; i < size; i++)
			sum += n[i];
		return sum;
	}
	else {
		for (int i = 0; i < size; i++) {
			sum += n[i];
			sum += m[i];
		}
		return sum;
	}
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5); // �迭 a�� ������ ��� ���� �� ���� 
	int d = add(a, 5, b); // �迭 a�� b�� ������ ��� ���� �� ���� 
	cout << c << endl; // 15 ��� 
	cout << d << endl; // 55 ��� 
}