// temp_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <chrono>

using namespace std;

constexpr double operator"" _mhz(long double mhz) {

    return static_cast<double>(mhz) * 1'000'000;
}


constexpr double operator"" _khz(long double khz) {

    return static_cast<double>(khz) * 1'000;
}

constexpr double operator"" _ghz(long double ghz) {

    return static_cast<double>(ghz) * 1'000'000'000;
}


int main()
{

    constexpr auto x = 5.0_mhz;
    cout << "x: " << x << endl;
    constexpr auto x1 = 5.0_ghz;
    cout << "x1: " << x1 << endl;
    constexpr auto x2 = 5.0_khz;
    cout << "x2: " << x2 << endl;
   
}

