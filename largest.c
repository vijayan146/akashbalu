include <stdio.h>
int main()
{

    printf("Enter three different numbers: ");
    scanf("n1,n2,n3");

    if( n1>=n2 && n1>=n3 )
        printf("%.n1 is the largest number.", n1);

    if( n2>=n1 && n2>=n3 )
        printf("%.n2 is the largest number.", n2);

    if( n3>=n1 && n3>=n2 )
        printf("%.n3 is the largest number.", n3);

    return 0;
}
