
#include "tools.h"
#include "network.h"


//#pragma comment( lib, "ws2_32.lib" )
//#pragma comment( lib, "iphlpapi.lib" )


int main()
{
    init_network();

    char* pp = get_myipaddr(AF_INET6);

    pp = get_localip_bydest("www.google.co.jp", AF_INET6);
    print_message("pp = %s\n",pp);

    cleanup_network();
}

