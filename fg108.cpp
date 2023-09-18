#include <iostream>
#include <libtelnet.h>

int main() {
    telnet_t* telnet = telnet_init(TELNET_TTYPE_ANSI, nullptr, nullptr);
    const char* host = "docker_container_ip"; 
    const char* port = "23"; 

    
    int sock = telnet_connect(telnet, host, std::stoi(port));
    if (sock != TELNET_EOK) {
        std::cerr << "Error connecting to " << host << ":" << port << std::endl;
        return 1;
    }

    
    const char* telnet_command = "telnet_command_to_fetch_data"; 
    telnet_send(telnet, telnet_command, strlen(telnet_command));

    
    char buffer[4096];
    int len;
    do {
        len = telnet_recv(telnet, buffer, sizeof(buffer));
        if (len > 0) {
           
            std::cout.write(buffer, len);
        }
    } while (len > 0);

    
    telnet_free(telnet);
    return 0;
}
