# Segtree README

## Features

This code implements a Segment Tree (Segtree) template in C++. The Segment Tree is a versatile data structure that efficiently handles range queries and updates on an array. The provided code specifically supports the following features:

1. **Range Updates and Queries:** The Segtree supports range updates and queries efficiently. It can perform updates and queries over a specified range in logarithmic time complexity.

2. **Lazy Propagation:** The code employs lazy propagation to optimize **range updates**. It postpones the actual updates until required, reducing redundant operations.

## How to Use

### Initializing the Segtree

```cpp
ll a[4] = {1,2,3,4};
Segtree<Node> tree(4, a);
```

To create a Segtree instance, provide the size of the array `n` and the array itself (`a` in this case). The constructor initializes the Segtree with the given array.

### Performing Range Updates

```cpp
tree.range_update(0, 3, &Node::add, 1ll);
tree.range_update(0, 1, &Node::set, 1ll);
```

The `range_update` method allows you to perform updates on a specified range. In the example, it adds 1 to elements in the range [0, 3) and sets the value to 1 for elements in the range [0, 1).

### Performing Range Queries

```cpp
Node ans = tree.query(0, 3);
cout << ans.val << "\n";
```

The `query` method returns the result of a range query on the specified range. In this example, it queries the sum of elements in the range [0, 3) and prints the result.

## Sample Demonstration

The provided `main` function demonstrates how to use the Segtree for range updates and queries:

```cpp
int main()
{
    ll a[4] = {1,2,3,4};
    Segtree<Node> tree(4,a);

    tree.range_update(0,3,&Node::add,1ll);
    tree.range_update(0,1,&Node::set,1ll);

    Node ans = tree.query(0,3);
    cout << ans.val << "\n"; // Output: 10
}
```

This example initializes a Segtree with an array `[1, 2, 3, 4]`, performs a range update and a set operation, and then queries the sum of elements in the range [0, 3), resulting in an output of `10`.