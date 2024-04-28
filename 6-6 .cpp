#include<iostream>
using namespace std;

class ArrayUtility {
public:
	// s1�� s2�� ������ ���ο� �迭�� ���� �����ϰ� ������ ����
	static int* concat(int s1[], int s2[], int size);

	// s1���� s2�� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���� �����Ͽ� ����
	//�����ϴ� �迭�� ũ���retSize�� ����. retSize�� 0�� ��� NULL ����
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility::concat(int s1[], int s2[], int size) {
	int* con = new int[size * 2]; // ���� �Ҵ����� �迭 ����
	for (int i = 0; i < size; i++) { // �ݺ���
		// �迭 ����
		con[i] = s1[i];
		con[i + size] = s2[i];
	}
	return con; // ����� �迭 ����
}

int* ArrayUtility::remove(int s1[], int s2[], int size, int& retSize) {
	int* rem = new int[size]; // �迭 ����
	int index = 0;
	for (int i = 0; i < size; i++) { // �ݺ���
		bool found = false;
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j]) { // ���ǹ�
				found = true;
				break;
			}
		}
		if (!found)
			rem[index++] = s1[i];
	}
	retSize = index;
	return rem; // �迭 ��ȯ
}

int main() {
	int x[5], y[5];
	int retSize = 0;

	cout << "������ 5 �� �Է��϶�. �迭 x�� �����Ѵ�>>"; // ���ù�
	for (int i = 0; i < 5; i++)
		cin >> x[i]; // �Է�
	cout << "������ 5 �� �Է��϶�. �迭 y�� �����Ѵ�>>"; // ���ù�
	for (int i = 0; i < 5; i++)
		cin >> y[i]; // �Է�

	int* s1 = ArrayUtility::concat(x, y, 5);
	cout << "��ģ ���� �迭�� ����Ѵ�\n";
	for (int i = 0; i < 5 * 2; i++) {
		cout << s1[i] << " "; // ���
	}
	cout << endl;

	int* s2 = ArrayUtility::remove(x, y, 5, retSize);
	cout << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ " << retSize << endl;
	for (int i = 0; i < retSize; ++i) {
		cout << s2[i] << " "; // ���
	}
	cout << endl;

	delete[] s1; // ���� �Ҵ� �޸� ����
	delete[] s2; // ���� �Ҵ� �޸� ����
	return 0;
}