class MedianFinder {
public:
    vector<int>v;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
       if(v.empty()) v.push_back(num);
       else{
        auto it=lower_bound(v.begin(),v.end(),num);
        if(it!=v.end())v.insert(it,num);
        else v.push_back(num);
       }
    }
    
    double findMedian() {
        int s=v.size();
        if(s%2==0){
            s=s/2;
            double ans = ((double)v[s-1]+(double)v[s])/2;
            return ans;
        }
        else return (double)v[s/2];
    }
};