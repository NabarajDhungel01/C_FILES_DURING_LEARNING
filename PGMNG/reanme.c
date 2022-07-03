#include <stdio.h>
 
int main() {
    int result = rename("file.txt", "renamed.txt");
    if (result == 0) {
        printf("The file is renamed successfully.");
    } else {
        printf("The file could not be renamed.");
    }
    return 0;
}