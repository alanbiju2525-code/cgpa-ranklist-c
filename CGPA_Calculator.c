#include<stdio.h>
struct student{
    char name[100];
    float marks[100]; 
    float cgpa;
};
struct subjects{
    char name[100];
    int credits;
};

void subject_detailes(struct subjects sub[], int n){
    int i;
    printf("\nEnter the Detailes of Each subjects");
    for(i=0;i<n;i++){
        printf("\nSubject %d : ", i+1);
        scanf(" %[^\n]s", sub[i].name);


        printf("Credits : ");
        scanf("%d",&sub[i].credits);

    }
}
void student_detailes(int x,struct student s[],struct subjects sub[],int n){
    int i,j,k;
    float total;
    int ctotal;
    float cgpa;
    int grade;

    printf("Enter the detailes of a student");
    for( i=0; i<x; i++){

        printf("\nStudent %d",i+1);
        printf("\nName : ");
        scanf(" %[^\n]s",s[i].name);


        printf("Enter the mark of student(out of 100)\n");

        for(k=0;k<n;k++){
        printf("%s : ",sub[k].name);
        scanf("%f",&s[i].marks[k]);
        }

        ctotal = 0;
        total = 0;
    
        for(j=0;j<n;j++){
            if(s[i].marks[j] >= 95)
            grade = 10;
            else if(s[i].marks[j] >= 85 && s[i].marks[j] < 95)
            grade = 9;
            else if(s[i].marks[j] >= 75 && s[i].marks[j] < 85)
            grade = 8;
            else if(s[i].marks[j] >= 65 && s[i].marks[j] < 75)
            grade = 7;
            else if(s[i].marks[j] >= 55 && s[i].marks[j] < 65)
            grade = 6;
            else if(s[i].marks[j] >= 45 && s[i].marks[j] < 55)
            grade = 5;
            else if(s[i].marks[j] >= 40 && s[i].marks[j] < 45)
            grade = 4;
           
            total += grade*sub[j].credits;
            ctotal += sub[j].credits;
        }
    s[i].cgpa = total/ctotal;
    }

}
void sorting(struct student s[],int x){
    int i,j;
    struct student temp;
    for(i=0 ; i<x-1; i++){
        for(j=i+1;j<x;j++){
            if(s[i].cgpa < s[j].cgpa){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
void ranklist(int x, struct student s[]){
    int i;
    printf("\nRank List");
    printf("\nRank\t\tName\t\tCGPA\n");
    
    for(i=0;i<x;i++){
        printf("%d\t\t",i+1);
        printf("%-15s\t",s[i].name);
        printf("%0.2f",s[i].cgpa);
        printf("\n");
    }
}

int main(){
    int i,j,k,n,x;
    printf("\nTotal subjects:");
    scanf("%d",&n);
    struct subjects sub[n];
    
    subject_detailes(sub,n);

    printf("\nTotal no of students : ");
    scanf("%d",&x);

    struct student s[x];

    student_detailes(x,s,sub,n);
    sorting(s,x);
    ranklist(x,s);
    
    return 0;
}
