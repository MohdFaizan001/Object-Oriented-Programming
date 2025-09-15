#include <stdio.h>
#include <string.h>

struct Medicine {
    char name[30];
    char time[20];
    int taken;  // 0 = not taken, 1 = taken
};


void markTaken(struct Medicine *m) {
    m->taken = 1;
}

int main() {
    int n, choice;
    struct Medicine meds[10];

    printf("Enter number of medicines: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter medicine %d name: ", i + 1);
        scanf("%s", meds[i].name);
        printf("Enter time (morning/afternoon/night): ");
        scanf("%s", meds[i].time);
        meds[i].taken = 0;
    }

    printf("\n--- Daily Medicine Schedule ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s at %s [Status: Not Taken]\n", i + 1, meds[i].name, meds[i].time);
    }

    printf("Enter medicine number to mark as taken (0 to n): ");
    scanf("%d", &choice);

    if (choice > 0 && choice <= n) {
        markTaken(&meds[choice - 1]);
    }

    printf("--- Updated Medicine Schedule ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s at %s [Status: %s]\n", i + 1, meds[i].name, meds[i].time,
               meds[i].taken ? "Taken" : "Not Taken");
    }

    return 0;
}
