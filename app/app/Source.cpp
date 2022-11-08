#include <iostream>
#include <ctime>

using namespace std;

string f(string password)
{
	srand(time(NULL));
	for (int i = 0; i < 11; i++)
	{
		password += rand() % ('z' - 'a' + 1) + 'a';
		password += rand() % ('9' - '0' + 1) + '0';
	}
	return password;
}

void main()
{
	string password;
	password = f(password);
	cout << "Your password has been successfully generated!\n" << password;
}
