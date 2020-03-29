1.
class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        reverse(s.begin(),s.end());
    }
};

2.
class Solution {
public:
    int solve(TreeNode *root)
    {
        if(root==NULL)
            return 0;
        return max(solve(root->left),solve(root->right))+1;
    }
    int maxDepth(TreeNode* root) 
    {
        return solve(root);   
    }
};

3.
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int x=nums[0];
        for(int i=1;i<nums.size();i++)
            x=(x^ums[i]);
        return x;
    }
};


4.
class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> ans;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && i%5!=0)
                ans.push_back("Fizz");
            else if(i%5==0 && i%3!=0)
                ans.push_back("Buzz");
            else if(i%15==0)
                ans.push_back("FizzBuzz");
            else
                ans.push_back(to_string(i));
        }
        return ans;
    }
};


5.
class Solution {
public:
    void solve(TreeNode *root,vector<int> &v1)
    {
        if(root==NULL)
            return ;
        solve(root->left,v1);
        v1.push_back(root->val);
        solve(root->right,v1);
    }
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> ans;
        solve(root,ans);
        return ans;
    }
};



6.
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        ListNode *next,*prev,*curr;
        curr=head;
        prev=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        return head;
    }
};


7
class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        while(1)
        {
                int f=0;
                for(int i=0;i<nums.size()-1;i++)
                {
                    if(nums[i]==0 && nums[i+1]!=0)
                    {
                        f=1;
                        swap(nums[i],nums[i+1]);
                    }
                }
            if(!f)break;
        }   
    }
};

8.
class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
            return true;
        return false;
    }
};

9.
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        map<int,int> m1;
        int f=0;
        for(int i=0;i<nums.size();i++)
        {
                m1[nums[i]]++;
                if(m1[nums[i]]>1)
                {
                    f=1;
                }
        }
        if(!f)return false;
        return true;
    }
};


10.
class Solution {
public:
    int dp[1000];
    int solve(int n)
    {
            if(n==0)
                return 1;
            if(n<0)
                return 0;
            else if(dp[n])
                return dp[n];
            else
            {
                return dp[n]=solve(n-1)+solve(n-2);
            }
    }
    int climbStairs(int n) 
    {
        memset(dp,0,sizeof(dp));
        return solve(n);   
    }
};