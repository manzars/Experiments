/*
			 * TITLE: Prim's Algorithm
			 * DESCRIPTION: To implement prim's algorithm using greedy method
			 * DATE OF PERFORMANCE: 22-02-18
			 * NAME: MOHAMMED RIZWAN
			 * Roll No: 16CO39
			 */

			#include<stdio.h>
			#include<math.h>

			int board[20];
			int count;

			int main()
			{
				int n;
				void queen(int row,int main);
				printf("\nProgram for queen's using backtracking");
				printf("\nEnter number of queens");
				scanf("%d",&n);
				queen(1,n);
				return 0;
			}

			/*This function for printing the solution to n-queen's problem*/

			void print_board(int n)
			{
				int i,j;
				printf("\n\n solution %d : \n\n",++count); 
				//number of solutions
				for(i=1;i<=n;i++){
					printf("\t%d",i);
				}
				for(i=1;i<=n;i++){
					printf("\n\n%d",i);
					for(j=1;j<=n;j++){
						if(board[i]==j)
							printf("\tQ");
						else
							printf("\t.");
					}
				}
				printf("Press any key to continue...");
			}

			/*This function is for checking for the conflicts.
			If there is no conflict for the desired position it returns 1 otherwise it returns 1*/

			int place(int row,int column){
				int i;
				for(i=1;i<=row-1;i++){
					if(board[i]==column)
					return 0;
					else if(abs(board[i]-column) == abs(i-row) )
					return 0;
				}
				//no conflict hence queen can be placed
				return 1;
			}  

			/* By this function we try the next free slot and check for proper positionng of the queen. */

			void queen(int row,int n){
				int column;
				for(column=1;column<=n;column++){
					if(place(row,column)){
						board[row]=column;        //no conflict so place queen.
						if(row==n)        //dead end.
							print_board(n);        //printing the board configuration.
						else         //try queen with next position.
									   
							queen(row+1,n);
					}
				}
			}
																																																																																																																																			   
			/*OUTPUT:
			 *Program for queen's using backtracking
			Enter number of queens4

			 solution 1 : 

				1	2	3	4

			1	.	Q	.	.

			2	.	.	.	Q

			3	Q	.	.	.

			4	.	.	Q	.Press any key to continue...

			 solution 2 : 

				1	2	3	4

			1	.	.	Q	.

			2	Q	.	.	.

			3	.	.	.	Q

			4	.	Q	.	.Press any key to continue...

			------------------
			(program exited with code: 0)
			Press return to continue
			
			Program for queen's using backtracking
			Enter number of queens4
			solution 92 : 

				1	2	3	4	5	6	7	8

			1	.	.	.	.	.	.	.	Q

			2	.	.	.	Q	.	.	.	.

			3	Q	.	.	.	.	.	.	.

			4	.	.	Q	.	.	.	.	.

			5	.	.	.	.	.	Q	.	.

			6	.	Q	.	.	.	.	.	.

			7	.	.	.	.	.	.	Q	.

			8	.	.	.	.	Q	.	.	.Press any key to continue...

			-------------------
			(program exited with code: 0)
			Press return to continue
			*/
