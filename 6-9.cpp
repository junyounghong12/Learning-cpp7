#include<iostream>
#include<string>
using namespace std;

class Board {
public:
    static int n; // 게시글 수
    static string* save; // 게시글 저장
    static void add(string s) { // 게시글 추가
        save[n++] = s;
    }
    static void print() { // 게시글 모두 출력
        cout << "************* 게시판입니다. *************\n";
        for (int i = 0; i < n; i++)
            cout << i << ": " << save[i] << endl;
    }
};
// 초기화
int Board::n = 0;
string* Board::save = new string[100];

int main() {
    // Board myBoard; // 객체 생성은 컴파일 오류입니다. 
    Board::add("중간고사는 감독 없는 자율 시험입니다.");
    Board::add("코딩 라운지 많이 이용해 주세요.");
    Board::print();
    Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
    Board::print();
}
