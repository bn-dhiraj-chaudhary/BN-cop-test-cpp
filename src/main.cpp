#include <cstdio>
#include <cstdlib>
#include <cstring>

// Intentional finding: hardcoded credentials (for COP/Polaris merge-key comparison testing)
const char *DB_PASSWORD = "SuperSecret123!";

// Intentional finding: buffer overflow via unbounded strcpy
void copyName(const char *input) {
    char buffer[16];
    strcpy(buffer, input);
    printf("Name: %s\n", buffer);
}

// Intentional finding: OS command injection
void ping(const char *host) {
    char cmd[256];
    sprintf(cmd, "ping -c 1 %s", host);
    system(cmd);
}

int main(int argc, char *argv[]) {
    if (argc > 1) {
        copyName(argv[1]);
    }
    if (argc > 2) {
        ping(argv[2]);
    }
    return 0;
}
