1����Qt�����õ����ַ�������utf-8��
�����ʹ�ñ�׼C�⺯��������������ģ����Qt��windows�����£����׼C�⺯������ҪGBK����

QTextCodec *codec = QTextCodec::codecForName("GBK"); //��Ҫͷ�ļ�#include <QTextCodec>
//codec->fromUnicode();//��UTF8ת��ΪGBK
char *file = codec->fromUnicode(fileName).data(); //fileNameΪQString����
//����
const char *file = codec->fromUnicode(fileName).toStdString().data();

2��Qt�ؼ���ʾ���ģ�������utf-8����������ʾ
fgets(buf, sizeof(buf), fp); //������ļ��ж�ȡ����������Ϊgbk����
QString str = codec->toUnicode(buf); //��һ��GBK������ַ���ת��UTF8

3��QString��char *ת��
QStringΪQt�ַ�������

QString str = "hello world";
const char *p = str.toStdString().data(); //QString -> const char *

char *p = "hello world";
QString str = p; //char * -> QString

4��QString���ò���
1)�ַ���ƥ���Ӵ��滻
QString str = "mike.c";
str = str.replace(".c", ""); //str�е�.c�滻Ϊ���ַ�

2)�ַ����ۼ�
QString str1 = "hello";
char *p = "world";
QString str2 = "mike";
QString txt = str1 + p + str2; //txt = "helloworldmike";

3)��ʽ���ַ���
QString cmd = QString("gcc %1 -o %2").arg("mike.c").arg("demo");
//"mike.c"��%1��λ�ã�"demo"��%2��λ��
//���Ϊ cmd = "gcc mike.c -o demo"

4)�ַ������
QString str = "mike.c";
str.clear();
