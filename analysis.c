#include "analysis.h"

#include <pcap.h>
#include <netinet/if_ether.h> // struct for ethernet headers (link layer)
#include <netinet/ip.h> // struct for ip headers (internet layer)
#include <netinet/tcp.h> // struct for tcp headers (Transport layer)


/*
Analyse packets and idnentify malicious packets 
*/
void analyse(struct pcap_pkthdr *header,
             const unsigned char *packet,
             int verbose) {

  //SYN attack 


  printf("analysis.c is runningn now trolololol\n");

  printf("packet total length %d\n", header->len); // gets the length of the packet



printf(" --- SYN packets detected from --- different IPs (syn attack)"); 

struct iphdr *ip_header = (struct iphdr *) data; // make pointer to start of IP header


// count total number of SYN packets sniffed

// count number of SYN packets 



//dynamically growing array storing source IP addresses of incoming SYN packets 
// int size;
// int *A;
// A = (int*) malloc(size * sizeof(int));

// int i;

// for(i=0; i<size; i++){
//   &A[i];
// }

}
