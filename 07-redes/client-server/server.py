import socket
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_address = ('0.0.0.0', 65432)
print(f"Inicializando o server {server_address[0]} no port {server_address[1]}")
sock.bind(server_address)

sock.listen(1)
print("Esperando por conexao...")

while True:
    connection, client_address = sock.accept()
    try:
        print(f"Conexao vindo de {client_address}")

        while True:
            data = connection.recv(1024)
            if data:
                print(f"Dados recebidos: {data.decode()}") 
            else:
                print("Sem mais dados", client_address)
                break
    finally:
        connection.close()
        
        