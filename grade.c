#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char* grade;
	if (argc < 2) {
		printf("사용법 : %s 학점\n", argv[0]);
		exit(1);
	}

	grade = argv[1];
	switch(*grade) {
		case 'A' :
			printf("90 - 100\n");
			break;
		case 'B' :
			printf("80 - 89\n");
			break;
		case 'C' :
			printf("70 - 79\n");
			break;
		case 'D' :
			printf("50 - 69\n");
			break;
		case 'F' :
			printf("0 - 49\n");
			break;
		default :
			printf("잘못된 입력\n");
			break;

	}
}
