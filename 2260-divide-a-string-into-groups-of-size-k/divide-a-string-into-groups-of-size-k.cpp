class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> d;
        int n = s.size() / k;
        for (int i = 0; i < n * k; i += k) {
            string ss = s.substr(i, k);
            cout << ss << " ";
            d.push_back(ss);
        }
        string x = s.substr(n * k, s.size());
        int need = k - (s.size() - n * k);
          if (need == k)
            return d;
      
        while (need--)
            x += fill;
        d.push_back(x);

        cout << x << endl;
        return d;
    }
};