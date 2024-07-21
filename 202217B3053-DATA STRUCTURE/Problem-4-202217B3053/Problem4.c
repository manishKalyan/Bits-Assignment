#include <stdio.h>

// Recursive function to solve the Tower of Hanoi puzzle
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    // Base case: Only one disk to move
    if (n == 1) {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    // Move top n-1 disks from from_rod to aux_rod using to_rod as auxiliary
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);

    // Move the nth disk from from_rod to to_rod
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);

    // Move the n-1 disks from aux_rod to to_rod using from_rod as auxiliary
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}

int main() {
    int n = 4; // Number of disks

    // Names of the rods are A, B, and C
    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}
