#include <stdio.h>
#include <string.h>

struct laptop {
    char brand[20];
    char company[20];
    int model;
};

struct rig {
    char brand[20];
    char company[20];
    int model;
};

int main() {
    struct laptop VICTUS = {"Victus Gam", "HP", 15};
    struct rig cool = {"Victus", "HP", 15};

    printf("Laptop brand: %s\n", VICTUS.brand);
    printf("Laptop company: %s\n", VICTUS.company);
    printf("Laptop model: %d\n", VICTUS.model);

    printf("Rig brand: %s\n", cool.brand);
    printf("Rig company: %s\n", cool.company);
    printf("Rig model: %d\n", cool.model);

    return 0;
}