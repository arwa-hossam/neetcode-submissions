class MedianFinder {
public:
    priority_queue <int>p1;
    priority_queue<int, std::vector<int>, std::greater<int>> p2; //asc
    MedianFinder() {
        
    }

    bool f=0, f2=0;//which pq determiner, 1>>p1 , 0>>p1
    
    void addNum(int num) {
       if(!f)p1.push(num),f=1;
       if(!f2)p2.push(num),f2=1;

       else{
        if(p1.size()==p2.size()){
            if(num<p1.top())p1.push(num);
            else p2.push(num);
        }

        if(p2.top()<num)p1.push(p2.top()), p2.pop(), p2.push(num);
        else p1.push(num);
       }
         int x= p1.size()-p2.size();
         while( abs(x)>1 ){
        if(p1.size()>p2.size())p2.push(p1.top()),p1.pop();
        else p1.push(p2.top()), p2.pop();
        x=p1.size()-p2.size();
       }
    }
    
    double findMedian() {
        int s=p1.size()+p2.size();
        if(s%2==0){
            double ans = double(p1.top()+p2.top())/2;
            return ans;
        }
        else{
            if(p1.size()>p2.size())return p1.top();
            else return p2.top();
        }
    }
};