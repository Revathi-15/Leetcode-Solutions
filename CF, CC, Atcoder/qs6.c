#include <stdio.h>
#include <stdlib.h>

int main() {
    system("ps aux >> snap.txt");
    system("ps -ef >> snap.txt");

    FILE *file = fopen("snap.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int process_count = 0;
    char line[1024];

    while (fgets(line, sizeof(line), file)) {
        process_count++;
    }

    printf("Number of processes: %d\n", process_count);
    fclose(file);
    return 0;
}
