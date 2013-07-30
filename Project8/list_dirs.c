#include <stdio.h>
#include <dirent.h>
#include <string.h>

void searchCurrentDir(char* input) {
	DIR *directory = opendir(input);
	struct dirent *directoryent;
	if (directory) {
	          printf("%s/\n", input);
			while ((directoryent = readdir(directory)))     {
				if(strcmp(directoryent->d_name, ".") != 0 &&  strcmp(directoryent->d_name, "..") != 0){ 
					char full_path[1024] = "";
			                strcpy (full_path, input);
					strcat (full_path, "/");
					strcat (full_path, directoryent->d_name);
//					printf("Recursing on %s\n", full_path);
					searchCurrentDir(full_path);                	
				}
			}
        } else {
                	printf("%s\n", input);
        }
}
int main() {
	searchCurrentDir("/Users/Konan");
	return 0;
}

