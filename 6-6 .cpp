#include<iostream>
using namespace std;

class ArrayUtility {
public:
	// s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 리턴
	static int* concat(int s1[], int s2[], int size);

	// s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴
	//리턴하는 배열의 크기는retSize에 전달. retSize가 0인 경우 NULL 리턴
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility::concat(int s1[], int s2[], int size) {
	int* con = new int[size * 2]; // 동적 할당으로 배열 생성
	for (int i = 0; i < size; i++) { // 반복문
		// 배열 복사
		con[i] = s1[i];
		con[i + size] = s2[i];
	}
	return con; // 연결된 배열 리턴
}

int* ArrayUtility::remove(int s1[], int s2[], int size, int& retSize) {
	int* rem = new int[size]; // 배열 생성
	int index = 0;
	for (int i = 0; i < size; i++) { // 반복문
		bool found = false;
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j]) { // 조건문
				found = true;
				break;
			}
		}
		if (!found)
			rem[index++] = s1[i];
	}
	retSize = index;
	return rem; // 배열 반환
}

int main() {
	int x[5], y[5];
	int retSize = 0;

	cout << "정수를 5 개 입력하라. 배열 x에 삽입한다>>"; // 지시문
	for (int i = 0; i < 5; i++)
		cin >> x[i]; // 입력
	cout << "정수를 5 개 입력하라. 배열 y에 삽입한다>>"; // 지시문
	for (int i = 0; i < 5; i++)
		cin >> y[i]; // 입력

	int* s1 = ArrayUtility::concat(x, y, 5);
	cout << "합친 정수 배열을 출력한다\n";
	for (int i = 0; i < 5 * 2; i++) {
		cout << s1[i] << " "; // 출력
	}
	cout << endl;

	int* s2 = ArrayUtility::remove(x, y, 5, retSize);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << endl;
	for (int i = 0; i < retSize; ++i) {
		cout << s2[i] << " "; // 출력
	}
	cout << endl;

	delete[] s1; // 동적 할당 메모리 해제
	delete[] s2; // 동적 할당 메모리 해제
	return 0;
}