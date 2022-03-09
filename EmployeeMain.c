#include <string.h>
#include <stdlib.h>
#include "Employee.h"

int main(void)
{
    // defined in EmployeeOne.c
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int tableSize, long targetNumber);
    PtrToEmployee searchEmployeeByName(const Employee table[], int tableSize, char *targetName);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int tableSize, char *targetPhone);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int tableSize, double targetSalary);

    // defined in EmployeeTable.c
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    // Search operations
    PtrToEmployee matchPtr;

    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);
    //Example not found
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
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "310-555-1215");
    if(matchPtr != NULL)
        printf("Phone Number 310-555-1215 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Phone Number 310-555-1215 is NOT found in the record.\n");

    // Phone Not Found
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "111-111-1111");
    if(matchPtr != NULL)
        printf("Phone Number 111-111-1111 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Phone Number 111-111-1111 is NOT found in the record.\n");

    // Salary Found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.34);
    if(matchPtr != NULL)
        printf("Salary of 6.34 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Salary of 6.34 is NOT found in the record.\n");
    
    // Salary Not Found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 1.23);
    if(matchPtr != NULL)
        printf("Salary of 1.23 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Salary of 1.23 is NOT found in the record.\n");
    
    return EXIT_SUCCESS;
}