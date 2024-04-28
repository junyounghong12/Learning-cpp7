#include <iostream>
#include <string>
using namespace std;

class Trace { // 클래스 정의
public:
	static int n; // 저장된 디버깅 정보 개수
	static string tagtext[100]; // 디버깅 정보 태그 저장하는 배열
	static string save[100]; // 디버깅 정보 내용 저장하는 배열

	static void put(string tag, string deb) { // 디버깅 정보 저장
		tagtext[n] = tag;
		save[n++] = deb;
	}

	static void print(string tag = "all") { // 저장된 디버깅 정보 출력
		if (tag == "all") { // 모두 출력
			cout << "--- 모든 Trace 정보를 출력합니다. ---\n";
			for (int i = 0; i < n; i++) {
				cout << tagtext[i] << ":" << save[i] << endl;
			}
		}
		else { // 특정 태그만 출력
			cout << "--- " << tag << "태그의 Trace 정보를 출력합니다. ---\n"; 
			for (int i = 0; i < n; i++) {
				if (tagtext[i] == tag)
					cout << tagtext[i] << ":" << save[i] << endl;
			}
		}
	}
};

// 초기화
int Trace::n = 0;
string Trace::tagtext[100];
string Trace::save[100];

void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요>> ";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음"); // 디버깅 정보 저장
	c = a + b;
	Trace::put("f()", "합 계산"); // 디버깅 정보 저장
	cout << "합은 " << c << endl;
}

int main() {
	Trace::put("main()", "프로그램을 시작합니다"); // 디버깅 정보 저장
	f();
	Trace::put("main()", "종료");    // put()의 첫 번째 매개 변수는 태그이고 
									 // 두 번째 매개 변수는 디버깅 정보이다. 
	Trace::print("f()"); // "f()" 태그를 가진 디버깅 정보를 모두 출력한다.
	Trace::print(); // 모든 디버깅 정보를 출력한다.
}