// Lab_8_1-1.cpp
// < Кузів Назар >
// Лабораторна робота № 8.1
// Пошук та заміна символів у літерному рядку
// Варіант 6

#include <iostream>
#include <string>

using namespace std;

/*Дано літерний рядок, який містить послідовність символів s0, …, sn, … .
 Замінити кожну пару сусідніх букв “SQ” або ”QS” трійкою зірочок “***”.
 */

string ChangeSQ(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('S', pos)) != -1)
	{
		if (s[pos + 1] == 'Q')
			s.replace(pos, 2, "***");

		if (s[pos + 1] != 'Q')
			pos++;

	}
		
	return s;
}
string ChangeQS(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('Q', pos)) != -1)
	{
		if (s[pos + 1] == 'S')
			s.replace(pos, 2, "***");

		if (s[pos + 1] != 'S')
			pos++;

	}

	return s;
}
int main()
{
	string s;
	cout << "Enter string:" << endl;
	getline(cin, s);

	ChangeSQ(s);
	ChangeQS(s);

	cout << "Modified string:" << s << endl;
	
	return 0;
}