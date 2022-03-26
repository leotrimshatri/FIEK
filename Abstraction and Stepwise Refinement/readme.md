# Function abstraction 
is achieved by separating the use of a function from its implementation. The client can use a function without knowing how it is implemented. The details of the implementation are encapsulated in the function and hidden from the client who invokes the function. This is known as information hiding or encapsulation. The concept of function abstraction can be applied to the process of developing programs.
When writing a large program, you can use the “divide-and-conquer” strategy, also known as stepwise refinement, to decompose it into subproblems. The subproblems can be furtherdecomposed into smaller, more manageable ones. At this stage, you should be concerned with what the subproblems will achieve, not with how to get input and print the calendar for the month.

<p align="center">
  <img src="https://user-images.githubusercontent.com/77514315/160249528-05361ce5-2570-4704-9bb8-32143bf94fc0.png">
</p>

### 1. For this example, the problem is first broken into two subproblems: get input from the user, and print the calendar for the month.

<p align="center">
  <img src="https://user-images.githubusercontent.com/77514315/160249788-01d0f01f-9112-47b7-b441-8f1483011252.png">
</p>

The month title consists of three lines: month and year, a dashed line, and the names of the seven days of the week. (You need to get the month name (e.g., January) from the numeric month (e.g., 1). This is accomplished in printMonthName). 
  
To print the month body, you need to know which day of the week is the first day of the month (getStartDay) and how many days the month has (getNumberOfDaysInMonth).
