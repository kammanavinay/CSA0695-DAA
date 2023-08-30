#include <stdio.h>
#define MAX_CONTAINERS 100
#define MAX_WEIGHT 1000
int bestLoading[MAX_CONTAINERS];
int currentLoading[MAX_CONTAINERS];
int containers[MAX_CONTAINERS];
int numContainers;
int maxWeight;
int bestWeight;
void containerLoader(int level, int currentWeight) {
    if (level == numContainers) {
        if (currentWeight > bestWeight) {
            bestWeight = currentWeight;
            for (int i = 0; i < numContainers; i++) {
                bestLoading[i] = currentLoading[i];
            }
        }
        return;
    }
    currentLoading[level] = 0;
    containerLoader(level + 1, currentWeight);
    if (currentWeight + containers[level] <= maxWeight) {
        currentLoading[level] = 1;
        containerLoader(level + 1, currentWeight + containers[level]);
    }
}
int main() {
    printf("Enter the number of containers: ");
    scanf("%d", &numContainers);
    printf("Enter the maximum weight capacity: ");
    scanf("%d", &maxWeight);
    printf("Enter the weight of each container:\n");
    for (int i = 0; i < numContainers; i++) {
        scanf("%d", &containers[i]);
    }
    bestWeight = 0;
    containerLoader(0, 0);
    printf("Best loading configuration:\n");
    for (int i = 0; i < numContainers; i++) {
        if (bestLoading[i]) {
            printf("Container %d\n", i + 1);
        }
    }
    printf("Total weight: %d\n", bestWeight);
    return 0;
}

