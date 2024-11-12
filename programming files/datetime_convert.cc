#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>

int main()
{
    // dummy date
    std::string date_str = "2022-03-17 10:45:30";
    // create an object of std::tm
    std::tm date_obj = {};
    std::istringstream ss(date_str);
    // parse the date string
    ss >> std::get_time(&date_obj, "%Y-%m-%d %H:%M:%S");
    std::stringstream formatted_date_ss;
    // format the date
    formatted_date_ss << std::put_time(&date_obj, "%m/%d/%Y %H:%M:%S");

    std::string formatted_date = formatted_date_ss.str();

    // print it out
    std::cout << formatted_date << std::endl;

    return 0;
}
