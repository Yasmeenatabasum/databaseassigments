#include <stdio.h>

struct student                  
    {
        char name[50];          // structure member1
        int id;                 // structure member2
        char branch[20];        // structure member3
        int age;                // structure member4
        char place[50];         // structure member5
    } s;                      // structure variable
int main()
{
    
    printf("Enter Student Information\n");      
    printf("----------------------------\n");
    printf("enter name :");
    scanf("%s",s.name);               
   
    printf("enter id :");
    scanf("%d",&s.id);
    
    printf("enter branch name :");
    scanf("%s",s.branch);
    
    printf("enter age :");
    scanf("%d",&s.age);
    
    printf("enter location :");
    scanf("%s",s.place);
    
    
    printf("Displaying Student Information\n");
    printf("----------------------------\n");
    
    printf(" name: %s\n", s.name);       
    printf(" id: %d \n", s.id);
    printf(" branch: %s \n", s.branch);
    printf(" age: %d\n", s.age);
    printf(" place: %s \n", s.place);
    
    return 0;
}
    
