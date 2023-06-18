#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of values: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Not Valid\n");
        return 0;
    }
    
    int smallest_digit = 9;  // Initialize with maximum possible value
    int largest_digit = 0;   // Initialize with minimum possible value
    
    for (i = 0; i < n; i++) {
        int num;
        printf("Enter number %d: ", i+1);
        scanf("%d", &num);
        
        int temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            if (digit < smallest_digit)
                smallest_digit = digit;
            if (digit > largest_digit)
                largest_digit = digit;
            temp /= 10;
        }
    }
    
    if (smallest_digit == 9 || largest_digit == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest digit: %d\n", smallest_digit);
        printf("Largest digit: %d\n", largest_digit);
    }
    
    return 0;
}