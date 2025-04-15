#include <stdio.h>

typedef struct {
    char name[50];
    float grades[3];
} Student;

float calcAverage(Student s){
    return (s.grades[0] * 0.25 + s.grades[1] * 0.5 + s.grades[2] * 0.25 );
}

void printstudentinfo(Student s){
    printf("Name: %s\n", s.name);
    printf("Grades: %.2f, %.2f, %.2f\n", s.grades[0], s.grades[1], s.grades[2]);
    printf("Average: %.2f\n", calcAverage(s));
    printf("---------------------------\n");
}

int main()
{
    int studentCount;

    printf("How many students you have?: ");
    scanf("%d", &studentCount);

    Student students[studentCount];

    for (int i = 0; i < studentCount; i++){
        printf("\nInsert informations for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        
        for (int j = 0; j < 3; j++){
            printf("%d. exam grade: ", j + 1);
            scanf("%f", &students[i].grades[j]);
        }
    }

    float totalAverage = 0.0;
    float highestAverage = 0.0;
    int topStudentIndex = 0;

    printf("\n------Student Information-----\n");
    for (int i = 0; i < studentCount; i++){
        printstudentinfo(students[i]);
        float avg = calcAverage(students[i]);
        totalAverage += avg;
        if (avg > highestAverage) {
            highestAverage = avg;
            topStudentIndex = i;
        }
    }
    float classAverage = totalAverage / studentCount;
    printf("Class average is %.2f\n", classAverage);

    printf("En yuksek ortalamaya sahip ogrenci: %s (Average: %.2f)\n", 
           students[topStudentIndex].name, highestAverage);
    printf("---------------------------\n");


    return 0;
}
