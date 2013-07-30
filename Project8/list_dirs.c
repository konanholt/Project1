#include <stdio.h>
#include <dirent.h>
void searchCurrentDir() {
	DIR *directory = opendir("/Users/Konan/Desktop");
	struct dirent *directoryent;
	if (directory) {
                while ((directoryent = readdir(directory)))     {
                        printf("%s\n", directoryent->d_name);
                }
        } else {
                fprintf(stderr, "error: cannot access directory\n");
        }
}
int main() {
	searchCurrentDir();
	return 0;
}

