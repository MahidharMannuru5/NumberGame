#include  <stdio.h>



//Compiler version gcc  6.3.0

int main()
{
  int number1,number2,Random,guess;
  
  printf("Enter two numbers and enter your guess number");
  scanf("%d %d %d",&number1,&number2,&guess);
Random=number1*number2;
if (Random=='guess')
{
	printf("you won");
	
}
else{
	printf("you lost");
}

 
}
