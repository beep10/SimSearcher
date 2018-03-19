#ifndef GRAM_SET_NODE_H_
#define GRAM_SET_NODE_H_

class GramSetNode {
    
private:
    //�ַ�����С
    static int Z;
    //�ַ���Ӧ����ֵ��ţ���Χ[0, Z - 1]��������鲻����
    static int * asciiId;
    
private:
    //�ӽڵ��б�
    GramSetNode ** son;
    
    
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
     *  ���ܣ������ӽڵ�ָ��
     */
    GramSetNode * getSonByAscii(char ch);
    
    /*
     *  ������setSonByAscii
     *  ���ܣ��Ӹ��¶���
     */
    void setSonByAscii(char ch, GramSetNode * ns);
    
public:
    /*
     *  ������init
     *  ���ܣ�����Z��asciiId
     */
    static void init(int Z_, int * asciiId_);
};

#endif // GRAM_SET_NODE_H_
