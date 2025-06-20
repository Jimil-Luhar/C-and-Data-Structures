#include <stdio.h>
struct Distance {
    int feet;
    float inches;
};
int main() {
    struct Distance d1, d2, sum;
    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%f", &d1.inches);

    // Input the second distance
    printf("Enter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%f", &d2.inches);

    // Add the distances
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    // If sum of inches is greater than or equal to 12, convert to feet and inches
    if (sum.inches >= 12.0) {
        sum.feet += 1;
        sum.inches -= 12.0;
    }

    // Display the sum of distances
    printf("\nSum of Distances: %d feet %.2f inches\n", sum.feet, sum.inches);

    return 0;
}
