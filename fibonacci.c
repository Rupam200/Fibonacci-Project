#include<stdio.h>

int main(){
    int first=0,second=1,i,no,next;
    printf("Enter the number of turms which you wnat\n");
    scanf("%d", &no);
    printf("The series still %d term\n",no);
    for(i=0;i<=no;i++){
          if(i==0 && i==1){
              return i;
          }
     else{
       next=first+second;
       first=second;
       second=next;
     }
     printf("The number is %d \n",next);
    }
    return 0;
}