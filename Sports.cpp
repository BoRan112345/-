// Sports.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

enum item { 籃球 = 1,棒球,羽毛球};

char sport_name[3][10] = { "籃球","棒球","羽毛球" };

void sports_item(int);
void output_sport();
void print();
void output();

int main()
{
	print();
}
void sports_item(int index) {
	switch (index)
	{
	case item::籃球:
	{
		cout << "恭喜你,你選到了："<<sport_name[0]<<endl;
		break;
	}
	case item::棒球:
	{
		cout << "恭喜你,你選到了：" << sport_name[1] << endl;
		break;
	}
	case item::羽毛球:
	{
		cout << "恭喜你,你選到了：" << sport_name[2] << endl;
		break;
	}
	}
}
void output_sport() {
	int sport_index;
	int person_sport;
	cout <<endl<< "請輸入人數：";
	cin >> person_sport;
	for (int i = 1; i <= person_sport; i++)
	{
		cout << "-------進入運動的世界----------" << endl;
		cout << "(" << i << ")位為："<<endl;
		output();
		cout << "請選擇種類：";
		cin >> sport_index;
		sports_item(sport_index);
	}
}

void print() {
	char sport_y_n;
start:
	output();
	cout << "請問要運動嗎？";
	cin >> sport_y_n;
		while (sport_y_n == 'y') {
			output_sport();
			goto start;
	}
		cout << endl << "謝謝光臨";
}

void output() {
	for (int i = 0; i < 3; i++)
	{
		cout << "(" << i + 1 << ")" << sport_name[i] << endl;
	}
}