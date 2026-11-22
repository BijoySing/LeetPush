class ProductOfNumbers {
    vector<long long> prefix = {1};

public:
    void add(int num) {
        if (num == 0)
            prefix = {1};
        else
            prefix.push_back(prefix.back() * num);
    }

    int getProduct(int k) {
        int n = prefix.size();
        return k >= n ? 0 : prefix.back() / prefix[n - k - 1];
    }
};