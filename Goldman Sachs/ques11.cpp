   int *findTwoElement(int *arr, int n) {
      int mp[n+1]={0};
      int *a = new int(2);
      for(int i=0;i<n;i++){
          mp[arr[i]]++;
      }
        for(int i=1;i<=n;i++){
            if(mp[i]==2){
                a[0]=i;
            }
            else if(mp[i]==0){
                a[1]=i;
            }
        }

        return a;
    }
