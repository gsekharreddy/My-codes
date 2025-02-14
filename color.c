#include <stdio.h>
#include<unistd.h>

// Function to print a colorful line
void printColor(const char *text, const char *color) {
    printf("%s%s\033[0m", color, text);  // Reset the color with \033[0m
}

int main() {
    // ANSI escape codes for different colors
    const char *red = "\033[31m";
    const char *green = "\033[32m";
    const char *yellow = "\033[33m";
    const char *blue = "\033[34m";
    const char *magenta = "\033[35m";
    const char *cyan = "\033[36m";
    const char *white = "\033[37m";

    printf("Printing colorful lines in C:\n");

    // Print lines in different colors//
    printColor("This is a red line.\n", red);sleep(1);
    printColor("This is a green line.\n", green);sleep(1);
    printColor("This is a yellow line.\n", yellow);sleep(1);
    printColor("This is a blue line.\n", blue);sleep(1);
    printColor("This is a magenta line.\n", magenta);sleep(1);
    printColor("This is a cyan line.\n", cyan);sleep(1);
    printColor("This is a white line.\n", white);sleep(1);

    return 0;
}
