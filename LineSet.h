#ifndef LINE_SET_H_
#define LINE_SET_H_

#include <vector>

/**
 *  ����ÿ��Gram�洢�������������еı�ż��ϡ�
 *  ��ʵ���Ǹ�std::vector < int >��
 */
class LineSet {
    
public:
    std::vector < int > lineList;
    
public:
    /*
     *  ���캯��
     */
    LineSet();
    
    /*
     *  ��������
     */
    virtual ~LineSet();
    
public:
    /*
     *  ������insertLine
     *  ���ܣ�����һ���б��
     */
    void insertLine(int line);
    
    /*
     *  ������getSize
     *  ���ܣ���ȡ�м��ϵĴ�С
     */
    int getSize();
    
    /*
     *  ������getLineById
     *  ���ܣ���ȡ��i���б��
     */
    int getLineById(int i);
    
    /*
     *  ������getAll
     *  ���ܣ����غϲ������е�����
     */
    void getAll(std::vector < int > & lineList_);
    
public:
    /*
     *  ������cmpPointer
     *  ���ܣ�����std::sortʱ����������С��������
     */
    static bool cmpPointer(const LineSet * a, const LineSet * b);
};
#endif // LINE_SET_H_
