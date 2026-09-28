#include <iostream>
using namespace std;

int main() {

	int row();
	int columns();
	int candies();

	for (int row = 1; row <= 6; row++) {
		for (int columns = 1; columns <= 4; columns++) {
			for (int candies = 1; candies <= 8; candies++) {

				cout << "Row: " << row << " columns: " << columns << " candies: " << candies << "\n";
			}
		}
	}





	return 0;

}