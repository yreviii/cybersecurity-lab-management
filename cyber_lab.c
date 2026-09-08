
#include <stdio.h>

int main() {
    char labName[50];
    int computers, networkDevices, securityTools;
    float computerPrice, devicePrice, softwareCost;
    float computerCost, networkCost, totalInvestment;

    printf("Enter lab name: ");
    scanf(" %[^\n]", labName);

    printf("Enter number of computers: ");
    scanf("%d", &computers);

    printf("Enter number of network devices: ");
    scanf("%d", &networkDevices);

    printf("Enter number of security tools: ");
    scanf("%d", &securityTools);

    printf("Enter cost per computer: ");
    scanf("%f", &computerPrice);

    printf("Enter cost per network device: ");
    scanf("%f", &devicePrice);

    printf("Enter annual security software cost: ");
    scanf("%f", &softwareCost);

    computerCost = computers * computerPrice;
    networkCost = networkDevices * devicePrice;
    totalInvestment = computerCost + networkCost + softwareCost;

    printf("\n========================================\n");
    printf("       CYBERSECURITY LAB REPORT\n");
    printf("========================================\n");
    printf("Lab Name              : %s\n", labName);
    printf("Computers             : %d\n", computers);
    printf("Network Devices       : %d\n", networkDevices);
    printf("Security Tools        : %d\n", securityTools);
    printf("Computer Cost         : %.2f\n", computerCost);
    printf("Network Device Cost   : %.2f\n", networkCost);
    printf("Software Cost         : %.2f\n", softwareCost);
    printf("----------------------------------------\n");
    printf("Total Lab Investment  : %.2f\n", totalInvestment);
    printf("----------------------------------------\n");
    printf("========================================\n");

    return 0;
}
