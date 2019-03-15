# leecode-C++
用c++刷leetcode  
因为自己其实只学了C，但因为CSP考试只用C而用不了STL容器很吃亏  
决定利用leetcode边用C++写题边学C++，所以我在写这段话的时候我甚至还不知道cin和cout怎么用
### 001 两数之和  [001.cpp](https://github.com/shameless3/leecode-Cpp/blob/master/code_C++/001.cpp)  难度:easy
利用unordered_map创造哈希表，用数组中的值作Key，在数组中的位置作value达到O（n）的复杂度
### 002 两数相加  [002.cpp](https://github.com/shameless3/leecode-Cpp/blob/master/code_C++/002.cpp)  难度:middle
题目本身没什么难度，按要求相加注意最后一次可能会有进位即可，可以利用？：的表达式简化语句
```
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ```  
 题目中结构体中的LisNode(int x)目前我认为是在使用new方法时可以加入的参数x并进行相关初始化，日后查到会补充  
### 003 无重复字符的最长子串 [003.cpp](https://github.com/shameless3/leecode-Cpp/blob/master/code_C++/003.cpp) 难度：middle  
本题利用unordered_map创建哈希表，将字符存储为key，字符对应在字符串中的位置存储为value  
通过判断新字符在哈希表中是否存在并移动起始位置达到只需要遍历一遍的目的
### 007 整数反转 [007.cpp](https://github.com/shameless3/leecode-Cpp/blob/master/code_C++/007.cpp) 难度：easy
没什么难度，注意处理边界情况，在数字过大时返回0即可
