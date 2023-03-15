#include <stdio.h>
int main(){

    float salary, exchangeRate;

    printf("Enter your salary in Doller($):\n");
    scanf("%f",&salary);

    printf("Enter Exchange Rate for today:\n");
    scanf("%f",&exchangeRate);

    printf("Your Salary in Egyption Pound is %0.1f\nBye\n",salary*exchangeRate);

    return 0;
}
