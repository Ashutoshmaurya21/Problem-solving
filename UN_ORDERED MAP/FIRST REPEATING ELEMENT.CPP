int Solution::solve(vector<int> &A) {
    
    unordered_map<int,int>mp;
    for(int a: A){
        mp[a]++;
    }
    for(int a:A){
        if(mp[a]>1){
            return a;
        }
    }
    return -1;
}
