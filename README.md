# C基础
[在线视频](https://www.bilibili.com/video/BV1GV411r7ug)
&emsp;[原来视频](原来/README.md)

## 一、linux介绍和基本命令
[在线视频](https://www.bilibili.com/video/BV1364y1D7dP/)<br>
> [备份](https://www.bilibili.com/video/BV1Nv411s7mC)

[UnixLinux基础讲义](01C基础/1.linux介绍和基本命令/UnixLinux基础讲义.doc) &emsp; [LINUX常用命令](01C基础/1.linux介绍和基本命令/3.资料/LINUX常用命令.pdf)
### 1.内核源码网址：[http://www.kernel.org](http://www.kernel.org)
安装Linux
```
[tony@tony-pc ~]$ sudo qemu-img create -f qcow2 -o size=10G /var/lib/libvirt/images/centos6.10.qcow2
Formatting '/var/lib/libvirt/images/centos6.10.qcow2', fmt=qcow2 size=10737418240 cluster_size=65536 lazy_refcounts=off refcount_bits=16

[tony@tony-pc ~]$ sudo virt-install \
> --name=centos6.10 \
> --cdrom=/home/tony/CentOS-6.10-i386-bin-DVD1.iso \
> --ram=2048 \
> --vcpus=1 \
> --graphics spice \
> --network bridge=virbr0 \
> --disk path=/var/lib/libvirt/images/centos6.10.qcow2
WARNING  Unable to connect to graphical console: virt-viewer not installed. Please install the 'virt-viewer' package.
WARNING  No console to launch for the guest, defaulting to --wait -1

Starting install...

Domain installation still in progress.
Waiting for installation to complete.
Domain has shutdown. Continuing.
Domain creation completed.
Restarting guest.
```

### 2.目录文件
在linux里面不叫文件夹，叫**目录**。

#### 1)Linux目录结构
/boot：放置linux系统启动时用到的一些文件，如Linux的内核文件：/boot/vmlinuz，系统引导管理器：/boot/grub。

/lost+fount：系统异常产生错误时，会将一些遗失的片段放置于此目录下。

/usr：应用程序存放目录
> /usr/local: 存放软件升级包。

/opt：给主机额外安装软件所摆放的目录。

/srv：服务启动之后需要访问的数据目录，如 www 服务需要访问的网页数据存放在 /srv/www 内。

/var：放置系统执行过程中经常变化的文件，如随时更改的日志文件 /var/log，/var/log/message：所有的登录文件存放目录，/var/spool/mail：邮件存放的目录，/var/run:程序或服务启动后，其PID存放在该目录下。

### 3.建立链接文件：ln
Linux 软链接文件类似于Windows下的快捷方式。

链接文件分为软链接和硬链接。
- 软链接：软链接不占用磁盘空间，源文件删除则软链接失效。
- 硬链接：硬链接只能链接普通文件，不能链接目录。

使用格式：
```bash
ln 源文件 链接文件
ln -s 源文件 链接文件
    -s  --symbolic
            make symbolic links instead of hard links
```

如果没有-s选项代表建立一个硬链接文件，两个文件占用相同大小的硬盘空间，即使删除了源文件，链接文件还是存在，所以 -s 选项是更常见的形式。

注意：如果软链接文件和源文件不在同一个目录，源文件要使用**绝对路径**，不能使用相对路径。

---
###### 硬链接和拷贝（复制）区别 
无论你修改了哪一个链接之后的文件 两个文件都会改变 保持一致  但是拷贝不会
> 1、改变软链接文件就是相当于间接的改变了源文件<br>
> 2、查看文件时默认链接数为1 如果有链接一次递增

### 4.文本搜索：grep
Linux系统中grep命令是一种强大的文本搜索工具，grep允许对文本文件进行模式查找。如果找到匹配模式， grep打印包含模式的所有行。
```
grep一般格式为：
grep [-选项] ‘搜索内容串’ 文件名
```
常用选项说明：
选项|	含义
:-:|:-:
-v	|显示不包含匹配文本的所有行（相当于求反）
-n	|显示匹配行及行号
-i	|忽略大小写

grep常用正则表达式：
参数|	含义
:-:|:-
^a|	行首,搜寻以 m 开头的行 grep -n '^a' 1.txt
ke$|	行尾,搜寻以 ke 结束的行 grep -n 'ke$' 1.txt
[Ss]igna[Ll]|	匹配 [] 里中一系列字符中的一个<br>搜寻匹配单词signal、signaL、Signal、SignaL的行<br>grep -n '[Ss]igna[Ll]' 1.txt
. (点)|	匹配一个非换行符的字符<br>匹配 e 和 e 之间有任意一个字符，可以匹配 eee，eae，eve，但是不匹配 ee，eaae<br>grep -n 'e.e' 1.txt

### 5.计算文件行数或字数：wc
常用选项说明：
选项|	含义
:-:|:-
-l|	统计行数
-w|	统计字数。一个字被定义为由空白、跳格或换行字符分隔的字符串。
-c|	统计字节数
-m|	统计字符数。这个标志不能与 -c 标志一起使用。

### 6. 查找文件：find
find命令功能非常强大，通常用来在特定的目录下搜索符合条件的文件，也可以用来搜索特定用户属主的文件。

常用用法：
命令|	含义
:-|:-
find ./ -name test.sh	|查找当前目录下所有名为test.sh的文件
find ./ -name \'*.sh\'	|查找当前目录下所有后缀为.sh的文件
find ./ -name \"[A-Z]*\"	|查找当前目录下所有以大写字母开头的文件
find  /tmp  -size   2M	|查找在/tmp 目录下等于2M的文件
find  /tmp  -size  +2M	|查找在/tmp 目录下大于2M的文件
find  /tmp  -size  -2M	|查找在/tmp 目录下小于2M的文件
find ./ -size +4k -size -5M	|查找当前目录下大于4k，小于5M的文件
find ./ -perm 0777	|查找当前目录下权限为 777 的文件或目录

### 7.windows常用命令(win+r)
查看目录信息： dir

清屏：cls


## 二、用户权限、VI操作、Linux服务器搭建、开发环境与网络配置
[在线视频](https://www.bilibili.com/video/BV1z64y1D7Vs/)
> [备份](https://www.bilibili.com/video/BV1Nv411s7mC)

### 1. VIM
#### 1)vi的文本查找功能
按键|	功能
:-|:-
/^字符串	|查找以字符串开始的行
/字符串$	|查找以字符串结尾的行
/a.b	|查找字符串a任意字符b

#### 2)vi的替换功能
按键|	功能
:-|:-
r	|替换当前光标字符
:r 文件名        |	 在光标当前位置载入另一个文件
:s/p1/p2/g      |   将当前行中所有p1均用p2替代
:g/p1/s//p2/g   |	将文件中所有p1均用p2替代
:n1,n2s/p1/p2/g |	将n1到n2行中所有p1均用p2替代

#### 3)vi的set指令
按键	|功能
:-|:-
:set ic	    |   搜寻时忽略大小写
:set noic   |	搜寻时不忽略大小写

### 2.Linux开发环境与网络配置
![Linux开发环境与网络配置.png](01C基础/2.用户权限、VI操作、Linux服务器搭建/2.资料/02_Linux开发环境与网络配置.png)

### 3.cgi练习
根据 ```2.资源/http.tar.gz``` 里面的```README.md```说明进行实验

### 4.[Ubuntu设置SSH](01C基础/2.用户权限、VI操作、Linux服务器搭建/2.资料/Ubuntu设置SSH.md)

### 5.ADB

## 三、C语言基础
[在线视频](https://www.bilibili.com/video/BV1BX4y1375N/)<br>
> [备份](https://www.bilibili.com/video/BV1y5411E7qt)

![C语言概述](01C基础/3.C基础/3.资料/03_C语言概述.png)
[C基础讲义](01C基础/1.linux介绍和基本命令/C基础讲义.doc) &emsp; [c语言32个关键字](01C基础/1.linux介绍和基本命令/3.资料/c语言32个关键字.pdf)

### 1.[system函数的使用](01C基础/3.C基础/2.code/1.system/test.c)
```c
#include <stdlib.h>
int system(const char *command);
    功能：在已经运行的程序中执行另外一个外部程序
    参数：外部可执行程序名字
    返回值：
        成功：不同系统返回值不一样
        失败：通常是 - 1
```

### 2.MFC ——> VS Studio, Microsoft Foundation Classes(微软基础类库)

### 3.查找程序所依赖的动态库
Linux平台下，ldd(“l”为字母) 可执行程序：
```
$> ldd hello.bin
```
Windows平台下，需要相应软件([Depends.exe](01C基础/3.C基础/3.资料/Depends.exe))

### 4.准32位与标准32位
总线的宽度是32位，同时CPU的寄存器也是32位，那么这个CPU就叫 **(标准)32位CPU**

CPU内部的寄存器是32位的，但总线是16位， **准32位CPU**

## 四、数据类型与运算符
[在线视频](https://www.bilibili.com/video/BV1Rf4y1s7s9/)<br>
> [备份](https://www.bilibili.com/video/BV1Ty4y1p77a)
### 1.C语言如何表示相应进制数
进制|表示
:-|:-
十进制	|以正常数字1-9开头，如123
八进制	|以数字0开头，如0123
十六进制|	以0x开头，如0x123
二进制	|C语言不能直接书写二进制数


### 2. 有符号数和无符号数区别
#### 1) 有符号数
有符号数是最高位为符号位，0代表正数，1代表负数。

#### 2)无符号数
无符号数最高位不是符号位，而就是数的一部分，无符号数**不可能是负数**。

#### 3)字符类型
转义字符	|含义	|ASCII码值（十进制）
:-:|:-|:-
\a	|警报	                            |007
\b	|退格(BS) ，将当前位置移到前一列    	|008
\f	|换页(FF)，将当前位置移到下页开头	    |012
\n	|换行(LF) ，将当前位置移到下一行开头	|010
\r	|回车(CR) ，将当前位置移到本行开头	    |013
\t	|水平制表(HT) （跳到下一个TAB位置）	    |009
\v	|垂直制表(VT)	                     |011
\\	|代表一个反斜线字符"\"	               |092
\'	|代表一个单引号（撇号）字符	            |039
\"	|代表一个双引号字符	                   |034
\?	|代表一个问号	                      |063
\0	|数字0	                             |000
\ddd|	8进制转义字符，d范围0~7	           |3位8进制
\xhh|	16进制转义字符，h范围0~9，a~f，A~F  |3位16进制

![转义字符.png](4.数据类型与运算符/2.code/test1转义字符/转义字符.png)


[制作进度条1](01C基础/4.数据类型与运算符/2.code/test3进度条/test1sleep/test.c)&emsp;&emsp;[制作进度条2](01C基础/4.数据类型与运算符/2.code/test3进度条/test2#/test.c)&emsp;&emsp;[制作进度条——彩色](01C基础/4.数据类型与运算符/2.code/test3进度条/test3蓝色/pro_bar_color.c)&emsp;&emsp;[五彩进度条](01C基础/4.数据类型与运算符/2.code/test3进度条/test3蓝色/update/test.c)

#### 4)类型限定符
限定符	|含义
:-|:-
extern	    |声明一个变量，extern声明的变量没有建立存储空间。<br>extern int a;
const	    |定义一个常量，常量的值不能修改。<br>const int a = 10;
volatile	|防止编译器优化代码
register	|定义寄存器变量，提高效率。register是建议型的指令，而不是命令型的指令，如果CPU有空闲寄存器，那么register就生效，如果没有空闲寄存器，那么register无效。

#### 5)[printf格式字符：](01C基础/4.数据类型与运算符/2.code/test4printf格式化输出/test.c)
打印格式	|对应数据类型	|含义
:-|:-|:-
%d	|int			|接受整数值并将它表示为有符号的十进制整数
%hd	|short int		|短整数
%hu	|unsigned short 	|无符号短整数
%o	|unsigned int		|无符号8进制整数
%u	|unsigned int		|无符号10进制整数
%x,%X	|unsigned int		|无符号16进制整数，x对应的是abcdef，X对应的是ABCDEF
%f	|float			|单精度浮点数
%lf	|double			|双精度浮点数
%e,%E	|double			|科学计数法表示的数，此处"e"的大小写代表在输出时用的"e"的大小写
%c	|char			|字符型。可以把输入的数字按照ASCII码相应转换为对应的字符
%s	|char * 		|字符串。输出字符串中的字符直至字符串中的空字符（字符串以'\0‘结尾，这个'\0'即空字符）
%p	|void *			|以16进制形式输出指针
%%	|%			|输出一个百分号

printf附加格式：
字符			|含义
:-|:-
l(字母l)		|附加在d,u,x,o前面，表示长整:数
-			|左对齐
m(代表一个整数)		|数据最小宽度
0(数字0)		|将输出的前面补上0直到占满指定列宽为止不可以搭配使用-
m.n(代表一个整数)	|m指域宽，即对应的输出项在输出设备上所占的字符数。n指精度，用于说明输出的实型数的小数位数。对数值型的来说，未指定n时，隐含的精度为n=6位。

#### 6)类型转换
数据有不同的类型，不同类型数据之间进行混合运算时必然涉及到类型的转换问题。

转换的方法有两种：
- 自动转换(隐式转换)：遵循一定的规则,由编译系统自动完成。
> 类型转换的原则：占用内存字节数少(值域小)的类型，向占用内存字节数多(值域大)的类型转换，以保证精度不降低。

- 强制类型转换：把表达式的运算结果强制转换成所需的数据类型。


## 五、运算符和流程结构语句(条件、循环)
[在线视频](https://www.bilibili.com/video/BV1Cy4y1478r/)<br>
> [备份](https://www.bilibili.com/video/BV1wT4y1P7AC)

## 六、数组与字符串
[在线视频](https://www.bilibili.com/video/BV1wA411N7Hr/)<br>
> [备份](https://www.bilibili.com/video/BV1VV411b7mb)

## 七、字符串处理函数和函数
[在线视频](https://www.bilibili.com/video/BV16Z4y1w7aD/)<br>
> [备份](https://www.bilibili.com/video/BV1MV411b7Gf)

## 八、指针上
[在线视频](https://www.bilibili.com/video/BV1Cz4y117Ls/)<br>
> [备份](https://www.bilibili.com/video/BV1Rh411y7Rb)

## 九、指针下
[在线视频](https://www.bilibili.com/video/BV19N411Q76r/)<br>
> [备份](https://www.bilibili.com/video/BV1Zo4y1o7PQ)

## 十、内存管理
[在线视频](https://www.bilibili.com/video/BV1Fp4y1a7Xz/)<br>
> [备份](https://www.bilibili.com/video/BV1Xp4y1W7tB)

## 十一、复合类型
[在线视频](https://www.bilibili.com/video/BV1wy4y1h76h/)<br>
> [备份](https://www.bilibili.com/video/BV1tp4y1W76m)

## 十二、文件上
[在线视频](https://www.bilibili.com/video/BV1qb4y197t1/)<br>
> [备份](https://www.bilibili.com/video/BV1vf4y1k7sM)

## 十三、文件下
[在线视频](https://www.bilibili.com/video/BV1Xy4y1471L/)<br>
> [备份](https://www.bilibili.com/video/BV1Lv411s7X7)

## 十四、Qt介绍和IDE
[在线视频](https://www.bilibili.com/video/BV1x64y1D7Ug/)<br>
> [备份](https://www.bilibili.com/video/BV1Zr4y1N7Do)

## 十五、案例：快译通
[在线视频](https://www.bilibili.com/video/BV1Lb4y1Q7ZN/)<br>
> [备份](https://www.bilibili.com/video/BV1C5411E71k)









