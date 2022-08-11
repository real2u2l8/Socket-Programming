#include <sys/socket.h>
/* 소켓 생성에 관한 함수들 */
int socket(int domain, int type, int protocol); //소켓 생성

int bind(int sockfd, struct sockaddr *myaddr, socklen_t addrlen); //bind 함수 호출을 통헤 소켓에 주소정보 할당

int listen(int sockfd, int backlog); // 소켓이 연결요청이 가능한상태를 만드는 것

int accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen); //연결요청에 대한 수락을 의미

/* 소켓 연결에 관한 함수들 */
int connect(int sockfd, struct sockaddr *serv_addr, socklen_t addrlen); //클라이언트 소켓을 호출하는 함수 - 연결 요청의 의미


/*
소켓 생성과정
1. 소켓 생성                    socket 함수호출
2. IP주소와 Port번호 할당        bind   함수호출
3. 연결요청 가능상태로 변경       listen 함수호출
4. 연결 요청에 대한 수락         accpet 함수호출

소켓 연결과정
1. 클라이언트에서 connect 함수를 호출하여 대상을 호출한다.

*/