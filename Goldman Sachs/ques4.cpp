string encode(string s)
{
  char pre=s[0];int cnt=1;int n=s.size();
  if(n==1){
      int z=1;
      s+=to_string(1);
      return s;
  }
  string ans="";
  for(int i=1;i<s.size();i++){
      if(s[i]==s[i-1]){
          cnt++;
      }
      else{
          ans+=s[i-1];
          int z=cnt;
          ans+=to_string(z);
          cnt=1;
      }
  }
  if(!cnt){
      ans+=s[n-1];
  }
  else{
      ans+=s[n-1];
      int z=cnt;
      ans+=to_string(z);
  }
  return ans;
}
