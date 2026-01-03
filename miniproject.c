#include <stdio.h>

int main() {
    int vehicle[5] = {0};  
    int choice;

    printf("Toll Booth Vehicle Counting System\n");
    printf("Vehicle Types:\n");
    printf("0 - Bike\n1 - Car\n2 - Bus\n3 - Truck\n4 - Other\n");
    printf("Enter -1 to stop\n\n");

    while (1) {
        printf("Enter vehicle type: ");
        scanf("%d", &choice);

        if (choice == -1)
            break;

        if (choice >= 0 && choice <= 4)
            vehicle[choice]++;
        else
            printf("Invalid choice!\n");
    }

    printf("\nVehicle Count Summary:\n");
    printf("Bikes  : %d\n", vehicle[0]);
    printf("Cars   : %d\n", vehicle[1]);
    printf("Buses  : %d\n", vehicle[2]);
    printf("Trucks : %d\n", vehicle[3]);
    printf("Others : %d\n", vehicle[4]);

    return 0;
}
