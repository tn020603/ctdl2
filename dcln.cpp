#include<conio.h>
#include<stdio.h>
int len,cc=0,i,n;
int f(int n)
{
    int a[100]={0},b[100]={0},c[100];
    a[0]=1; b[0]=1;
    len=0;
    if(n==0||n==1) printf("Phan tu thu %d:1\n",n+1);
    else{
    for(int j=0;j<=n-2;j++)
    {
        for(i=0;i<=len||cc;i++)
        {
        cc+=a[i]+b[i];
        c[i]=cc%10000;
        cc/=10000;
        }
        len=--i;
        cc=0;
        for(i=0;i<=len;i++)
        a[i]=b[i];
        for(i=0;i<=len;i++)
        b[i]=c[i];
    }
    printf("\nPhan tu thu %d:",n+1);
    for(i=len;i>=0;i--)
    {if(i==len)printf("%d",c[i]);
    else
    printf("%04d",c[i]);
    }
    }
return 0;
}
int main()
{
    printf("Nhap vao phan tu can tinh:");
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    f(j);
    getch();
    return 0;
}
