int titleToNumber(string s) {
        int len = s.length();
        int sum = 0;
        int tmp = len -1;
        int chen = 1;
        while(tmp--) {
            chen*=26;
        }
        for(int i=0;i<len;i++) {
            int base = s[i] - 'A' + 1;
            sum += base*chen;
            chen/=26;
        }
        return sum;
    }