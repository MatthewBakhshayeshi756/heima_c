# Ubuntu设置SSH
### 一、Ubuntu 下安装 OpenSSH Server
```
apt-get install openssh-server
```

### 二、修改ssh默认端口
ssh-server配置文件位于 ```/etc/ssh/sshd_config```，在这里可以定义SSH的服务端口，默认端口是22，你可以自己定义成其他端口号，如222。然后重启SSH服务：
```
/etc/init.d/ssh restart
```

### 三、加快ssh登录时间
```bash
$> vi /etc/ssh/sshd_config

找到 GSSAPI options 这一节，将下面两行注释掉：
#GSSAPIAuthentication yes
#GSSAPIDelegateCredentials no
然后重新启动 ssh 服务即可：

$> /etc/init.d/ssh restart
```
### 四、Ubuntu安装g++
```
如果使用：  apt-get install g++ 提示错误
尝试使用  apt-get -f install 把欠缺的包安装完毕。 
再次重试：  apt-get install g++ 
```