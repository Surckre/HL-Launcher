#include <iostream>
#include <Windows.h>

int main() {
	int cid;
	std::cout << "Half Life Launcher\n\n";
	std::cout << "Half Life Launcher\n\n1) Half Life\n2) Half Life Opposing Force\n3) Half Life Blue Shift\n4) Half Life 2\n5) Half Life 2 Episode 1\n6) Half Life 2 Episode 2\n7) Half Life Lost Coast\n\nChose Game: ";
	std::cin >> cid;

	if (cid == 1) {
		system("start steam://rungameid/70");
	}
	else if (cid == 2) {
		system("start steam://rungameid/50");
	}
	else if (cid == 3) {
		system("start steam://rungameid/130");
	}
	else if (cid == 4) {
		system("start steam://rungameid/220");
	}
	else if (cid == 5) {
		system("start steam://rungameid/380");
	}
	else if (cid == 6) {
		system("start steam://rungameid/480");
	}
	else if (cid == 7) {
		system("start steam://rungameid/340");
	}
	else {
		printf("Invalid Game");
	}
}
