#include <sys/socket.h>

int socket(int domain, int type, int protocol); //소켓 생성

int bind(int sockfd, struct sockaddr *myaddr, socklen_t addrlen); //bind 함수 호출을 통헤 소켓에 주소정보 할당

int listen(int sockfd, int backlog); // 소켓이 연결요청이 가능한상태를 만드는 것

int accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen); //연결요청에 대한 수락을 의미

