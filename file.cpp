#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tc;cin>>tc;while(tc--)
void inp(){
    #ifndef ONLINE_JUDGE
    freopen("inputvs.txt","r",stdin);
    freopen("outputvs.txt","w",stdout);
    #endif
}
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void kickstart_print(int t,string x){
    cout<<"Case #"<<t<<": "<<x<<endl;
}

void solve(){
    int n;
    cin>>n;
    
    cout<<n<<endl;
}

int main()
{
    inp();
    fast();
    solve();
}




































// int n;
// bool check(vector<vector<int>>&a)
// {
//     if(a[0][0]!=n)
//     return false;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(a[i][j]>0)
//             {
//                 if(a[i][j]>(n-j))
//                 return false;
//                 if(i+1<n && j+1<n)
//                 {
//                     if(a[i][j]-a[i+1][j+1]!=1)
//                     return false;
//                 }
//             }
//         }
//     }
//     return true;
// }
// string f(vector<vector<int>> lpc){
//      n=lpc.size();
//     string fans="";
//     string imp="Impossible";
//     if(check(lpc)==false)
//     return imp;
//     char ch='a';
//     int cnt=0;
//     vector<int>vis(n,0);
//     vector<char>ans(n);
//     for(int i=0;i<n;i++)
//     {
//         if(vis[i]==0)
//         {
//             if(cnt>=26)
//             return imp;
//             for(int j=i;j<n;j++)
//                 {
//                     if(lpc[i][j]>0)
//                     {
//                         ans[j]=ch;
//                         vis[j]=1;
//                     }
//                 }
//                 ch++;
//                 cnt++;
//         }
        
//     }
//     for(char c:ans)
//     {
//         fans+=c;
//     }
//     return fans;
// }


// class ListNode{
//     public:
//     int val;
//     ListNode* next;
//     ListNode(){
//         next=NULL;
//     }
//     ListNode(int val){
//         this->val=val;
//         next=NULL;
//     }
// };

// ListNode* build(){
//     int n;
//     cin>>n;
//     if(n==-1)
//     return NULL;
//     ListNode *head=new ListNode(n);
//     head->next=build();
//     return head;
// }
// ListNode* sortlist(ListNode* head){
//     if(head==NULL)
//     return NULL;
//     ListNode *ans=head;
//     while(head!=NULL)
//     {
        
//         head=head->next;
//     }
    
// }







//___________________PRIME SEIVE__________________

// int seive[100000];

// void prime_seive(int n){
//     for(int i=2;i*i<=n;i++)
//     {
//         if(seive[i]==1)
//         {
//             for(int j=i*i;j<=n;j+=i)
//             seive[j]=0;
//         }
//     }
// }


// ________________ LPS + KMP KA CODE _______________________________


//vector<int> lps_of(string s){
//    int n=s.size();
//    vector<int> lps(n);
//    int i=1;
//    int len=0;
//    while(i<n)
//    {
//       if(s[i]==s[len]){
//          i++;
//          lps[i]=len;
//          len++;
//       }
//       else{
//          if(len!=0){
//             len=lps[len-1];
//          }
//          else{
//             lps[i]=0;
//             i++;
//          }
//       }
//    }
//    return lps;
// }
// int kmp_match(string s,string t){
//    vector<int> lps=lps_of(s);
//    int n=s.size();
//    int i=0,j=0;
//    int pos=-1;
//    while(i<n)
//    {
//       if(s[i]==t[j])
//       {
//          i++;
//          j++;
//       }
//       else
//       {
//          if(j!=0)
//             j=lps[j-1];
//          else
//             i++;
//       }
//       if(j==t.size())
//       {
//          pos=i-t.size();
//          break;
//       }
//    }
//    return pos;
// }

// ________________SEGMENT TREE KA CODE__________________________

// vector<long long int> seg;
// void build(int id,int l,int r,vector<int> &v,vector<long long int> &seg){
//     if(l==r)
//     {
//         seg[id]=v[l];
//         return;
//     }
//     int mid=l+(r-l)/2;
//     build(2*id+1,l,mid,v,seg);
//     build(2*id+2,mid+1,r,v,seg);
//     seg[id]=seg[2*id+1]+seg[2*id+2];
// }
// void update(int id,int l,int r,vector<long long int> &seg,int pos,int val){
//     if(l==r){
//         seg[id]=val;
//         return;
//     }
//     int m=(l+r)/2;
//     if(pos<=m)
//     update(2*id+1,l,m,seg,pos,val);
//     else
//     update(2*id+2,m+1,r,seg,pos,val);
//     seg[id]=seg[2*id+1]+seg[2*id+2];
// }

// long long int getsum(int id,int tl,int tr,int l,int r,vector<long long int> &seg){
//     if(l>r)
//         return 0;
//     if(tl==l&&tr==r)
//         return seg[id];
//     int m=(tl+tr)/2;
//     return getsum(2*id+1,tl,m,l,min(r,m),seg)+getsum(2*id+2,m+1,tr,max(m+1,l),r,seg);
// }


// _______________MINIMUM SPANNING TREE (MST) KA CODE_______________________

// int findPar(int u,vector<int> &parent){
//         if(u==parent[u])
//             return u;
//         return parent[u]=findPar(parent[u],parent);
//     }
//     void unionn(int u,int v,vector<int> &parent,vector<int> &rank){
//         u=findPar(u,parent);
//         v=findPar(v,parent);
//         if(rank[u]<rank[v])
//             parent[u]=v;
//         else if(rank[v]<rank[u])
//             parent[v]=u;
//         else{
//             parent[v]=u;
//             rank[u]++;
//         }
//     }
//     int minCostConnectPoints(vector<vector<int>>& pt) {
//         int n=pt.size(); 
//         vector<vector<int>> edges;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 edges.push_back({abs(pt[i][0]-pt[j][0])+abs(pt[i][1]-pt[j][1]),i,j});
//             }
//         }
//         sort(edges.begin(),edges.end());
//         vector<int> parent(n);
//         vector<int> rank(n,0);
//         for(int i=0;i<n;i++)
//             parent[i]=i;
//         int cost=0;
//         for(int i=0;i<edges.size();i++)
//         {
//             if(findPar(edges[i][1],parent)!=findPar(edges[i][2],parent))
//             {
//                 cost+=edges[i][0];
//                 unionn(edges[i][1],edges[i][2],parent,rank);
//             }
//         }
//         return cost;
//     }


// bool subset_sum(vector<int> &nums,int k){
//     int n=nums.size();
//     int m=k;
//     vector<vector<bool>> dp(n+1,vector<bool>(m+1,false));
//     for(int i=0;i<=n;i++)
//     dp[i][0]=true;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=m;j++)
//         {
//             if(j>=nums[i-1])
//             {
//                 dp[i][j]=dp[i-1][j-nums[i-1]] || dp[i-1][j];
//                 // For multiple selection of same coin: dp[i][j]=dp[i][j-nums[i-1]] || dp[i-1][j];
//                 // For single selection of same coin: dp[i][j]=dp[i-1][j-nums[i-1]] || dp[i-1][j];
//                 // See the difference between "[i]"[j-nums[i-1]] and "[i-1]"[j-nums[i-1]]
//             }
//             else
//                 dp[i][j]=dp[i-1][j];
//         }
//     }
//     return dp[n][m];
// }
