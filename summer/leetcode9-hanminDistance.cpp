//两个整数之间的汉明距离指的是这两个数字对应二进制位不同的位置的数目
//给出两个整数 x 和 y，计算它们之间的汉明距离。
#include<math.h>
#include<iostream>
#include <stdio.h>
using namespace std;
int main() {
	  int x = 1;
	  int y = 2;
	  int s = x^y;
      int c = 0;
        for(;s;s>>=1) {
            c+=s&1;
        }
        cout<<c;
        return c;
    
        
    }