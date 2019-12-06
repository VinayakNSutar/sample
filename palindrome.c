#include<stdio.h>
int main(){
    int Num;
    printf("Enter an Integer Number: \n");
    scanf("%d",&Num);
    CheckPalindrome(Num);
    return 0;

}
void CheckPalindrome(int Temp){
    int Num2,sum=0;
    Num2=Temp;
  while(Temp>0)
  {
   int rem=Temp%10;
   sum=rem+sum*10;
   Temp=Temp/10;
  }
  if(Num2==sum)
  {
   printf("\n%d is palindrome",Num2);
  }
  else
  {
   printf("\n%d is not palindrome",Num2);
  }
}
