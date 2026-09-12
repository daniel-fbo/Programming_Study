import socket

sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_address = ('177.40.135.81', 65432)
print(f"Conectando ao servidor {server_address[0]} no port {server_address[1]}")

try:
    sock.connect(server_address)
    message = "Ola Mundo\n"
    sock.sendall(message.encode()) 

finally:
    print("Owari da\n (It's over)\nDEUCERTOJOAO")
    sock.close()
    
