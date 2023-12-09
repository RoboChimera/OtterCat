#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int i;
	
	if (argc == 1) {
		printf("Please provide a file to otter, dipstick\n");
	} else {
		for (i = 1; i < argc; i++) {
			FILE* textfile = fopen(argv[i], "r");
			char ch;

			if (textfile != NULL) {
				if (argc > 2) {
					printf("\x1b[31mFile %s:\x1b[0m\n%c", argv[i]);
				}

				while ((ch = fgetc(textfile)) != EOF) {
					printf("%c", ch);
				}

				fclose(textfile);
			}
		}
	}
	return 0;
}
