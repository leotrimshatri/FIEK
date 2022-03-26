# Function abstraction 
is achieved by separating the use of a function from its implementation. The client can use a function without knowing how it is implemented. The details of the implementation are encapsulated in the function and hidden from the client who invokes the function. This is known as information hiding or encapsulation. The concept of function abstraction can be applied to the process of developing programs.
When writing a large program, you can use the “divide-and-conquer” strategy, also known as stepwise refinement, to decompose it into subproblems. The subproblems can be furtherdecomposed into smaller, more manageable ones. At this stage, you should be concerned with what the subproblems will achieve, not with how to get input and print the calendar for the month.

<p align="center">
  <img src="https://user-images.githubusercontent.com/77514315/160249528-05361ce5-2570-4704-9bb8-32143bf94fc0.png">
</p>

#### Suppose you write a program that displays the calendar for a given month of the year. The program prompts the user to enter the year and the month, and then displays the entire calendar for the month, as shown in Figure

### 1. For this example, the problem is first broken into two subproblems: get input from the user, and print the calendar for the month.

<p align="center">
  <img src="https://user-images.githubusercontent.com/77514315/160249788-01d0f01f-9112-47b7-b441-8f1483011252.png">
</p>

The month title consists of three lines: month and year, a dashed line, and the names of the seven days of the week. (You need to get the month name (e.g., January) from the numeric month (e.g., 1). This is accomplished in printMonthName). 
  
To print the month body, you need to know which day of the week is the first day of the month (getStartDay) and how many days the month has (getNumberOfDaysInMonth).

<p align="center">
  <img src="https://user-images.githubusercontent.com/77514315/160250147-980ddd9d-86d7-4b2c-80b9-d9d5dfcd1090.png">
</p>

How would you get the start day for a month? There are several ways to find it. Assume that you know that the start day (startDay1800 = 3) for January 1, 1800, was Wednesday. You could compute the total number of days (totalNumberOfDays) between January 1, 1800, and the start day of the calendar month. The computation is (totalNumberOfDays + startDay1800) % 7, because every week has seven days.

So the getStartDay problem can be further refined as getTotalNumberOfDays.

To get the total number of days, you need to know whether a year is a leap year and how many days are in each month. So getTotalNumberOfDays is further refined into two subproblems:
isLeapYear and getNumberOfDaysInMonth,get the total number of days, you need to know whether a year is a leap year and how many days are in each month. So getTotalNumberOfDays is further refined into two subproblems: isLeapYear and getNumberOfDaysInMonth,

<p align="center">
  <img src="https://user-images.githubusercontent.com/77514315/160250298-4161b87d-ae1b-4f99-9b70-b4bfaffa524e.png">
  <img src="https://user-images.githubusercontent.com/77514315/160250316-8dc6b4d7-1fbb-4901-b725-02b31e159648.png">
</p>

## "Top-Down" implementation
You must decide which modules to implement as functions and which to combine in other
functions.You can use either a “top-down” or a “bottom-up” implementation. The top-down approach
implements one function at a time in the structure chart from top to bottom. Stubs can be used
for the functions waiting to be implemented. A stub is a simple, but incomplete, version of a
function. Usually a stub displays a test message indicating that it was called, and nothing more.

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

void printMonth(int year, int month);
void printMonthTitle(int year, int month);
void printMonthName(int month);
void printMonthBody(int year, int month);
int getStartDay(int year, int month);
int getTotalNumberOfDays(int year, int month);
int getNumberOfDaysInMonth(int year, int month);
bool isLeapYear(int year);

int main()
{
// Prompt the user to enter year
cout << "Enter full year (e.g., 2001): ";
int year;
cin >> year;
// Prompt the user to enter month
cout << "Enter month in number between 1 and 12: ";
int month;
cin >> month;
// Print calendar for the month of the year
printMonth(year, month);
return 0;
}
void printMonth(int year, int month)
{
cout << month << " " << year << endl;
}
```

## Benefits of Stepwise Refinement

Stepwise refinement breaks a large problem into smaller manageable subproblems. Each subproblem
can be implemented using a function. This approach makes the program easier to
write, reuse, debug, test, modify, and maintain.

Simpler Program
The print calendar program is long. Rather than writing a long sequence of statements in one
function, stepwise refinement breaks it into smaller functions. This simplifies the program and
makes the whole program easier to read and understand.

Reusing Functions
Stepwise refinement promotes code reuse within a program. The isLeapYear function is defined
once and invoked from the getTotalNumberOfDays and getNumberOfDaysInMonth functions.
This reduces redundant code.

Easier Developing, Debugging, and Testing
Since each subproblem is solved in a function, a function can be developed, debugged, and
tested individually. This isolates the errors and makes developing, debugging, and testing
easier.
When implementing a large program, use the top-down or bottom-up approach. Do not write
the entire program at once. Using these approaches seems to take more development time (because
you repeatedly compile and run the program), but actually it saves time and facilitates debugging.

Better Facilitating Teamwork
Since a large problem is divided into subprograms, the subproblems can be assigned to other
programmers. This makes it easier for programmers to work in teams.

