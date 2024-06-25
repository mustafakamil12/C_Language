#include <stdio.h>

// Function to write data to a binary file
void writeBinaryFile(const char *filename) {
    FILE *file = fopen(filename, "wb"); // Open file in binary write mode

    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    // Example data to write to the file
    int data[] = {10, 20, 30, 40, 50};
    size_t size = sizeof(data) / sizeof(data[0]);

    // Write data to the file
    fwrite(data, sizeof(int), size, file);

    fclose(file); // Close the file
}

// Function to read data from a binary file
void readBinaryFile(const char *filename) {
    FILE *file = fopen(filename, "rb"); // Open file in binary read mode

    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    // Determine the size of the file
    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    fseek(file, 0, SEEK_SET);

    // Allocate memory to read the file
    int *data = (int *)malloc(file_size);

    if (data == NULL) {
        perror("Memory allocation error");
        fclose(file);
        return;
    }

    // Read data from the file
    size_t elements_read = fread(data, sizeof(int), file_size / sizeof(int), file);

    // Process the read data (in this example, just print it)
    printf("Read %zu elements from the file:\n", elements_read);
    for (size_t i = 0; i < elements_read; ++i) {
        printf("%d ", data[i]);
    }
    printf("\n");

    free(data); // Free allocated memory
    fclose(file); // Close the file
}

int main() {
    const char *filename = "example.bin";

    // Write data to the binary file
    writeBinaryFile(filename);

    // Read data from the binary file
    readBinaryFile(filename);

    return 0;
}
