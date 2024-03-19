#include <iostream>
#include <vector>

using namespace std;

int maxRotateFunction(vector<int>& nums) {
    int n = nums.size();
    long long sum = 0; // Using long long to avoid overflow
    long long rotationSum = 0;

    // Calculating the sum of all elements and F(0)
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
        rotationSum += i * nums[i];
    }

    long long maxRotation = rotationSum;

    // Calculating F(k) for each rotation k > 0
    for (int k = 1; k < n; ++k) {
        rotationSum += sum - n * nums[n - k]; // Update rotationSum for the next rotation
        maxRotation = max(maxRotation, rotationSum);
    }

    return static_cast<int>(maxRotation);
}

int main() {
    // Input
    freopen("input3.txt","r",stdin);
    freopen("output3.txt","w",stdout);
    cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // Calculating maximum value of F(0), F(1), ..., F(n-1)
    int result = maxRotateFunction(nums);
    cout << "Maximum value of F(0), F(1), ..., F(n-1) is: " << result << endl;
    
    return 0;
}
