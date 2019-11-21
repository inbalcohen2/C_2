#include "myBank.h"
#include <stdio.h>


int main(int argc, char const *argv[])
{
   char current;
   printf("\nTransaction type?:");

   do
   {
current=getchar();

if(current=='O'){
    o();
} 

if(current=='B'){
    b();
} 
if(current=='D'){
    d();
} 
if(current=='W'){
    w();
} 

if(current=='C'){
    c();
}
if(current=='I'){
    i();
} 
if(current=='P'){
    p();
} 
if(current=='E'){
    e();
} 
if(current!='O'||current!='B'||current!='D'||current!='W'||current!='C'||current!='I'||current!='P'||current!='E'){
printf("\nTransaction type?:");
   getchar();


       }

 } while (current!='E');
   
   
    return 0;
}
