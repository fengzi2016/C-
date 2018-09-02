vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> map
    // 关联容器：https://blog.csdn.net/ajianyingxiaoqinghan/article/details/78542932
    // 存储key 值和 value 值（映像值）
    // 根据Key值检索各个元素，Key值唯一
    // <int int>表示key和value都是int类型
    //迭代器：
    //unordered_map<Key,T>::iterator it;
    //(*it).first;      // the key value (of type Key)
    //(*it).second;     // the mapped value (of type T)
    //(*it);            // the "element value" (of type pair<const Key,T>)
    priority_queue <pair<int,int>> q;
    // 优先队列，根据权重排成二叉树，根节点的权重比其它的都大
    //http://www.cnblogs.com/TenosDoIt/archive/2013/04/15/3022219.html
    vector<int> res;
    for(int n : nums) {
        ++m[n];
    }
    for(auto a : m) {
        q.push({a.second,a.first});
        // a.second 为重复的数量,也是权重
    }
    for(int i=0;i<k;i++) {
        res.push_back(q.top().second);
        q.pop();
    }
    return res;


}