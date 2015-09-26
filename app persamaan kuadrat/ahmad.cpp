#include <stdio.h>
#include <conio.h>
#include <math.h>
void AkarKuadrat(int a, int b, int c){
float x1,x2;
int D;
D=(b*b)-(4*a*c);
if (D==0) x1=-1*(b/(2*a));
else if(D>0){
x1=(-b+(sqrt(D)))/(2*a);
x2=(-b-(sqrt(D)))/(2*a);
}
else if (D<0){
	printf("bilangan imajiner\n");
}
printf("D = %d\n",D);
printf("x1 = %.2f\n",x1);
printf("x2 = %.2f",x2);
}
int main()
{
int a,b,c;
printf("NAMA : AHMAD DWIYANTO \n");
printf("NIM : D400150059 \n");
printf("persamaan kuadrat ax^2+bx+c=0 \n");
printf("Masukkan nilai a : \n");scanf("%d",&a);
if (a==0){
printf("a tidak boleh nol \n");
}
else{
printf("Masukkan nilai b : \n");scanf("%d",&b);
printf("Masukkan nilai c : \n");scanf("%d",&c);
AkarKuadrat(a,b,c);
return 0;
}
}
