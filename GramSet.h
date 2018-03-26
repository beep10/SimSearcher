#ifndef GRAM_SET_H_
#define GRAM_SET_H_

#include <string>

#include "GramSetNode.h"

/**
 *  ����Gram���ֵ�������Ҫ�ȵ���init������
 *  ÿ��Gram��ĩβ�ڵ���һ��LineSet����������Gram�������еı�š�
 */
class GramSet {
    
private:
    //�ַ�����С
    static int Z;
    //�ַ���Ӧ����ֵ��ţ���Χ[0, Z - 1]��������鲻����
    static int * asciiId;
    
private:
    //���ڵ�
    GramSetNode * root;
    
public:
    /*
     *  ���캯��
     */
    GramSet();
    
    /*
     *  ��������
     */
    virtual ~GramSet();

private:
    /*
     *  ������clear
     *  ���ܣ�����cur�����µ����нڵ�
     */
    void clear(GramSetNode * cur);
    
    /*
     *  ������printVisitor
     *  ���ܣ���ӡ����Ļʱ�ĵݹ����
     */
    void printVisitor(GramSetNode * cur, char * gram, int gramLen);
    
public:
    /*
     *  ������insertGram
     *  ���ܣ�����һ��gram
     */
    void insertGram(const std::string & gram, int lineId);
    
    /*
     *  ������getLineSet
     *  ���ܣ���ѯһ��gram���б�ż��ϣ����û�оͷ���NULL
     */
    std::vector < int > * getLineSet(const std::string & gram);
    
    /*
     *  ������print
     *  ���ܣ���ӡ����Ļ������Debug
     */
    void print();
    
public:
    /*
     *  ������init
     *  ���ܣ�����Z��asciiId
     */
    static void init(int Z_, int * asciiId_);
};

#endif // GRAM_SET_H_
