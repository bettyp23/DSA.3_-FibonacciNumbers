#include <iostream>
#include <chrono>
#include <vector>
#include "fibonacci.h"

using namespace std;
using namespace std::chrono;

// Measure the average time by Fibonacci functions
// func: pointer to the fib function
double measure_time(long long (*func)(int), int n, int runs = 5){
    double total_time = 0;

    for (int i =0; i < runs; ++i){
        auto start = high_resolution_clock::now();
        func(n);
        auto end = high_resolution_clock::now();

        //calculate elapsed time and add to total
        duration<double> elapsed = end - start;
        total_time += elapsed.count();
    }

    //return average time over all runs
    return total_time / runs;
}

int main(){

    //Run the code 5 times for each value of n and note the completion time for each run
    vector<int> n_values = {5, 15, 25, 35};

    cout << "=== Iterative Fibonacci Average Times ===\n";
    for (int n : n_values){
        double avg_time = measure_time(fib_iterative, n);
        cout<<"n="<<n<<", Avg time: "<<avg_time<<" sec\n";
    }

    cout << "\n=== Recursive Fibonacci Average Times ===\n";
    for (int n : n_values){
        double avg_time = measure_time(fib_recursive, n);
        cout<<"n="<<n<<", Avg time: "<<avg_time<<" sec\n";
    }


    //for both techniques 20 runs of iterative approach and 20 runs of recursive approach.
    int n = 20;

    cout<<"\nIterative Fibonacci "<< n << " times:\n";
        double iterative_time = measure_time(fib_iterative, n);
        long long iterative_result = fib_iterative(n);
        cout<<" n = " << n << ", Avg Time: " << iterative_time << " sec\n ";

    cout<<"\nRecursive Fibonacci "<< n << " times:\n";
        double recursive_time = measure_time(fib_recursive, n);
        long long recursive_result = fib_recursive(n);
        cout<<" n = " << n << ", Avg Time: " << recursive_time << " sec\n ";

    return 0;
}