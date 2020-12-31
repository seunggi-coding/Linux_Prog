#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char* argv[]) {
	int fd1, fd2, fd3;
	int n1, n2;
	char buf[BUFSIZ];

	if (argc != 4) {
		fprintf(stderr, "사용법: %s file1 file2 file3\n", argv[0]);
		exit(1);
	}
	if ((fd1 = open(argv[1], O_RDWR)) == -1) {
		perror(argv[1]);
		exit(2);
	}
	if ((fd2 = open(argv[2], O_RDWR)) == -1) {
		perror(argv[2]);
		exit(3);
	}
	if ((fd3 = open(argv[3], O_RDWR | O_CREAT, 0600)) == -1) {
		perror(argv[3]);
		exit(4);
	}
	while ((n1 = read(fd1, buf, BUFSIZ)) > 0) {
		write(fd3, buf, n1);
	}
	while ((n2 = read(fd2, buf, BUFSIZ)) > 0) {
		write(fd3, buf, n2);
	}
	exit(0);
}
