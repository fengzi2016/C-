bool isHappy(int n) {
    vector<string> store;
    string  tmp = to_string(n);
    while(tmp!="1"){
        vector<string>::iterator it = find(store.begin(),store.end(),tmp);
        if(it!=store.end()) return false;
        store.push_back(tmp);
        tmp = to_string(sum(tmp));
    }
}
int sum(string s) {
    int result = 0;
    for(int i=0;i<s.length();i++) {
        int tmp = s[i] - '0';
        result += tmp*tmp;
    }
    return result;
}