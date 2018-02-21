
*******creating socket connections**********

socket

we need to create socket first using socket() which contains three parameters 

family-type of address IPv4,IPv6
type-tcp,udp
protocol-tcp,udp

syntax
socket(AF_INET,SOCK_STREAM,0)

********Binding socket data******************

bind

Attache a local address to to socket using bind function

syntax
bind(socketid,&addr_port,size)

*******Listening socket side data************

listen

it is used for listening client side conections
syntax
listen(socketid,queue_limit)

*******Acepting socket side data*************

accept

It is allowed client to send or receive data.
syntax
accept(socketid,recvBuff,bufflen,flags)

*******Sending and receiving data************

send
for sending data
syntax
send(socketid,msg,msglenflags)

receive
It is used for receiving data
syntax
recv(socketid,recvbuf,bufflen,flags)

*******Connecting client with server***********
connect
It is used for connecting client side data to server side.






