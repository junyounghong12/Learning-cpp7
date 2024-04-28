#include <iostream>
#include <cstdlib>
using namespace std;

class Random {
public:
	// �׻� �ٸ� �������� �߻���Ű�� ���� seed�� �����ϴ� �Լ�
	static void seed() { srand((unsigned)time(NULL)); } // ���� ����
	static int nextInt(int min = 0, int max = 32767) { return (rand() % (max - min + 1)) + min; } // min�� max ������ ���� ���� ����
	static char nextAlphabet() { // ���� ���ĺ� ���� ����
		if (rand() % 2)
			return ((rand() % ('z' - 'a' + 1)) + 'a');
		else
			return ((rand() % ('Z' - 'A' + 1)) + 'A');
	}
	static double nextDouble() { // 0���� ũ�ų� ���� 1���� ���� ���� �Ǽ� ����
		double a = (double)rand() / RAND_MAX;
		double b = (a != 1 ? a : nextDouble());
		return b;
	}
};

int main() {
    Random::seed();

    cout << "1���� 100���� ������ ���� 10���� ����մϴ�\n";
    for (int i = 0; i < 10; i++)
        cout << Random::nextInt(1, 100) << ' '; // ���

    cout << endl << "���ĺ��� �����ϰ� 10���� ����մϴ�\n";
    for (int i = 0; i < 10; i++)
        cout << Random::nextAlphabet() << ' '; // ���

    cout << endl << "������ �Ǽ��� 10���� ����մϴ�\n";
    for (int i = 0; i < 10; i++) {
        cout << Random::nextDouble() << ' '; // ���
        if (i == 4) cout << endl;
    }
}