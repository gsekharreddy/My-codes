// #include <stdio.h>
// #include <stdlib.h>

// void print_ip(const char *start_ip, const char *end_ip) {
//     unsigned int start[4], end[4];
//     sscanf(start_ip, "%u.%u.%u.%u", &start[0], &start[1], &start[2], &start[3]);
//     sscanf(end_ip, "%u.%u.%u.%u", &end[0], &end[1], &end[2], &end[3]);

//     if (start[0] != end[0] || start[1] != end[1] || start[2] != end[2] || start[3] > end[3]) {
//         printf("Invalid IP range or different subnets.\n");
//         return;
//     }

//     for (unsigned int i = start[3]; i <= end[3]; i++) {
//         printf("%u.%u.%u.%u\n", start[0], start[1], start[2], i);
//     }
// }

// int main() {
//     char start_ip[16], end_ip[16];

//     printf("start IP address: ");
//     scanf("%15s", start_ip);

//     printf("end IP address: ");
//     scanf("%15s", end_ip);

//     print_ip(start_ip, end_ip);
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;

    while (1) {
        printf("\n---------- Menu ----------\n");
        printf("1. Class A\n");
        printf("2. Class B\n");
        printf("3. Class C\n");
        printf("4. Class D\n");
        printf("5. Class E\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nClass A IP Address Range: 0.0.0.0 ~ 127.255.255.255\n");
                printf("Subnet Mask of Class A: 255.0.0.0\n");
                break;
            case 2:
                printf("\nClass B IP Address Range: 128.0.0.0 ~ 191.255.255.255\n");
                printf("Subnet Mask of Class B: 255.255.0.0\n");
                break;
            case 3:
                printf("\nClass C IP Address Range: 192.0.0.0 ~ 223.255.255.255\n");
                printf("Subnet Mask of Class C: 255.255.255.0\n");
                break;
            case 4:
                printf("\nClass D IP Address Range: 224.0.0.0 ~ 239.255.255.255\n");
                printf("Subnet Mask of Class D: Not Defined\n");
                break;
            case 5:
                printf("\nClass E IP Address Range: 240.0.0.0 ~ 255.255.255.255\n");
                printf("Subnet Mask of Class E: Not Defined\n");
                break;
            case 6:
                printf("\nExiting the program. Goodbye!\n");
                exit(0);
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}