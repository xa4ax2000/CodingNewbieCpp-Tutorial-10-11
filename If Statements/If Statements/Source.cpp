#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "Please enter your age: ";
	cin >> age;

	if (age >= 50)
	{
		cout << "Dayum, you're old!" << endl;
		cout << "Haha, just kidding." << endl;
	}
	else if (age >= 40)
		cout << "You're getting old buddy." << endl;
	else if (age >= 20)
		cout << "You're still young and fresh!" << endl;
	else
		cout << "Isn't it past your bedtime kiddo?" << endl;

	cin.get();
	system("pause");
	return 0;
}