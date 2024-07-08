#include <stdio.h>

int minSteps(int x, int y) {
    int distance = y - x;
    int step = 0;
    int total_steps = 0;
    int position = 0;
    
    while (position < distance) {
        step++;
        position += step;
        total_steps++;
    }
    
    while (position > distance) {
        step--;
        position -= step;
        total_steps++;
    }
    
    return total_steps;
}

int main() {
    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    printf("Minimum steps from %d to %d: %d\n", x, y, minSteps(x, y));
    return 0;
}
