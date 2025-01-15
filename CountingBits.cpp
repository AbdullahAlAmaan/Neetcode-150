class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> binary;
        for (int i=0;i<n+1;i++){
            int count=0;
            int temp=i;
            while(temp>0){
                if(temp%2==1){
                    count++;
                }
                temp=temp/2;
            }
            binary.push_back(count);
        }
        return binary;
        
    }
};
