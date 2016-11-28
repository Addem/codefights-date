bool isLeap (int year) {
        return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
    }
std::vector<std::string> recurringTask(std::string firstDate, int k, std::vector<std::string> daysOfTheWeek, int n) {
    std::vector<std::string> days = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    std::vector<int> daysofmonth = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int fday = stoi(firstDate.substr(0,2));
    int fmonth = stoi(firstDate.substr(3,2));
    int fyear = stoi(firstDate.substr(6,4));
    std::cout<<fday<<'/'<<fmonth<<'/'<<fyear<<std::endl;
    
}
