class MyHashSet {
public:
      vector<bool> HashSet;
    MyHashSet() {
        HashSet.resize(1000001,false);
    }
    
    void add(int key) {
        HashSet[key] = true;
    }
    
    void remove(int key) {
        HashSet[key] = false;
    }
    
    bool contains(int key) {
         return HashSet[key] == true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */