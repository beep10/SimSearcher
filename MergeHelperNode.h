#ifndef MERGE_HELPER_NODE_H_
#define MERGE_HELPER_NODE_H_

class MergeHelperNode {
    
private:
    //�ϸ��ڵ�
    MergeHelperNode * prev;
    //�¸��ڵ�
    MergeHelperNode * next;
    
public:
    MergeHelperNode();
    virtual ~MergeHelperNode();
    
    friend class MergeHelper;
};

#endif // MERGE_HELPER_NODE_H_
