#ifndef GRAM_SET_H_
#define GRAM_SET_H_

#include "GramSetNode.h"

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

    
public:
    /*
     *  ������init
     *  ���ܣ�����Z��asciiId
     */
    static void init(int Z_, int * asciiId_);
};

#endif // GRAM_SET_H_
