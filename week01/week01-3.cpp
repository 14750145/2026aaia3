//week01-3.cpp 學習計畫 Basic 第3題
//LeetCode 28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        //所有的程式題目，都可以用for(迴圈) if (判斷) 涵式呼叫
        int N1 =haystack.length(), N2=needle.length();
         //函式呼叫， 字串長度 .length()
        for (int i=0; i<=N1-N2; i++){ //迴圈
            if (haystack.substr(i, N2) == needle) return i; //找答案
            //如果 大字串的substr(開始，長度)等於小字串，就找到答案了
        }
        return -1; //找不到
    }
};
