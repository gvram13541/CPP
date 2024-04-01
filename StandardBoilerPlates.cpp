// 1. For finding the in how many subarrays the element is smallest
ll sumSubarrayMins(vector<int>& nums) {
    int length = nums.size();
    vector<int> left(length, -1);
    vector<int> right(length, length);
    stack<int> stk;

    for (int i = 0; i < length; ++i) {
        while (!stk.empty() && nums[stk.top()] >= nums[i]) {
            stk.pop();
        }
        if (!stk.empty()) {
            left[i] = stk.top();
        }
        stk.push(i);
    }

    stk = stack<int>();

    for (int i = length - 1; i >= 0; --i) {
        while (!stk.empty() && nums[stk.top()] > nums[i]) {
            stk.pop();
        }
        if (!stk.empty()) {
            right[i] = stk.top();
        }
        stk.push(i);
    }
}


// 2. For finding the in how many subarrays the element is largest
ll sumSubarrayMaxs(vector<int>& nums) {
    int length = nums.size();
    vector<int> left(length, -1);
    vector<int> right(length, length);
    stack<int> stk;

    for (int i = 0; i < length; ++i) {
        while (!stk.empty() && nums[stk.top()] <= nums[i]) {
            stk.pop();
        }
        if (!stk.empty()) {
            left[i] = stk.top();
        }
        stk.push(i);
    }

    stk = stack<int>();

    for (int i = length - 1; i >= 0; --i) {
        while (!stk.empty() && nums[stk.top()] < nums[i]) {
            stk.pop();
        }
        if (!stk.empty()) {
            right[i] = stk.top();
        }
        stk.push(i);
    }
}
