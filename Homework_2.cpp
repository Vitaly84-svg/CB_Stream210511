# include <iostream>

using namespace std;

int main() {
	
	// ������ �������
int a = 7;
char b = 'C';
float c = 3.14;
int mass [] = {1,2,3,4,5};
   
   // ������ �������
enum SYMBOLS {Player1='X', Player2='0', Others='_'};
   
   //������ �������
SYMBOLS field[3][3] = {Others};
field[0][0] = Player1;
field[1][0] = Player2;
field[2][0] = Others;
cout << "Pl1" << (char)field[0][0] << endl;
cout << "Pl2" << (char)field[1][0] << endl;
cout << "Oth" << (char)field[2][0] << endl;
cout << field[1][1] << endl;

   //��������� �������
typedef struct {
		int szY;
		int szX;
		SYMBOLS map[3][3];
	} Field;
	
return 0;
}