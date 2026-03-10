//marcos saldana
//Week 8 Demo
#include <iostream>

using namespace std;

void showDay();

int main() {
	const int MAX_SIZE = 10;
	int numDays = 7;

	double amounts[MAX_SIZE] = { 1200, 1800, 900, 1500, 800, 1100, 1300 };


	cout << "Welcome to Store Sales Data Analysis! " << endl;
	cout << "Day 1 sales: " << amounts[0] << endl;
	cout << "Day 2 sales: " << amounts[1] << endl;

	/*
	showDay();
	showDay();

	cout << "Arrray memory : ~ " << sizeof(amounts) << " bytes" << endl; */

	for (int i = 0; i < numDays; i++) {
		cout << "Day " << i + 1 << ": $" << amounts[i] << endl;
	}
	return 0;
}

void showDay() {
	static int  dayNum = 1; //Persists
	cout << "Showing day" << dayNum << endl;
}

