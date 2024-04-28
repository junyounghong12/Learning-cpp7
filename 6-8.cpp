#include <iostream>
#include <string>
using namespace std;

class Trace { // Ŭ���� ����
public:
	static int n; // ����� ����� ���� ����
	static string tagtext[100]; // ����� ���� �±� �����ϴ� �迭
	static string save[100]; // ����� ���� ���� �����ϴ� �迭

	static void put(string tag, string deb) { // ����� ���� ����
		tagtext[n] = tag;
		save[n++] = deb;
	}

	static void print(string tag = "all") { // ����� ����� ���� ���
		if (tag == "all") { // ��� ���
			cout << "--- ��� Trace ������ ����մϴ�. ---\n";
			for (int i = 0; i < n; i++) {
				cout << tagtext[i] << ":" << save[i] << endl;
			}
		}
		else { // Ư�� �±׸� ���
			cout << "--- " << tag << "�±��� Trace ������ ����մϴ�. ---\n"; 
			for (int i = 0; i < n; i++) {
				if (tagtext[i] == tag)
					cout << tagtext[i] << ":" << save[i] << endl;
			}
		}
	}
};

// �ʱ�ȭ
int Trace::n = 0;
string Trace::tagtext[100];
string Trace::save[100];

void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>> ";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���"); // ����� ���� ����
	c = a + b;
	Trace::put("f()", "�� ���"); // ����� ���� ����
	cout << "���� " << c << endl;
}

int main() {
	Trace::put("main()", "���α׷��� �����մϴ�"); // ����� ���� ����
	f();
	Trace::put("main()", "����");    // put()�� ù ��° �Ű� ������ �±��̰� 
									 // �� ��° �Ű� ������ ����� �����̴�. 
	Trace::print("f()"); // "f()" �±׸� ���� ����� ������ ��� ����Ѵ�.
	Trace::print(); // ��� ����� ������ ����Ѵ�.
}