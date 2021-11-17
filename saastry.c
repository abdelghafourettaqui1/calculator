#include<stdio.h>


     
int main(){
	
	//int presidentfonction()
	int president_number  ;
	int id_of_president;
	int voter_choice;
	int c = 1 ;

	printf("please enter the number of presidents : ");
	scanf("%d",&president_number);
	int  arrPresident[president_number];
	if(president_number >= 2)
 	{
	
	        
	      
	        
	        
			for( int p = 0 ; p < president_number ; p++)
			{
		
				
				printf("please enter the id of  president number %d :  " ,p+1);
				scanf("%d",&id_of_president);
				arrPresident[p]=id_of_president;
			    
		       } 
	
   }
	else 
	{
		 printf("the number of president should be greater than 5 !");
		 return 0;
    }


  //int voterfonction()
	int voter_number;
	int id_of_voter;
	
	
	printf("please enter the number of voters: ");
	scanf("%d",&voter_number);
	int arrvoter[voter_number];
	if(voter_number >= 2)
	{
	
	
			for(int v=0 ; v<voter_number ; v++)
		
			   {
				
				printf("please enter the if of  voter number %d :  " ,v+1);
				scanf("%d",&id_of_voter);
				arrvoter[v]=id_of_voter;
			    
		       }
   }
	else 
	{
		 printf("the number of voters should be greater than 10 !");
		 return 0;
    }
      
    
    printf("here is the list of the president : \n");
     for (int l = 0 ; l < president_number ;l++){
    	printf("the id %d of the  president is  %d : ",arrPresident[l],l+1);
    	}
    	int arrforchoices[voter_number];
     for(int choice = 0 ; choice< voter_number; choice++){
	 
	printf("\n please voter  %d enter your choice : ",	arrvoter[choice]);
	scanf("%d",&voter_choice);
     
	arrforchoices[choice]=voter_choice;
     }	
     
	///algo tri 
    	
 printf("%d",voter_number);

int m;
m=voter_number;//pour sauvegarder notre valeur 


int max;
int posmax;
 while(voter_number>0){
     max=arrforchoices[0];
     posmax=0;
 
for(int i=0;i<voter_number;i++){//chercher la valeur max
    if(arrforchoices[i]>max){
        max=arrforchoices[i];
        posmax=i;
    }
}

for(int i=0;i<voter_number;i++){//Changement de place
    arrforchoices[i]=arrforchoices[i+1]; //reculer les valeurs
  }
arrforchoices[voter_number-1]=max; //affecter le max a la dernire cas
voter_number--;
	
	
}
for(int k=0 ; k<voter_number;k++){
  printf("arrforchoices[k]");
}
   for(int i =0 ; i<voter_number;i++)
   {
   	 for(int j= 0;j<voter_number;j++) {
	
   	       if (arrforchoices[i]==arrforchoices[j]){
   	       	   c++;
			  }
   	       
   	    printf("presedent %d get %d votes : ",i+1,c);
   }
   	   
   } 
    
    
    

    
}
