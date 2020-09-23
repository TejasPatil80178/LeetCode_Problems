class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int> v;
        int a = min(x,y);
        int b = max(x,y);
        if(a==1 && b==1){
            if(bound>=2){
                v.push_back(2);
            }
            return v;
        }
        else if(a==1){
            for(int i = 0;pow(b,i)<=bound-1;i++){
                v.push_back(pow(b,i)+1);
            }
            return v;
        }
        
        set<int> s;
        for(int i = 0;pow(b,i)<=bound;i++){
            for(int j = 0;pow(a,j)<=bound;j++){
                int x = pow(a,j) + pow(b,i);
                if(x<=bound) s.insert(x);
                else break;
            }
        }
        
        for(auto it = s.begin();it!=s.end();it++){
            v.push_back(*it);
        }
        
        return v;
    }
};
