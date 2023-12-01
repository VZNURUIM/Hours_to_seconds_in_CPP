// Converter horas em segundos

#include <iostream>

using namespace std;

int hours_in_seconds(int hours) {
	return hours * 60;
}

int main() {
	int hours{};

	cout << "Write a hours: ";
	cin >> hours;

	cout << hours_in_seconds(hours) << " Seconds.";
}
