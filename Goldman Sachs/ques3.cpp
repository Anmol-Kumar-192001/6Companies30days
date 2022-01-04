 int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
       long int sum=1;
       long long int i=0,j=0,cnt=0,len=0;
        while(j<n){
            sum*=a[j];
            while(i<j&&sum>=k){
                sum/=a[i];
                i++;
            }
            if(sum<k){
                len=j-i+1;
                cnt+=len;
            }
            j++;
        }
        return cnt;
        }
