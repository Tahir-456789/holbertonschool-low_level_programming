#include <stdio.h>
#include <unistd.h>  // For sleep() on Linux/macOS

int main(void)
{
    int a = 1;  // Added semicolon

    while (a == 1) {  // Removed the incorrect semicolon after while()
        printf("%d\n", a);  // Fixed puts(a) -> printf("%d\n", a)
        sleep(1);  // Added missing semicolon
        a++;  // This ensures the loop exits eventually
    }

    return 0;  // Return 0 for successful execution
}
