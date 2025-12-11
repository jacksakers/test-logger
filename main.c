#include <stdio.h>
#include <unistd.h>

int main() {
    setvbuf(stdout, NULL, _IONBF, 0); // Disable buffering
    printf("Successfully pulled from GitHub!\n");
    
    while(1) {
        printf("Remote Repo Heartbeat: Alive.\n");
        sleep(5);
    }
    return 0;
}
