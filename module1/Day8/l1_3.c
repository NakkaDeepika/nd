// L1_3. Data Viewer:
// Write an application to view the log stored in data.csv
// Example, say you have the following data in data.csv

// ------------------------------------

// EntryNo,sensorNo,Temperature,Humidity,Light,

// 1,S1,36.5,100,50,10:30:50
// 2,S3,30,100,50,10:30:55
// 3,S2,-6.6,100,10,10:31:00
// ------------------------------------

// a. Write a function to extract each line in the .csv file and store it in an array of structures. 

// b. Also implement functions to display the contents of the array of structures.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

typedef struct {
    int entryNo;
    char sensorNo[3];
    float temperature;
    int humidity;
    int light;
    char time[9];
} LogEntry;

int readData(LogEntry entries[]) {
    FILE* file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    char line[100];
    int count = 0;

    while (fgets(line, sizeof(line), file)) {
        char *token;
        token = strtok(line, ",");
        
        entries[count].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(entries[count].sensorNo, token);

        token = strtok(NULL, ",");
        entries[count].temperature = atof(token);

        token = strtok(NULL, ",");
        entries[count].humidity = atoi(token);

        token = strtok(NULL, ",");
        entries[count].light = atoi(token);

        token = strtok(NULL, ",");
        strcpy(entries[count].time, token);

        count++;
    }

    fclose(file);

    return count;
}

void displayData(LogEntry entries[], int count) {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTime\n");
    printf("------------------------------------------------------------\n");
    
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t\t%.1f\t\t%d\t\t%d\t%s\n", entries[i].entryNo, entries[i].sensorNo, entries[i].temperature, entries[i].humidity, entries[i].light, entries[i].time);
    }
}

int main() {
    LogEntry entries[MAX_ENTRIES];
    int count = readData(entries);

    if (count > 0) {
        displayData(entries, count);
    } else {
        printf("No data to display.\n");
    }

    return 0;
}
