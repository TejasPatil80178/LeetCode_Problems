int maxReach = a[0];
int jumps = a[0]==0 ? -1:1;
int steps = a[0];

for(int i = 1;i<n;i++){
    if(i==n-1) break;

    maxReach = max(maxReach,i+a[i]);
    steps--;
    if(steps==0){
        jumps++;
        if(i>=maxReach){
            jumps = -1;
            break;
        }
        else{
            steps = maxReach-i;
        }
    }
}
cout<<jumps<<"\n";
