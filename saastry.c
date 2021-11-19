#include<stdio.h>



int main() {

	//int presidentfonction()
	int president_number;
	int voter_choice;
	int winners_presidents = 0;
	int c = 0;
	int c1 = 0;
	int x = 0;
	int y = 0;
	int p, v, l, j, e;
	float min=0 ;
	int index=0;

	printf("_____PRESIDENTS/ELECTORS REGESTRATION_____");
	
	do{
		printf("\nplease enter the number of presidents :\n ");
		scanf("%d", &president_number);
	} while (president_number < 5);
	
	char  arrPresident[president_number][50];
	char president_winners_name[president_number][50];
	


		for (p = 0; p < president_number; p++)
		{


			printf("please enter the name of  president number %d :  ", p + 1);
			scanf("%s", &arrPresident[p]);


		}

	


	//int voterfonction()
	int voter_number;
	int id_of_voter;


	printf("\nplease enter the number of voters: ");
	// printf("\n the number of voters should be greater than 10 !");
	scanf("%d", &voter_number);
	char arrvoter[voter_number][50];
	do
	{


		for (v = 0; v < voter_number; v++)

		{

			printf("\n please enter the name of voter number %d :  ", v + 1);
			scanf("%s", &arrvoter[v]);


		}
	} while (voter_number < 5);

system("cls");
	do {
	

		printf("here is the list of the presidents : \n ");
		for (l = 0; l < president_number; l++) {
			printf(" \n \t to vote on president %s press : %d  ", arrPresident[l], l + 1);
		}




		int arrforchoices[voter_number];
		for (j = 0; j < voter_number; j++) {

			printf("\n \n please voter  with name %s enter your choice : ", arrvoter[j]);
			scanf("%d", &voter_choice);
			arrforchoices[j] = voter_choice;
		}

		int  arr_vote_counter[president_number];
		int i;
		for (i = 0; i < president_number; i++) {
			c = 0;
			for (j = 0; j < voter_number; j++) {
				if (i + 1 == arrforchoices[j]) {

					c++;
				}

			}
			arr_vote_counter[i] = c;
			printf("the president %s with number %d got  %d vote. \n", arrPresident[i], i + 1, arr_vote_counter[i]);

		}

		float arr_percentage[president_number];

		for (i = 0; i < president_number; i++) {

			arr_percentage[i] = arr_vote_counter[i] * 100 / voter_number;



			if (arr_percentage[i] < 15) {
				printf("\n the president %s with number %d you are excluded.", arrPresident[i], i + 1);
			}
			else if (arr_percentage[i] >= 15)
			{
				for (e = 0; e < 50; e++)
					president_winners_name[i][e] = arrPresident[i][e];
				   winners_presidents++;
			}

			else if (arr_percentage[i] == arr_percentage[i + 1])  x++;
			
			else if (arr_vote_counter[i] == voter_number)
			 {
				printf("\n the president %s with number %d you are the winner in election.", arrPresident[i], i + 1);
				
			}



		}
	} while (x == president_number - 1);

	/////tour2
	
	int winners_presidents1=0;
	int arrforchoicestour2[voter_number];
	char president_winners_name1[winners_presidents][50];
	do {


		printf("here is the list of the presidents for the second step of elections : \n ");
		for (l = 0; l < winners_presidents; l++) {
			printf(" \n \t to vote on president %s  press : %d  ", president_winners_name[l], l + 1);
		}




		
		for (j = 0; j < voter_number; j++) {

			printf("\n \n please voter  with name %s enter your choice : ", arrvoter[j]);
			scanf("%d", &voter_choice);
			arrforchoicestour2[j] = voter_choice;
		}

		int  arr_vote_countertour2[winners_presidents];
		int i;
		for (i = 0; i < winners_presidents; i++) {
			c1 = 0;
			for (j = 0; j < voter_number; j++) {
				if (i + 1 == arrforchoicestour2[j]) {

					c1++;
				}

			}
			arr_vote_countertour2[i] = c1;
			printf("the president %s with number %d got  %d vote. \n", president_winners_name[i], i + 1, arr_vote_countertour2[i]);

		}

		float arr_percentage1[winners_presidents];

		for (i = 0; i < winners_presidents; i++) {

			arr_percentage1[i] = arr_vote_countertour2[i] * 100 / voter_number;



			if (arr_percentage1[i] < 15) {
				
				printf("\n the president %s with number %d you are excluded.", president_winners_name[i], i + 1);
			}
			else if (arr_percentage1[i] >= 15)
			{
				for (e = 0; e < 50; e++){
				
					president_winners_name1[i][e]= president_winners_name[i][e];
				 winners_presidents1++;
			}
			}

			else if (arr_percentage1[i] == arr_percentage1[i + 1])  y++;
			else if (arr_vote_countertour2[i] == voter_number) {
				printf("\n the president %s with number %d you are the winner in election.", president_winners_name1[i], i + 1);
				return 0;
			}
//			for(i=0;i<winners_presidents1;i++){
//			  
//			   if (min > arr_vote_countertour2[i]){
//			   	min = arr_vote_countertour2[i];
//				index=i;	    
//			   }
//			    
//			    printf("The president %s is eliminated",president_winners_name1[index]);
//			    for(i=0;i<winners_presidents1;i++){
//					
//				}
//			
//			
//			}
//			



		}
	} while (y == winners_presidents1 - 1);



	return 0;

}
