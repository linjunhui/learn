#!/usr/bin/env python3

# 导入socket库
import socket

#创建一个socket IPV4协议
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

#建立socket web端口都是80
s.connect(('www.baidu.com', 80))


#发送数据，请求百度主页
s.send(b'GET / HTTP/1.1\r\nHost: www.baidu.com\r\nConnection: close\r\n\r\n')

#接收数据
buffer = []
while True:
	#每次最多接收1k字节
	d = s.recv(1024)
	if d:
		buffer.append(d)
	else:
		break
#b''表示一个空字节，join 是连接列表的函数，buffer字节串列表，将字符节列表buffer连接成新的字节串
#[b'ab',b'cd',b'ef']变成 b'abcdef'
data = b''.join(buffer)
#关闭socket请求
s.close()

#将收到的数据包，分割成HTTP头和网页
header, html = data.split(b'\r\n\r\n', 1)
#打印HTTP头，将字节串以utf-8解码并打印出来
print(header.decode('utf-8'))

#把接收的数据写入文件，创建baidu.html并打开为f，将html字节串写入
with open('baidu.html', 'wb') as f:
	f.write(html)

