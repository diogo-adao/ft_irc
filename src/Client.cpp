#include "../inc/Client.hpp"

Client::Client() {}
Client::~Client() {}

void Client::set_clientfd(int fd) { this->fd = fd; }
int Client::get_clientfd() { return fd; }

void Client::append_buffer(std::string buff) { buffer += buff; }
std::string &Client::get_buffer() { return buffer; }


