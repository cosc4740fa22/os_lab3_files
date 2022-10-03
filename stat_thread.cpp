#include <iostream> // cout, endl
#include <thread>   // thread

using std::cout;
using std::endl;
using std::thread;

// A structure to hold parameters to pass to a thread
struct StatData
{
    // The number of numbers
    int n;
    // The array of numbers
    double *numbers;
};

/*
*   === TODO 1 ===
*   Impliment the function that will calculate the average of the passed numbers.
*   The function will take in two parameters:
    - a pointer to a StatData object.
    - a pointer to the average variable
*   Store the result in average pointer.
*/

// Calculates the average of the given data.
// Stores the result in the avg parameter.
// @data: The set up numbers to find the mean on.
// @avg: The average where the result will be stored.
void average(StatData *data, double *avg) {
    *avg = 0;
}

/*
*   === TODO 2 ===
*   Impliment the function that will calculate the minimum of the passed numbers.
*   The function will take in two parameters:
    - a pointer to a StatData object.
    - a pointer to the minimum variable
*   Store the result in the minimum pointer
*/

// Calculates the minimum of the given data
// Stores the result in the min parameter.
// @data: The set up numbers to find the minimum on.
// @min: The minimum where the result will be stored.
void minimum(StatData *data, double *min) {
    *min = 0;
}

/*
*   === TODO 3 ===
*   Impliment the maximum function that will calculate the maximum of the passed numbers.
*   The function will take in two parameters:
    - a pointer to a StatData object.
    - a pointer to the maximum variable
*   Store the result in the maximum pointer
*/

// Calculates the maximum of the given data
// Stores the result in the max parameter.
// @data: The set up numbers to find the maximum on.
// @max: The maximum where the result will be stored.
void maximum(StatData *data, double *max) {
    *max = 0;
}

// Driver that creates worker threads that will
// calculate the mean, min, and max of a given set of numbers.
// @Assumption: argv only contains numbers.
int main(int argc, char** argv) {
    // Checking if arguments were passed
    if (argc <= 1) {
        cout << "No numbers were passed." << endl;
        cout << "At least one number needs to be enetered." << endl;
        return 1;
    }

    // Declareing worker threads
    thread avg_t, min_t, max_t;

    // Variables for values
    double avg_v;
    double min_v;
    double max_v;

    // Initalizing data structure to hold numbers
    StatData data;
    data.n = argc - 1;                  // The amount of numbers passed
    data.numbers = new double[data.n];  // Allocating space for nums

    // Filling in the array with numbers using atof
    for (int i = 0; i < data.n; i++) {
        data.numbers[i] = atof(argv[i+1]); // Converting string to double
    }

    /*
    *   === TODO 4 ===
    *   Create the worker threads for the average, min, and max.
    *   Wait for each of the worker threads to finish.
    *   After each of the worker threads are done print out the results.
    * 
    *   === For Fun ===
    *   As an interesting excercise, what happens if you don't wait?
    */

    // Freeing up dynamically allocated space
    delete[] data.numbers;
}
