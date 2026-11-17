#include <stdio.h>

enum TrafficLight {RED, YELLOW, GREEN};

int main() {
    enum TrafficLight light;
    int choice;

    printf("Enter traffic light (0-Red, 1-Yellow, 2-Green): ");
    scanf("%d", &choice);

    light = choice;

    switch(light) {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
