#include <stdio.h>
#include <stdbool.h>

int main() {

    bool resumeGame;
    bool inventoryOpen;
    bool settingsOpen;
    bool exitGame;

    printf("Menu System\n");
    printf("------------\n");

    int choice;
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch (choice) {
        case (1):
            printf("Resuming game...\n");
            break;
        case (2):
            printf("Opening inventory...\n");
            break;
        case (3):
            printf("Opening settings...\n");
            break;
        case (4):
            printf("Exiting game...\n");
            break;
    }

    return 0;
}