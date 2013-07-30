#include <stdio.h>
#include <dirent.h>

int main() {
	DIR *directory = opendir("/Users/Konan/Desktop");
	struct dirent *directoryent;
	if (directory) {
		while ((directoryent = readdir(directory)))	{
			printf("%s\n", directoryent->d_name);
		}
	} else {
		fprintf(stderr, "error: cannot access directory\n");
	}

	return 0;
}

