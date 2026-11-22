class ProductOfNumbers {
    vector<int> pref = {1};

public:
    void add(int num) {
        if (num == 0)
            pref = {1};
        else
            pref.push_back(pref.back() * num);
    }

    int getProduct(int k) {
        int n = pref.size();

        if (k >= n)
            return 0;

        return pref[n - 1] / pref[n - k - 1];
    }
};