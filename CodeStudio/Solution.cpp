bool isPossible(vector<int>& stalls,int k,int mid){
    int cowcount=1;
    int lastpos=stalls[0]; //placing first cow at 0th position
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-lastpos>=mid){ //to calculate the search space
            cowcount++;
            lastpos=stalls[i]; //placing cow then it becomes the new position
            if(cowcount==k){ //all cows have been placed,job done,return true
                return true;
            }
        }
    }
        return false;
    
}
int aggressiveCows(vector<int>& stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int s=0;
    int maxi=-1;
    for(int i=0;i<stalls.size();i++){
        maxi=max(maxi,stalls[i]);//since we gotta calculate the maximum distance possible between two cows
    }
    int e=maxi;