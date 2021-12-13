

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
    int min, max;
    srand((unsigned)time(0));
    int r;
    cout << "Enter a maximum value" << endl;
    scanf_s("%d", &max);
    cout << "Enter a minimum value" << endl;
    scanf_s("%d", &min);

    r = (rand() % max) + min;

    bool game = true;

	do {
		int guess;
		cout << "Guess" << "\n";
		scanf_s("%d", &guess);

		if (guess == r) {
			cout << "You win!";
			game = false;
		} else if (guess > r) {
			cout << "Too high, try again" << "\n";
		} else {
			cout << "Too low, better luck next time";
		}
	}
	while (game);
    }