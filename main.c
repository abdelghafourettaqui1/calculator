#include <stdio.h>
#include <stdlib.h>

int main()

 {
	int ope ;
	char again = 'x';	
	while (again == 'x')
	{
		printf("\n \t\t\tOperation Menu\n\n");
        printf("\t 1 . Addition\n");
        printf("\t 2 . Subtraction\n");
        printf("\t 3 . Multiplication\n");
        printf("\t 4 . Division\n");
        printf("\t 5 . Logical operator\n");
        printf("\t 6 . Comparison\n");
        printf("\t 6 . Conversion\n");
        printf("\t Enter your choice: ");
        scanf(" %d", &ope);
        
        switch (ope)
		 {
        	case 1 : addition();
        	break;
        	
        	case 2 : subtraction();
        	break;
        	
        	case 3 : multiplication();
        	break;
        	
        	case 4 : division();
        	break;  
			 
			case 5 : logical_operators();
			break;		
			
			case 6 : comparison();
			break;
			
			case 7 : conversion();
			break;
        	
		 }
        
	}
	
	return 0;
}


int addition()  
 {  
    int i, sum = 0, num, numbers; 
    printf (" How many numbers you want to add: ");  
    scanf ("%d", &num);  
    printf (" Enter the numbers: ");  
    for (i = 1; i <= num; i++)  
    {  
        scanf(" %d", &numbers);  
        sum += numbers;  
    }  
    printf (" Total Sum of the numbers = %d", sum);  
    return 0;  
 }  
int subtraction()  
 {  
    int num1, num2, reste;  
    printf (" The first number is: ");  
    scanf ("  %d", &num1);  
    printf (" The second number is: ");  
    scanf ("  %d", &num2);  
    reste = num1 - num2;    
    printf (" The subtraction of %d - %d is: %d", num1, num2, reste);  
 }  
int  multiplication()  
 {  
    int num1, num2, value;  
    printf (" The first number is: ");  
    scanf ("  %d", &num1);  
    printf (" The second number is: ");  
    scanf ("  %d", &num2);  
    value = num1 * num2;    
    printf (" The multiply of %d * %d is: %d", num1, num2, value);  
 }  
int division()  
 {  
    int num1, num2, value1;  
    printf (" The first number is: ");  
    scanf ("  %d", &num1);  
    printf (" The second number is: ");  
    scanf ("  %d", &num2);  
      
    if (num2 == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &num2);        
    }  
    value1 = num1 / num2;    
    printf (" \n The division of %d / %d is: %d", num1, num2, value1);  
 }  
int logical_operators()
 {
	int ope ;
    
	printf("\t1. 1 . AND\n");
    printf("\t2. 2 . NAND\n");
    printf("\t3. 3 . OR\n");
    printf("\t4. 4 . NOR\n");
    printf("\t5. 5 . XOR \n\n");  
    printf("\tEnter your choice: ");
    scanf(" %d", &ope);
    switch (ope)
    {
    	case 1: andop();
    	break;
    	case 2: nand();
    	break;
    	case 3: orep();
    	break;
    	case 4: nor();
    	break;
    	case 5: xorep();
    	break;
    	
    	
	}
    
	
	
	
 }


int andop() {
	int num1,num2;
	printf (" please enter 1 or 0 : ");  
    scanf ("  %d", &num1);  
    printf (" please enter 1 or 0 : ");  
    scanf ("  %d", &num2);
	 
	if (num1 == 1 && num2 == 1)
	printf("the result is : 1 ."); 
    else
		printf("the result is : 0 .");
}
int nand() 
{
	
	int num1,num2;
	printf (" please enter 1 or 0 : ");  
    scanf ("  %d", &num1);  
    printf (" please enter 1 or 0 : ");  
    scanf ("  %d", &num2);
	 
	if (num1 == 1 && num2 == 1) 
		printf(" the result is : 0 .");
    
	else printf(" the result is : 1 .");
	
}
int orep() 
{
	
	int num1,num2;
	printf (" please enter 1 or 0 : ");  
    scanf ("  %d", &num1);  
    printf (" please enter 1 or 0 : ");  
    scanf ("  %d", &num2);
	 
	if (num1 == 0 && num2 == 0) 
		printf(" the result is : 0 .");
    
	else printf(" the result is : 1.");
	
}
int nor() 
{
	
	int num1,num2;
	printf (" please enter 1 or 0 : ");  
    scanf ("  %d", &num1);  
    printf (" please enter 1 or 0 : ");  
    scanf ("  %d", &num2);
	 
	if (num1 == 0 && num2 == 0) 
		printf(" the result is : 1 .");
    
	else printf(" the result is : 0.");
	
}
int xorep() 
{
	
	int num1,num2;
	printf (" please enter 1 or 0 : ");  
    scanf ("  %d", &num1);  
    printf (" please enter 1 or 0 : ");  
    scanf ("  %d", &num2);
	 
	if (num1 == 0 && num2 == 0 || num1 == 1 && num2==1) 
		printf(" the result is : 0 .");
    
	else printf(" the result is : 0.");
	
}
int comparison()
{
	 int num1, num2, value;  
    printf (" The first number is: ");  
    scanf ("  %d", &num1);  
    printf (" The second number is: ");  
    scanf ("  %d", &num2);  
    if(num1<num2){
    	  printf (" Your first number is greater than your second number "); 	
	}
	else if(num1>num2){
		 printf (" Your second number is greater than your first number "); 	
	}
	else if (num1==num2){
		 printf (" Your first number is equal to your second number "); 
	}
   
}  
 
 
	
