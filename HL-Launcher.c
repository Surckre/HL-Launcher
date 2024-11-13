#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main() {
	int cid;
	printf("Half Life Launcher\n\n1) Half Life\n2) Half Life Opposing Force\n3) Half Life Blue Shift\n4) Half Life 2\n5) Half Life 2 Episode 1\n6) Half Life 2 Episode 2\n7) Half Life Lost Coast\n\n");
	printf("Chose Game: ");
		scanf("%d", &cid);
	
	
		switch (cid) {
		case 1:
			system("start steam://rungameid/70");
			break;
		case 2:
			system("start steam://rungameid/50");
			break;
		case 3:
			system("start steam://rungameid/130");
			break;
		case 4:
			system("start steam://rungameid/220");
			break;
		case 5:
			system("start steam://rungameid/380");
			break;
		case 6:
			system("start steam://rungameid/420");
			break;
		case 7:
			system("start steam://rungameid/340");
			break;
		default:
			printf("Invalid game");
		}
		return 0;
	}
