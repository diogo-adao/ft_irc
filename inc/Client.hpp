#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "../inc/Server.hpp"

class Client {
    private:
        int fd;
        std::string buffer;
    public:
        Client();
        ~Client();

        // Setters
        void set_clientfd(int fd);
        void append_buffer(std::string buff);

        // Getters
        int get_clientfd();
        std::string &get_buffer();
};

#endif