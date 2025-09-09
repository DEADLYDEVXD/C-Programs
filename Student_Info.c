// This code is to take student information as input and display it in a formatted manner.

#include<stdio.h>
#include<math.h>


int main()
{
    int Rollnum;
    float GPA;
    double CGPA;
    char Name[250];
    long TM;
    short age;
    unsigned int ID;
    unsigned long Awd;
    long long Credit;
    char FName;
    
    printf("Student Record: \n");
    scanf("%d\n",&Rollnum);
    printf("Roll Number: %d\n",Rollnum);
    scanf("%f\n",&GPA);
    printf("GPA: %.2f\n",GPA);
    scanf("%lf",&CGPA);
    printf("CGPA: %.2lf\n",CGPA);
    scanf(" %c\n",&FName);
    printf("First Letter of Name: %c\n",FName);
    scanf("%ld\n",&TM);
    printf("Total Marks: %ld\n",TM);
    scanf("%d",&age);
    printf("Age: %d\n",age);
    scanf("%u",&ID);
    printf("Enrollment Number: %u\n",ID);

    scanf("%lld",&Credit);
    printf("Total Credits Earned: %lld\n",Credit);
    scanf("%lu",&Awd);
    printf("Scholarship Amount: %lu\n",Awd);
    scanf("%s",Name);
    printf("Full Name: %s",Name);
    
    
    
    return 0;
}