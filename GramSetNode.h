#ifndef GRAM_SET_NODE_H_
#define GRAM_SET_NODE_H_

#include "LineSet.h"

/**
 *  Gram�ֵ�����ÿ���ڵ㣬��Ҫ�ȵ���init������
 *  һ��ʼ����lineSet��NULL���ȵ��õ�ʱ���ȥ������
 */
class GramSetNode {
    
private:
    //�ַ�����С
    static int Z;
    //�ַ���Ӧ����ֵ��ţ���Χ[0, Z - 1]��������鲻����
    static int * asciiId;
    
private:
    //�ӽڵ��б�
    GramSetNode ** son;
    //������ǰ�ڵ��ʾ��gram���м���
    LineSet * lineSet;
    
public:
    /*
     *  ���캯��
     */
    GramSetNode();
    
    /*
     *  ��������
     */
    virtual ~GramSetNode();
    
public:
    /*
     *  ������getSonByAscii
     *  ���ܣ���ȡ�ӽڵ�
     */
    GramSetNode * getSonById(int i);
    
    /*
     *  ������getSonByAscii
     *  ���ܣ���ȡ�ӽڵ�
     */
    GramSetNode * getSonByAscii(char ch);
    
    /*
     *  ������getOrCreateSonByAscii
     *  ���ܣ���ȡ�ӽڵ㣬��������ھʹ���һ��
     */
    GramSetNode * getOrCreateSonByAscii(char ch);
    
    /*
     *  ������getLineSet
     *  ���ܣ���ȡ�м���
     */
    LineSet * getLineSet();
    
    /*
     *  ������getOrCreateLineSet
     *  ���ܣ���ȡ�򴴽��м���
     */
    LineSet * getOrCreateLineSet();
    
public:
    /*
     *  ������init
     *  ���ܣ�����Z��asciiId
     */
    static void init(int Z_, int * asciiId_);
};

#endif // GRAM_SET_NODE_H_
