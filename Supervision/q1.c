#include <stdio.h>
#include<string.h>

struct FeedbackForm{
    int  grid ;
    char name[100] ;
    char course[100] ;
    char branchName[100] ;
    float grade ;
} s1,s2,s3;

 int main(){
    
    struct FeedbackForm arti[3] ;
    
    // s1.grid = 3424;
    // printf("%d",s1.grid);
    // s2.grid = 3424;
    // printf("\n%d",s1.grid);
    
    
    for(int i = 0 ; i < 3 ; i++)
    {
        printf("\nEnter grid : ");
        scanf("%d",&arti[i].grid);
        printf("Enter name : ");
        scanf("%s",arti[i].name);
        printf("Enter course : ");
        scanf("%s",arti[i].course);
        printf("Enter branchName : ");
        scanf("%s",arti[i].branchName);
        printf("Enter grade : ");
        scanf("%f",&arti[i].grade);        
    }
    
    for(int i = 0 ; i < 3 ; i++)
    {
            printf("%d\n",arti[i].grid);
            printf("%s\n",arti[i].name);
            printf("%s\n",arti[i].course);
            printf("%s\n",arti[i].branchName);
            printf("%f\n",arti[i].grade);
    }
       
  return 0;
}