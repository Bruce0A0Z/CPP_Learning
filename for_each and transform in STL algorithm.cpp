#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

	vector<int> vec1{ 1,2,3 };
	//vector<int> vec2(vec1.size()); //solution A
	vector<int> vec2; //solution B

	
	//Below we used the lambda expressions for the functions for_each and transform!
	
	for_each(vec1.cbegin(), vec1.cend(), [](const double& x) {cout << x << ","; });
	cout << endl;

	//transform(vec1.cbegin(), vec1.cend(), vec2.begin(), [](const double& x) {return x + 5; }); //solution A
	transform(vec1.cbegin(), vec1.cend(), back_inserter(vec2), [](const double& x) {return x + 5; }); //solution B

	for_each(vec2.cbegin(), vec2.cend(), [](const double& x) {cout << x << ","; });
	cout << endl;

	//Solution A & B:
	//Solution A: used vector 2 same size of vector 1 so that the transform function can work.
	//Solution B: didn't specify the size of vecror 2 but use back_insert function to get same output.

	return 0;

}
