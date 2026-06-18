#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>nse(n);
        vector<int>pse(n);
        stack<int>st;
        //pse
        for(int i=0;i<n;i++){
            while(!st.empty()&&heights[st.top()]>=heights[i])st.pop();
            if(st.empty())pse[i]=-1;
            else{
                pse[i]=st.top();
            }
            st.push(i);
        }
        //stack clear
        st=stack<int>();
        //nse
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&heights[st.top()]>=heights[i])st.pop();
            if(st.empty()) nse[i]=n;
            else{
                nse[i]=st.top();
            }
            st.push(i);
        }
        int l,r,area,maxarea=0;
        for(int i=0;i<n;i++){
            l=i-pse[i];
            r=nse[i]-i;
            area=heights[i]*(l+r-1);
            maxarea=max(maxarea,area);
        }
        return maxarea;
    }
};