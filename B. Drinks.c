#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int pi[100];
    double sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&pi[i]);
        sum=sum+pi[i];
    }
    double a=sum/n;
    printf("%.12lf\n",a);
}
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the number of drinks

    int pi[n]; // Array to store the percentage of orange juice in each drink
    double sum = 0.0; // Sum of all percentages

    // Read the percentages and calculate the sum
    for (int i = 0; i < n; i++) {
        scanf("%d", &pi[i]);
        sum += pi[i];
    }

    // Calculate the average percentage
    double result = sum / n;

    // Print the result with 4 decimal places
    printf("%.4lf\n", result);

    return 0;
}
