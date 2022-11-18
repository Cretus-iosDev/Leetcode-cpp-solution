class Solution {
public:
    int longestPalindrome(vector<string>& words)
    {
        unordered_map<string,int> mp;
        
        // lc -> 1
        // cl -> 1
        // gg -> 1
        for(int i=0;i<words.size();i++)
            mp[words[i]]++;

        int ans = 0;
        bool mid = false;
        
        //iterate through the map
        for(auto x:mp)
        {
            if(x.first[0]!=x.first[1]) // means that l is not equal to c in lc
            {
                string rev = x.first;  // rev = lc
                swap(rev[0],rev[1]);   // cl
                
                //if cl is present in the map then take minimum of map second value b/w 
                // lc -> 1 and cl -> 1 and multiply it with 2 since it occurred 2 times
                
                if(mp.count(rev)) 
                    ans += 2 * (min(x.second,mp[rev])); 
            }
            
            // what if both the letters are equal?? words = ["cc","ll","xx"]
            
            else
            {
                ans += 4 *(x.second/2);
                mid |= x.second % 2;
            
            }
            
        }
        
         if(mid) return ans+2;
         else  return ans;
        
    }
};