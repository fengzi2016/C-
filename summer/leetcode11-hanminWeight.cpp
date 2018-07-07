//编写一个函数，输入是一个无符号整数，返回其二进制表达式中数字位数为 ‘1’ 的个数（也被称为汉明重量）。
int hammingWeight(uint32_t n) {
	//2种方法 
    //     int c;
    //     for( c = 0; n ; c++) {
    //         n &= (n-1);
    //     }
    //     return c;
    // }
        int c = 0;
        for(;n;n>>=1) {
            c += n&1;
        }
        return c;
    }

