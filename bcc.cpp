#include <iostream>
 
int main()
{
    int n;
   printf("Nhap so n: ");
scanf("%d", &n);
   printf("Bang cuu chuong cua  %d: ", n);
    for(int i = 1; i <= 10; i++) {
     printf("\n%d x %d = %d\n", n, i, n*i);
    
    }
    return 0;
}
