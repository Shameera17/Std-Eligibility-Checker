#include<iostream>
#include<math.h>
int main()
{

	int TotLecs, PresDays, Eligibility;
	int IDno;
	double percentage;
	using namespace std;
	cout << "Enter the total number of Lectures\n";
	cin >> TotLecs;

	int count = 0;
	while (count < 10)
	{
		cout << "\n\nEnter the IDno\n";
		cin >> IDno;
		cout << "Enter the present days of a student\n";
		cin >> PresDays;
		percentage = (0.7);
		Eligibility = (TotLecs*percentage);

		if (PresDays >= Eligibility)
		{
			cout << "\nthe student is ELIGIBLE\n";
			cout << "\nCan sit for the exam :P\n N/A \n";
		}
		else
		{
			cout << "the student is not ELIGIBLE\n";
			cout << "\nThe eligible range start from :\t\t" << Eligibility;
			cout << "\nthe present days:\t\t\t" << PresDays << "\n";
			cout << "\nStudent Cannot sit for the Exam :(\n";

		}
		std::cout << count << '\n';
		count += 1;
		cout << "-------------------------------------" << '\n';
	}




	system("pause");
	return 0;
}