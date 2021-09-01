#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

void main() {

	double dMark;
	vector<double> vMarks;
	cout << "Please type in your marks, seperated by enters, with a comma after the last input." << endl;

	while (cin >> dMark)
		vMarks.push_back(dMark);
	double dAverage(0);
	vector<double>::size_type MarkSize = vMarks.size(), i;

	for (i = 0; i < MarkSize; ++i)
		dAverage += vMarks[i];

	dAverage /= MarkSize;

	sort(vMarks.begin(), vMarks.end());
	double median = vMarks[MarkSize / 2];

	cout << "The median is " << median <<
		" and the average is: " << setprecision(4)
		<< dAverage << endl;

	system("pause");
}
