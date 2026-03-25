/*Write a C program that reads 5 numbers
 and counts the number of positive numbers
  and/or negative numbers.
*/
#include <stdio.h>

    int nums[4];
    int pos = 0, neg = 0;

int main()
{

    printf("Enter 5 numbers:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }

    for(int i = 0; i < 5; i++) {
        if(nums[i] > 0)
            pos++;
        else if(nums[i] < 0)
            neg++;
    }

    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    
//    int n = sizeof(nums) / sizeof(nums[0]);
//    
//    printf("%d",n);

    return 0;
}
