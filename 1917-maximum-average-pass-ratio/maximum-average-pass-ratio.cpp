class Solution {
public:
    double gain(int a, int b) {
        double x = (a + 1)*1.0 / (b + 1);
          x -= (a*1.0 / b);
        return x;
    }
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double,pair<int,int>>>pq;
        for (auto v : classes) {
            double g = gain(v[0], v[1]);
            pq.push({g,{v[0],v[1]}});
        }
        double ans=0;
        while(extraStudents--){
            auto [_g,v]=pq.top();
         //   cout<<v[0]<<" ,"<<v[1]<<" -->"<<_g<<endl;
            pq.pop();
            v.first+=1;
            v.second+=1;
            double g = gain(v.first, v.second);
            pq.push({g,{v.first, v.second}});
 
        }
        while(!pq.empty()){
            auto [_g,v]=pq.top();
            double g=v.first*1.0/v.second;
            ans+=g;

           // cout<<v[0]<<" "<<v[1]<<" "<<g<<endl;

            pq.pop();
            
        }

        return ans/classes.size();
    }
};