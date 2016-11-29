//DOESNT WORK ON DATES BEFORE 1ST JAN 1900

const int kDaysInYear = 365;
const int kDaysInLeapYear = 366;
const std::vector<int> kDaysOfMonth = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
const std::vector<std::string> kDays = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
bool IsLeap (int year) { // returns true if the year is leap, false otherwise
        return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
    }
int LeapYearsPassed (int year){ // returns how many leap years were in between `year` and 1900
    int x = 0;
    for (int i = 1900; i <= year; ++i){
        if (IsLeap(i)) ++x;
        }
    return x;
}

int FirstDayOfYear (int year){ // returns the index of first day of the `year` (in vector kDays)
    return (year - 1900 + LeapYearsPassed(year - 1)) % 7;
}

std::string WhatDay (int year, int month, int day){ // returns what day was on an exact date
    int x = day;
    for (int i = 0; i < month - 1; ++i ){
        x += kDaysOfMonth[i];
    }
    for (int i = 1900; i < year - 1; ++i){
        if (IsLeap(i)) x += kDaysInLeapYear;
        else x += kDaysInYear;
    }
    return kDays[(x % 7) + 1];
    
}

std::vector<std::string> recurringTask(std::string firstDate, int k, std::vector<std::string> daysOfTheWeek, int n) {
    int fday = stoi(firstDate.substr(0,2));
    int fmonth = stoi(firstDate.substr(3,2));
    int fyear = stoi(firstDate.substr(6,4));
    std::cout<<fday<<'/'<<fmonth<<'/'<<fyear<<std::endl;
    std::cout<< WhatDay(2005, 8, 10);
    
}
