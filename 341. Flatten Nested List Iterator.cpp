class NestedIterator {
private:
    vector<int>v;
    int index;
public:
    void createList(vector<NestedInteger>&list){
        for(auto elem : list){
            if(elem.isInteger()){
                v.push_back(elem.getInteger());
            }
            else{
                createList(elem.getList());
            }
        }
    }
    
    NestedIterator(vector<NestedInteger> &nestedList) {
        index = 0;
        createList(nestedList);
    }
    
    int next() {
        return v[index++];
    }
    
    bool hasNext() {
        return index<v.size();
    }
};
