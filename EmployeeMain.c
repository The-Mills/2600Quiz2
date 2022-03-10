#include <string.h>
#include <stdlib.h>
#include "Employee.h"

int main(void)
{
    // defined in EmployeeOne.c
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int size, long number);
    PtrToEmployee searchEmployeeByName(const Employee table[], int size, char *name);

    // defined in EmployeeTable.c
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    // Search operations
    PtrToEmployee matchPtr;

    //Example not found
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);
    if(matchPtr != NULL)
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID is NOT found in the record.\n");
    
    // Example found
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if(matchPtr != NULL)
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Tony Bobcat is NOT found in the record.\n");

    // Phone Found
    matchPtr = NULL;
    if(matchPtr != NULL)
        printf("Phone Number 310-555-1215 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Phone Number 310-555-1215 is NOT found in the record.\n");

    // Phone Not Found
    matchPtr = NULL;
    if(matchPtr != NULL)
        printf("Phone Number 111-111-1111 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Phone Number 111-111-1111 is NOT found in the record.\n");

    // Salary Found
    matchPtr = NULL;
    if(matchPtr != NULL)
        printf("Salary of 6.34 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Salary of 6.34 is NOT found in the record.\n");
    
    // Salary Not Found
    matchPtr = NULL;
    if(matchPtr != NULL)
        printf("Salary of 1.23 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Salary of 1.23 is NOT found in the record.\n");
    
    return EXIT_SUCCESS;
}