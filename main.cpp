#include <iostream>
#include <vector>
#include <chrono>
#include <iomanip>
using namespace std;
using namespace chrono;

// 1. Recursive approach
long long fibonacciRecursive(int n) {
    if (n <= 1)
        return n;

    return fibonacciRecursive(n - 1)
         + fibonacciRecursive(n - 2);
}

// 2. Iterative approach using an array
vector<long long> fibonacciIterative(int n) {
    vector<long long> fib(n + 1, 0);

    if (n >= 1)
        fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib;
}

// 3. Dynamic programming using memoization
long long fibonacciMemo(int n, vector<long long>& memo) {
    if (n <= 1)
        return n;

    if (memo[n] != -1)
        return memo[n];

    memo[n] = fibonacciMemo(n - 1, memo)
            + fibonacciMemo(n - 2, memo);

    return memo[n];
}

// Measure execution time in microseconds
template <typename Function>
double measureTime(Function function, int repetitions) {
    volatile long long result = 0;

    auto start = steady_clock::now();

    for (int i = 0; i < repetitions; i++) {
        result = result + function();
    }

    auto end = steady_clock::now();

    return duration<double, micro>(
        end - start
    ).count() / repetitions;
}

int main() {
    cout << "====================================\n";
    cout << " FIBONACCI LOYALTY REWARD SYSTEM\n";
    cout << "====================================\n";

    // Task 5: Performance analysis for n = 30
    int n = 30;

    vector<long long> memo(n + 1, -1);

    double recursiveTime = measureTime(
        [=]() { return fibonacciRecursive(n); }, 5);

    double iterativeTime = measureTime(
        [=]() { return fibonacciIterative(n)[n]; }, 10000);

    double memoTime = measureTime(
        [&]() {
            vector<long long> m(n + 1, -1);
            return fibonacciMemo(n, m);
        }, 10000);

    cout << "\nPERFORMANCE ANALYSIS (n = 30)\n";
    cout << fixed << setprecision(3);

    cout << "Recursive time: "
         << recursiveTime << " microseconds\n";

    cout << "Iterative time: "
         << iterativeTime << " microseconds\n";

    cout << "Memoization time: "
         << memoTime << " microseconds\n";

    cout << "\nF(30) = "
         << fibonacciRecursive(30) << endl;

    // Task 4: Customer loyalty reward application
    int years;

    cout << "\nEnter number of years customer has been loyal: ";
    cin >> years;

    if (cin.fail() || years < 0 || years > 90) {
        cout << "Invalid input. Enter a whole number from 0 to 90.\n";
        return 1;
    }

    vector<long long> rewards =
        fibonacciIterative(years);

    cout << "\nCUSTOMER LOYALTY REWARDS\n";
    cout << "------------------------\n";

    long long total = 0;

    for (int year = 1; year <= years; year++) {
        cout << "Year " << year << ": "
             << rewards[year] << " points\n";

        total += rewards[year];
    }

    cout << "\nTotal reward points: "
         << total << endl;

    return 0;
}