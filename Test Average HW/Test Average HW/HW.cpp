#include <iostream>

using namespace std;

void letterGrade(double);
int main()
{
	int grade1, grade2, grade3, grade4, grade5;
	cout << "Input 5 grades you received: " << endl;
	cout << "Grade 1 : ";
	cin >> grade1;
	cout << "Grade 2 : ";
	cin >> grade2;
	cout << "Grade 3 : ";
	cin >> grade3;
	cout << "Grade 4 : ";
	cin >> grade4;
	cout << "Grade 5 : ";
	cin >> grade5;
	int grades[5] = { grade1, grade2, grade3, grade4, grade5 };
	cout << grade1 << grade2 << grade3 << grade4 << grade5 << endl;
	int totalGrade = grades[0] + grades[1] + grades[2] + grades[3] + grades[4];
	cout << "The total sum of your grades is: " << totalGrade << "." << endl;
	int sizeGrade = 5;
	double averageGrade = (totalGrade / sizeGrade);
	cout << "The average of these graded assignments is: " << averageGrade << "." << endl;
	letterGrade(averageGrade);
	
	system("pause");
	return 0;
	
}
void letterGrade(double x)
{
	if (x >= 90)
		cout << "Good Job! You have an A!" << endl;
	else if (x >= 80)
		cout << "Good you have a B." << endl;
	else if (x >= 70)
		cout << "You have a C, keep trying!" << endl;
	else if (x >= 60)
		cout << "You have a D. You need to study for this class!" << endl;
	else
		cout << "You're failing, please see the professor after class" << endl;
}