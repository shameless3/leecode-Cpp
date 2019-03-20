# 🖋leecode-C++
用c++刷leetcode  
因为自己其实只学了C，但因为CSP考试只用C而用不了STL容器很吃亏  
决定利用leetcode边用C++写题边学C++，所以我在写这段话的时候我甚至还不知道cin和cout怎么用
### 001 两数之和  [001.cpp](https://github.com/shameless3/leecode-Cpp/blob/master/code_C++/001.cpp)  难度:easy 
利用unordered_map创造哈希表，用数组中的值作Key，在数组中的位置作value达到O（n）的复杂度
### 002 两数相加  [002.cpp](https://github.com/shameless3/leecode-Cpp/blob/master/code_C++/002.cpp)  难度:medium 
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
### 003 无重复字符的最长子串 [003.cpp](https://github.com/shameless3/leecode-Cpp/blob/master/code_C++/003.cpp) 难度：medium  
本题利用unordered_map创建哈希表，将字符存储为key，字符对应在字符串中的位置存储为value  
通过判断新字符在哈希表中是否存在并移动起始位置达到只需要遍历一遍的目的
### 007 整数反转 [007.cpp](https://github.com/shameless3/leecode-Cpp/blob/master/code_C++/007.cpp) 难度：easy 
没什么难度，注意处理边界情况，在数字过大时返回0即可
### 008 字符串转换整数（atoi) [008.cpp](https://github.com/shameless3/leecode-Cpp/blob/master/code_C++/008.cpp) 难度：medium
常规题，要多考虑一些边角，如在什么时候遇到正负号，什么时候遇到非整数字符，还有和007一样在数字过大溢出时加以判断
### 009 回文数 [009.cpp](https://github.com/shameless3/leecode-Cpp/blob/master/code_C++/009.cpp) 难度：easy  
要判断一个数是否是回文数，将其转化为字符串是最容易想到的，但占用较多额外内存，便考虑到可以将整数反转与原来数字比较  
但这样子不仅可能会出现反转后整数溢出的情况，而且时间复杂度也不是最优，便可以只翻转整数的后一半 程序不难很巧妙，值得记住
