// arrfun1.cpp -- functions with an array argument
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);        // prototype
int main()
{
    using namespace std;
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
// some systems require preceding int with static to
// enable array initialization

    int sum = sum_arr(cookies, ArSize);
//    std::cout << sizeof cookies << " = sizeof cookies\n";
//    std::cout << sizeof cookies[0] << " = sizeof a cookie\n";
    cout << "Total cookies eaten: " << sum <<  "\n";
    // cin.get();
	int *ps=&cookies[2];
	cout <<&cookies<<endl;
	cout<<ps;
    return 0;
}

// return the sum of an integer array
int sum_arr(int arr[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
        total = total + arr[i];
    return total; 
}
