
#include <stdio.h>

int check(int);
int check(int num){
if(num%2==0){
    printf("\n%d is an even number",num);
}
else{
    printf("\n%d is an odd number",num);
}
}
int main()
{
    int num;
    printf("Enter a number to check odd or even\n");
    scanf("%d",&num);
    check(num);
    getch();
    return 0;
}