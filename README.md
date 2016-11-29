# codewars-date

If you have a task that you need to complete on a regular basis, you can set it up in Asana as a recurring task. One option is to schedule the task to repeat every k weeks on specified days of the week.

It would be useful to be able to view the first n dates for which the task is scheduled. Given the first date for which the task is scheduled, return an array of the first n dates.

In this task, you'll likely need month lengths and weekday names, provided here:

Month lengths from January to December: 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31.

During leap years February has 29 days.
Names of weekdays: "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday".

January 1, 2015 was a Thursday.

Example

For firstDate = "01/01/2015", k = 2, daysOfTheWeek = ["Monday", "Thursday"] and n = 4, the output should be

recurringTask(firstDate, k, daysOfTheWeek, n) = 
    ["01/01/2015", "05/01/2015", "15/01/2015", "19/01/2015"]


firstDate falls on a Thursday. The first Monday after it is "05/01/2015". Since k = 2, the next two days for which the task is scheduled are Thursday, January 15, and Monday, January 19.

Input/Output

[time limit] 500ms (cpp)
[input] string firstDate

A string in the format "dd/mm/yyyy", representing some date either in the past, or in the future. It is guaranteed that the date is between 1900 and 3999, both inclusive.

[input] integer k

A positive integer.

Constraints:
1 ≤ k ≤ 20.

[input] array.string daysOfTheWeek

Array containing from 1 to 7 distinct elements, inclusive, each of which equals a weekday name. Weekdays appear in the same order they are given in the description.
It's guaranteed that the day of the week on which the firstDate falls is present in this list.

Constraints:
1 ≤ daysOfTheWeek.length ≤ 7.

[input] integer n

Constraints:
1 ≤ n ≤ 15.

[output] array.string

Array containing the first n dates (including the first one) on which the task is scheduled in the chronological order.
