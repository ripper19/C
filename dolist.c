#include <stdio.h>
#include<stdlib.h>

#define MAX_LENGTH 50
#define MAX_ITEMS 10

//method signatures
void clearScreen();
void showMenu(int *mychoice);
char toList[MAX_ITEMS][MAX_LENGTH];

int main(){
int mychoice;
int numItems = 0;
int gomenu;
int inputNumber =1;
int upchoice;

while(1){
    showMenu(&mychoice);
    if(mychoice == 1){
        clearScreen();

        for(int i=0; i<MAX_ITEMS; i++){
            printf("%d", inputNumber);
            scanf(" %s", toList[numItems]);
            inputNumber++;
            numItems++;
            if(numItems >= 10){
                printf("Tasks are full \n");
                break;
            }
       }
       
    }
    else if(mychoice == 2){   
        for(int i =0; i<10; i++){   
        printf("%d.%s \n", i+1, toList[i]);

        }
        printf("Which do you want to update:(%d)", numItems);
        scanf("%d", &upchoice);

        if(upchoice>=1 && upchoice<=numItems){
            printf("Enter change (%d):", upchoice);
            scanf("%s", toList[upchoice -1]);
            printf("List updated successfully");

            for(int i = 0; i<numItems; i++){
                printf("%d.%s \n",i+1, toList[i]);
            }
            

        }
         else{
                printf("Invalid choice");
            }
        
}
    }
  system("pause");
    return 0;}

void clearScreen(){
    system("cls");
}
void showMenu(int *mychoice){
    printf("1. Create a to-do list \n");
    printf("2. Update a list \n");
    printf("3. Delete a list \n");
    printf("4. Exit \n");

    printf("Choose option: ");
    scanf("%d", mychoice);
}