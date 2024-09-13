// Develop a Program to generate mark sheets for a student. Enter the marks of 5 students in
// Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes:
// roll_no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each
// student.

#include <stdio.h>
#include <string.h>

struct Marksheet
{
    int student;
    int rollno;
    char name[20];
    int chemistry;
    int Mathematics;
    int Physics;
};

int main()
{

    struct Marksheet Nim[10];

    int n;
    printf("Enter Total Students : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter student Number : ");
        scanf("%d", &Nim[i].student);
        printf("Roll no => ");
        scanf("%d", &Nim[i].rollno);
        printf("Name => ");
        scanf("%s", Nim[i].name);
        printf("Chemistry => ");
        scanf("%d", &Nim[i].chemistry);
        printf("Mathematics => ");
        scanf("%d", &Nim[i].Mathematics);
        printf("Physics => ");
        scanf("%d", &Nim[i].Physics);
    }

    for (int i = 0; i < n; i++)
    {
        if (Nim[i].chemistry >= 100 || Nim[i].Mathematics >= 100 || Nim[i].Physics >= 100)
        {
            printf("invalid");
            break;
        }
        printf("\n");
        // printf("%d",Nim[i].student);
        printf("%s", Nim[i].name);
        printf(" (%d)\n", Nim[i].rollno);
        printf("Chemistry => %d\n", Nim[i].chemistry);
        printf("Mathematics => %d\n", Nim[i].Mathematics);
        printf("Physics => %d\n", Nim[i].Physics);
        printf("Total => %d\n", Nim[i].chemistry + Nim[i].Mathematics + Nim[i].Physics);
        float perc = (Nim[i].chemistry + Nim[i].Mathematics + Nim[i].Physics) / 3;
        printf("percentage => %2f\n", perc);
    }

    return 0;
}