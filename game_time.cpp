/******************************************************************************
Made in OnlineGDB by C.J. Merendino
Lab 3 - Program 2 - Video Game Level Times
This program converts total video game level times into hours and remaining minutes.
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    // Assigned level times in total minutes
    int level_one_total = 78;
    int level_two_total = 144;

    // Variables for Level 1 converted time
    int level_one_hours;
    int level_one_mins;

    // Variables for Level 2 converted time
    int level_two_hours;
    int level_two_mins;

    // Variables for the difference between levels
    int difference_total;
    int difference_hours;
    int difference_mins;

    // Calculate Level 1 hours and minutes
    level_one_hours = level_one_total / 60;
    level_one_mins = level_one_total % 60;

    // Calculate Level 2 hours and minutes
    level_two_hours = level_two_total / 60;
    level_two_mins = level_two_total % 60;

    // Calculate the time difference
    difference_total = level_two_total - level_one_total;
    difference_hours = difference_total / 60;
    difference_mins = difference_total % 60;

    // Display results for Level 1
    cout << "Level 1 took " << level_one_hours << " hours and " << level_one_mins << " minutes." << endl;
    
    // Display results for Level 2
    cout << "Level 2 took " << level_two_hours << " hours and " << level_two_mins << " minutes." << endl;
    
    // Display the difference
    cout << "Level 2 took " << difference_hours << " hours and " << difference_mins << " minutes longer than Level 1." << endl;

    return 0;
}