//P13121Karina
#include <iostream>
using namespace std;
#include<cmath>
int main() {
	/*
	* Boolean34◦Даны координаты поля шахматной доски x, y (целые числа, лежащие в диапазоне 1–8). Учитывая, что левое нижнее поле доски (1, 1) является черным, проверить истинность высказывания: «Данное поле является белым».
	*/
	/*
	setlocale(LC_ALL, "Rassian");
	int x, y;
	cin >> x >> y;
	if ((y + x) % 2 == 0) cout << "чёрное\n";
	else cout << "белое\n";
	*/
	/*
	* Boolean35◦ Даны координаты двух различных полей шахматной доски x1, y1, x2, y2 (целые числа, лежащие в диапазоне 1–8). Проверить истинность высказывания: «Данные поля имеют одинаковый цвет».
	*/
	/*
	setlocale(LC_ALL, "Rassian");
	int x1, y1, x2,y2;
	cin >> x1>> y1>> x2>>y2;
	if ((x1 +y1 ) % 2 == (x2 + y2)%2) cout << "одинаковые\n";
	else cout << "\n";
	*/
	/*
	* 38
	*/
	/*
	setlocale(LC_ALL, "Rassian")
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (abc(x1 - x2)) == (abc(y1 - y2))cout << "может\n";
	else cout <<" не может\n";
	*/
	/* Boolean39◦ .Даны координаты двух различных полей шахматной доски x1, y1, x2, y2(целые числа, лежащие в диапазоне 1–8).Проверить истинность высказывания : «Ферзь за один ход может перейти с одного поля на другое».
	setlocale(LC_ALL, "Rassian")*/
	/*int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (abc(x1 - x2)) == (abc(y1 - y2))cout << "может\n";
	else cout << " не может\n";
	*/
	/*If24*/
	/*
	double x, fx;
	cin >> x;
	if (x > 0) { fx = 2 * sin(x); }
	else { fx = 6 - x; }
	cout << fx;
	*/
	/*If25.*/
	/*
	int x, fx;
	cin >> x;
	if (x < -2 || x>2) { fx = 2 * x; }
	else { fx = -3 * x; }
	cout << fx;
	*/
	/*If26◦*/
	/*
	int x, fx;
	cin >> x;
	if (x<=0) { fx = -x; }
	else if(0<x<2) { fx = x*x; }
	else if (x >= 2) { fx = 4; }
	cout << fx;
	*/
	/*If27.*/
	double x, fx;
	cin >> x;
	if (x < 0) { fx = 0; }
	else if (x==[0,1),[2,3]) { fx=1;}
	else if (x == [1, 2), [3, 4]) { fx = -1; }
	cout << fx;
	return 0;
}