#include <stdio.h>
#include <stdlib.h>

const char seg = '-';

void err(char* msg) {
	printf("Error: %s\n", msg);
}

int main(int argc, char* argv[]) {
	if (argc == 1) {
		err("No arguments");

		return 1;
	}

	if (argc != 1 + 1) {
		err("Wrong number of arguments");

		return 1;
	}

	int no = atoi(argv[1]);

	char str[no + 1];
	for (int i = 0; i < no; i++) {
		str[i] = seg;
	}
	str[no] = '\0';

	printf("%s\n", str);

	return 0;
}
