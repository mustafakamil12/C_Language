#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

void writeBinaryFile(const char *filename) {
    FILE *file = fopen(filename, "wb"); // Open file for writing in binary mode

    if (file == NULL) {
        perror("Error opening file for writing");
        exit(EXIT_FAILURE);
    }

    Employee employees[] = {
        {1, "John Doe", 50000.0},
        {2, "Jane Smith", 60000.0},
        {3, "Bob Johnson", 55000.0}
    };

    // Write array to file
    fwrite(employees, sizeof(Employee), sizeof(employees) / sizeof(Employee), file);

    fclose(file);
}

void readBinaryFile(const char *filename) {
    FILE *file = fopen(filename, "rb"); // Open file for reading in binary mode

    if (file == NULL) {
        perror("Error opening file for reading");
        exit(EXIT_FAILURE);
    }

    Employee employees[3]; // Assuming 3 employees for simplicity

    // Read array from file
    fread(employees, sizeof(Employee), sizeof(employees) / sizeof(Employee), file);

    for (int i = 0; i < sizeof(employees) / sizeof(Employee); ++i) {
        printf("Employee ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }

    fclose(file);
}

int main() {
    const char *filename = "employees.dat";

    writeBinaryFile(filename);
    printf("Data written to the binary file.\n");

    printf("\nReading data from the binary file:\n");
    readBinaryFile(filename);

    return 0;
}
