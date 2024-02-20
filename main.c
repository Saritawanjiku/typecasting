
#include <stdio.h>
#include <stdlib.h>

// Define the structure for the record
struct Record {
    char name[50];
    int age;
    char city[50];
};

// Comparison function for qsort
int compareRecords(const void *a, const void *b) {
    return ((struct Record*)a)->age - ((struct Record*)b)->age;
}

int main() {
    // Example array of records
    struct Record records[] = {
        {"John", 30, "New York"},
        {"Alice", 25, "San Francisco"},
        {"Bob", 35, "Los Angeles"},
        {"Eva", 28, "Chicago"},
    };

    // Calculate the number of records
    size_t numRecords = sizeof(records) / sizeof(records[0]);

    // Sorting the array of records based on the 'age' field
    qsort(records, numRecords, sizeof(struct Record), compareRecords);

    // Displaying the sorted records
    for (size_t i = 0; i < numRecords; i++) {
        printf("Name: %s, Age: %d, City: %s\n", records[i].name, records[i].age, records[i].city);
    }

    return 0;
}
