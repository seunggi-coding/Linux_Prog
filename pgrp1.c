#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
	int pid, gid;
	printf("PARENT: PID = %d GID = %d\n", getpid(), getpgrp());
	pid = fork();
	if (pid == 0) {
		printf("CHILD: PID = %d GID = %d\n", getpid(), getpgrp());
	}
}
