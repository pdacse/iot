import socket

import threading

import time

def scan_port(port):

    host="localhost"

    host_ip=socket.gethostbyname(host)

    status = False

    s= socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    try:

        s.connect((host_ip, port))

        status= True

    except:

        status= False

    if status:

        print("port {} is open".format(port))

start_time=time.time()

for i in range(0,100000):

    thread=threading.Thread(target=scan_port, args=[i])

    thread.start()

end_time=time.time()

print("To scan all the ports it took {} seconds".format(end_time-start_time))
