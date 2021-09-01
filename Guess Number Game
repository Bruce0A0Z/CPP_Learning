#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
	cout << "Hello there, what's your name?\n" << endl;

	string firstname;
	cin >> firstname;

	cout << "\nHello, " << firstname << ". Let's play a game.\n" << endl;

	cout << "I have picked a number from 1 to 100. Guess what it is?\n" << endl;
	
	int i;
	srand((unsigned)time(0));
	i = (rand() % 100) + 1;
	//cout << i << endl;	
	
	int x;
	int lowerbound = 0;
	int higherbound = 100;
	cin >> x;
	while (x != i) {
		if (x > i) {
			higherbound = x;
			cout << "Wrong, the number is between " << lowerbound << " and " << higherbound << "\n" << endl;
		}
		if (x < i) {
			lowerbound = x;
			cout << "Wrong, the number is between " << lowerbound << " and " << higherbound << "\n" << endl;
		}
		cin >> x;
	}
	
	if (x = i) {
		cout << "That's right! " << firstname << ", you are a genius!\n" << endl;
	}

	system("pause");
	return 0;
}
