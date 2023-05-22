class Solution {
public:
    int getNumberOfBacklogOrders(vector<vector<int>>& orders) {
        // value, amount (buy smallest in sell, sell largest in buy), sell sorted from smallest to largest, buy sorted from largest to smallest
        long ans = 0;
        priority_queue<pair<int,long>, vector<pair<int,long>>, greater<pair<int,long>>> sell;
        priority_queue<pair<int,long>> buy;
        for(vector<int> order:orders){
            if(order[2]){
                if(buy.empty() || buy.top().first < order[0]){
                    sell.push(make_pair(order[0],order[1]));
                    continue;
                }
                while(!buy.empty() && order[1] > 0 && buy.top().first >= order[0]){
                    if(buy.top().second >= order[1]){
                        pair<int,long> cur = buy.top();
                        cur.second -= order[1];
                        buy.pop();
                        buy.push(cur);
                        order[1] = 0;
                        break;
                    }
                    order[1] -= buy.top().second;
                    buy.pop();
                }
                if(order[1] > 0) sell.push(make_pair(order[0],order[1]));
            } else{
                if(sell.empty() || sell.top().first > order[0]){
                    buy.push(make_pair(order[0],order[1]));
                    continue;
                }
                while(!sell.empty() && order[1] > 0 && sell.top().first <= order[0]){
                    if(sell.top().second >= order[1]){
                        pair<int,long> cur = sell.top();
                        cur.second -= order[1];
                        sell.pop();
                        sell.push(cur); 
                        order[1] = 0;
                        break;
                    }
                    order[1] -= sell.top().second;
                    sell.pop();
                }
                if(order[1] > 0) buy.push(make_pair(order[0],order[1]));
            }
        }
        while(!sell.empty()){
            ans += sell.top().second; sell.pop();
        }
        ans %= 1000000007;
        while(!buy.empty()){
            ans += buy.top().second; buy.pop();
        }
        return ans % 1000000007;
    }
};