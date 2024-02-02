#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

template <typename Node>
class Segtree
{
    ll _n;
    vector<Node> st;

    void push(ll i)
    {
        assert(i<_n);
        st[2*i].pull(st[i]);
        st[2*i+1].pull(st[i]);
        st[i].push();
    }

    template <class... Args>
    void range_update_internal(ll i, ll l, ll r, void (Node::*node_update)(Args ...), Args ...args)
    {
        if(st[i].l==l && st[i].r==r)
        {
            (st[i].*node_update)(args...);
            return;
        }
    
        push(i);
    
        if(st[2*i].r>=l) range_update_internal(2*i,l,min(st[2*i].r,r),node_update,args...);
        if(st[2*i+1].l<=r) range_update_internal(2*i+1,max(st[2*i+1].l,l),r,node_update,args...);
    
        st[i] = Node::join(st[2*i],st[2*i+1]);
    }

    Node query_internal(ll i, ll l, ll r)
    {
        if(st[i].l==l && st[i].r==r)  return st[i];

        push(i);

        if(st[2*i].r<l) return query_internal(2*i+1,l,r);
        if(st[2*i+1].l>r) return query_internal(2*i,l,r);

        return Node::join(query_internal(2*i,l,st[2*i].r),query_internal(2*i+1,st[2*i+1].l,r));
    }

public: 
    Segtree(ll n, ll a[])
    {
        _n = (1ll<<(ll)ceil(log2(n)));
        st.resize(2*_n,Node(0,-1));

        for(ll i=0;i<_n;i++) 
        {
            st[_n+i] = Node((i<n?a[i]:0),i);
        }

        for(ll i=_n-1;i>=1;i--) st[i] = Node::join(st[2*i],st[2*i+1]);
    }

    template <class... Args>
    void range_update(ll l, ll r, void (Node::*node_update)(Args ...), Args ...args)
    {
        range_update_internal(1,l,r,node_update,args...);
    }

    Node query(ll l, ll r)
    {
        return query_internal(1,l,r);
    }
};

class Node
{
public:
    ll val;
    ll lazy;
    ll l,r;
    ll same_val;

    Node() : lazy(0), same_val(-1) {}
    Node(ll val, ll i) : val(val), lazy(0), l(i), r(i), same_val(-1) {}
    
    static Node join(Node x, Node y)
    {
        Node ans;
        ans.val = x.val+y.val;
        ans.l = min(x.l,y.l);
        ans.r = max(x.r,y.r);

        return ans;
    }

    void add(ll addend)
    {
        if(same_val!=-1) same_val+=addend;
        val+=(r-l+1)*addend;
        lazy+=addend;
    }

    void set(ll nval)
    {
        val = (r-l+1)*nval;
        lazy = 0;
        same_val = nval;
    }
    
    void pull(Node x)
    {
        if(x.same_val!=-1) set(x.same_val);
        else add(x.lazy);
    }

    void push()
    {
        lazy = 0;
    }
};

int main()
{
    ll a[4] = {1,2,3,4};
    Segtree<Node> tree(4,a);

    tree.range_update(0,3,&Node::add,1ll);
    tree.range_update(0,1,&Node::set,1ll);

    Node ans = tree.query(0,3);
    cout<<ans.val<<"\n";
}