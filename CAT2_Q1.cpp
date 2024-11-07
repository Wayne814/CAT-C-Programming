#include <stdio.h>

struct student {
    char name[50];
    int marks;
};

int main() {
    int i;
    struct student student[5];
    FILE *file = fopen("students.txt", "w");  // Corrected mode to "w"

    if (file == NULL) {
        printf("Error opening figitle!\n");
        return 1;
    }

    // Loop to take input for 5 students
    for (i = 0; i < 5; i++) {
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %d", student[i].name, &student[i].marks);  // Corrected scanf

        // Print student data to the file
        fprintf(file, "Name: %s, Marks: %d\n", student[i].name, student[i].marks);  // Corrected printf to fprintf
    }

    fclose(file);  // Close the file
    printf("Data saved to students.txt\n");

    return 0;
}
