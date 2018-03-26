#ifndef MERGE_HELPER_H_
#define MERGE_HELPER_H_

#include <vector>

/**
 *  �ںϲ�lineSetʱʹ�õ����ݽṹ��
 *  ��һ�ε���getInstanceǰ�����ȵ���init������������NULL
 *  ����O(1)��ĳ���б������һ�μ�����
 *  ����O(1)��ѯ���ٳ���t�ε��б�Ÿ�����
 *  ����O(����)�������ٳ���t�˵��б��vector��
 *  ���Ծ�̯O(1)����Ա��´�ʹ�á�
 */
class MergeHelper {
    
private:
    //���ݵ�������
    static int N;
    //����
    static MergeHelper * instance;
    
private:
    //ÿ���б�ų��ֵĴ�������
    int * lCnt;
    //ÿ���������б��������׺������
    int * cSum;
    //ÿ��������˫�������ͷ�ڵ���
    int * headNode;
    //ÿ���ڵ���ϸ��ڵ��ź��¸��ڵ��ţ���ʼΪ-1
    int * nodePrev;
    int * nodeNext;
    
private:
    /*
     *  ���캯��
     */
    MergeHelper();
    
    /*
     *  ��������
     */
    virtual ~MergeHelper();
    
public:
    /*
     *  ������increase
     *  ���ܣ���һ���б�ŵļ�����+1
     */
    void increase(int l);
    
    /*
     *  ������getUpperCnt
     *  ���ܣ���ѯ���ٳ���t�ε��б��
     */
    int getUpperCnt(int t);
    
    /*
     *  ������exportOutUpper
     *  ���ܣ��������ٳ���t�˵��б�ŵ�vector������״̬
     */
    void getUpperList(int t0, std::vector < int > & upperList);
    
    /*
     *  ������clear
     *  ���ܣ������ֳ��Ա��´�ʹ��
     */
    void clear();
    
    /*
     *  ������print
     *  ���ܣ�������������ӡ����
     */
    void print();
    
public:
    /*
     *  ������init
     *  ���ܣ�����N��ֵ
     */
    static void init(int N_);
    
    /*
     *  ������getInstance
     *  ���ܣ���ȡ����
     */
    static MergeHelper * getInstance();
};

#endif // MERGE_HELPER_H_
