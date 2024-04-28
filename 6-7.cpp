#include <iostream>
#include <cstdlib>
using namespace std;

class Random {
public:
	// 항상 다른 랜덤수를 발생시키기 위한 seed를 설정하는 함수
	static void seed() { srand((unsigned)time(NULL)); } // 씨드 설정
	static int nextInt(int min = 0, int max = 32767) { return (rand() % (max - min + 1)) + min; } // min과 max 사이의 랜덤 정수 리턴
	static char nextAlphabet() { // 랜덤 알파벳 문자 리턴
		if (rand() % 2)
			return ((rand() % ('z' - 'a' + 1)) + 'a');
		else
			return ((rand() % ('Z' - 'A' + 1)) + 'A');
	}
	static double nextDouble() { // 0보다 크거나 같고 1보다 적은 랜덤 실수 리턴
		double a = (double)rand() / RAND_MAX;
		double b = (a != 1 ? a : nextDouble());
		return b;
	}
};

int main() {
    Random::seed();

    cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다\n";
    for (int i = 0; i < 10; i++)
        cout << Random::nextInt(1, 100) << ' '; // 출력

    cout << endl << "알파벳을 랜덤하게 10개를 출력합니다\n";
    for (int i = 0; i < 10; i++)
        cout << Random::nextAlphabet() << ' '; // 출력

    cout << endl << "랜덤한 실수를 10개를 출력합니다\n";
    for (int i = 0; i < 10; i++) {
        cout << Random::nextDouble() << ' '; // 출력
        if (i == 4) cout << endl;
    }
}