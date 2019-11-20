#include "myBank.h"
#include <stdio.h>
double account [ACCOUNT_SIZE][DETAIL_ACCOUNT];

void o(){
int i_temp=-1;
    for (int i = 0; i < ACCOUNT_SIZE; i++)
    {
     if(i_temp==-1){ 
    
        if(account[i][1]==0){
            account[i][1]=1;
            i_temp=i;
            printf("\nWELCOM TO THE BANK : Your number account is %d",i+901);
        }
    }
    }
    if(i_temp!=-1){
    printf("\n Initial deposit?:");
    double deposit=0;
    scanf("%lf",&deposit);
    account[i_temp][0]=deposit;
    }
    else{
        printf("\nALL ACCOUNT OPEN.SORRY!");
    }
    
}
void b(){

    int number_account;
    do { 
    printf("\n Account number?:");
    scanf("%d",&number_account);
    }while (number_account>950 || number_account<901);
    

    if (account[number_account-901][1]==1){

printf("\nYour sold account is %.2f",account[number_account-901][0]);

    }else
    {
        printf("\nYour account is closed");
    }
    
    
}

void d(){

    int number_account;
    do { 
    printf("\n Account number?:");
    scanf("%d",&number_account);
    }while (number_account>950 || number_account<901);
    

    if (account[number_account-901][1]==1){


double sold_new=0;
printf("\nAmount?");
scanf("%lf",&sold_new);
account[number_account-901][0]=account[number_account-901][0]+sold_new;
printf("\nYour new sold is %.2f",account[number_account-901][0]);

    }else
    {
        printf("\nYour account is closed");
    }
    
    
}

void w(){

    int number_account;
    do { 
    printf("\n Account number?:");
    scanf("%d",&number_account);
    }while (number_account>950 || number_account<901);
    

    if (account[number_account-901][1]==1){


double sold_new=0;
printf("\nAmount?");
scanf("%lf",&sold_new);
if(account[number_account-901][0]-sold_new>0){
    account[number_account-901][0]=account[number_account-901][0]-sold_new;
    printf("\nYour new sold is %.2f",account[number_account-901][0]);
}else
{
    printf("\nYour sold isn't suffisant");
}


    }else
    {
        printf("\nYour account is closed");
    }
    
    
}
void c(){
  int number_account;
    do { 
    printf("\n Account number?:");
    scanf("%d",&number_account);
    }while (number_account>950 || number_account<901);

    if (account[number_account-901][1]==1){
account[number_account-901][1]=0;
printf("\nYour account %d is now closed",number_account);

    }else
    {
        printf("\nYour account is already closed");
    }
    

}

void i(){
    double interest=0;
    do{
    printf("\nInterest rate?:");
    scanf("%lf",&interest);
    }while (interest>1 ||interest<0);


for (int i = 0; i < ACCOUNT_SIZE; i++)
{
   if(account[i][1]==1){
double interest_temp=account[i][0]*interest;
       account[i][0]= account[i][0]+interest_temp;
   }
}

    
}
void p(){

    for (int i = 0; i <ACCOUNT_SIZE; i++)
    {
        if(account[i][1]==1){
printf("\nA account %d contain %.2f",i+901,account[i][0]);

        }
    }
    
}
void e(){

 for (int i = 0; i < ACCOUNT_SIZE; i++){
     if(account[i][1]==1){
         account[i][1]=0;
    }
}
   printf("\nALL ACCOUNT IS CLOSED\n");
}