#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_LINE_LENGTH 100

// Structure to hold log entry data
typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[9];
} LogEntry;

// Function to extract log entries from the CSV file
int extractLogEntries(LogEntry logEntries[]) {
    FILE *file;
    char line[MAX_LINE_LENGTH];
    char *token;
    int entryCount = 0;

    // Open the CSV file
    file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 0;
    }

    // Read each line from the file
    while (fgets(line, sizeof(line), file) != NULL) {
        // Tokenize the line using commas as delimiters
        token = strtok(line, ",");
        
        // Extract data and store it in the log entry structure
        logEntries[entryCount].entryNo = atoi(token);
        token = strtok(NULL, ",");
        strcpy(logEntries[entryCount].sensorNo, token);
        token = strtok(NULL, ",");
        logEntries[entryCount].temperature = atof(token);
        token = strtok(NULL, ",");
        logEntries[entryCount].humidity = atoi(token);
        token = strtok(NULL, ",");
        logEntries[entryCount].light = atoi(token);
        token = strtok(NULL, ",");
        strcpy(logEntries[entryCount].timestamp, token);

        entryCount++;
    }

    // Close the file
    fclose(file);

    return entryCount;
}

// Function to display the log entries
void displayLogEntries(LogEntry logEntries[], int entryCount) {
    int i;

    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    printf("-------------------------------------------------------------\n");

    for (i = 0; i < entryCount; i++) {
        printf("%d\t%s\t%.1f\t\t%d\t\t%d\t%s\n", logEntries[i].entryNo, logEntries[i].sensorNo,
               logEntries[i].temperature, logEntries[i].humidity, logEntries[i].light, logEntries[i].timestamp);
    }
}

int main() {
    LogEntry logEntries[MAX_ENTRIES];
    int entryCount;

    // Extract log entries from the CSV file
    entryCount = extractLogEntries(logEntries);

    if (entryCount > 0) {
        // Display the log entries
        displayLogEntries(logEntries, entryCount);
    }

    return 0;
}
