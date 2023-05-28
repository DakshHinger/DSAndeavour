class Solution {
    
public:
    int minCost(int n, vector<int>& cuts) {
        
        
        // padding 0 and n as end points to cuts
        cuts.emplace_back( 0 );
        cuts.emplace_back( n );
        sort( cuts.begin(), cuts.end() );
        
        const int cutSize = cuts.size();
        
        vector< vector<int> > table(cutSize, vector<int>(cutSize, -1) );
        
        
        function<int(int, int)> dp;
        dp = [&](const int left, const int right)->int{
            
            // look-up dp table
            if( table[left][right] != -1 ){
                return table[ left ][ right ];
            }
            
            // Base aka stop condition, no need to cut when cut points are adjacent
            if( (right - left) <= 1 ){
                
                table[ left ][ right ] = 0 ;
                return 0;                
            }
            
            
            // General cases:
            int finalCost = INT_MAX;
            
            // find and compute the minimal cost with cut point k
            for( int k = left+1 ; k < right ; k++){
                
                int curCost = dp(left, k) + dp(k, right) + ( cuts[right] - cuts[left] );
                
                finalCost = min(finalCost, curCost);
            }

            table[ left ][ right ] = finalCost;
            return finalCost;
            
        };
        
                    
        return dp(0, cuts.size()-1 );
    }

};