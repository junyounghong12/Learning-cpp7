#include<iostream>
#include<string>
using namespace std;

class Board {
public:
    static int n; // �Խñ� ��
    static string* save; // �Խñ� ����
    static void add(string s) { // �Խñ� �߰�
        save[n++] = s;
    }
    static void print() { // �Խñ� ��� ���
        cout << "************* �Խ����Դϴ�. *************\n";
        for (int i = 0; i < n; i++)
            cout << i << ": " << save[i] << endl;
    }
};
// �ʱ�ȭ
int Board::n = 0;
string* Board::save = new string[100];

int main() {
    // Board myBoard; // ��ü ������ ������ �����Դϴ�. 
    Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
    Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
    Board::print();
    Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
    Board::print();
}
