class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto it : stones)
        {
            pq.push(it);
        }
        while(pq.size()>1)
        {
            int top_element = pq.top();
            pq.pop();
            int sec_element = pq.top();
            pq.pop();
            int ans = top_element - sec_element;
            if(ans!=0)
            pq.push(ans);
        }
        if(pq.empty())
        {
            return 0;
        }
        else
       return pq.top();
    }
};