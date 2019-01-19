    EQU JBASE_SOCKET_SUCCESS       TO   0
    EQU JBASE_SOCKET_ACCEPT        TO  -1         ;* cannot accept a connectin request
    EQU JBASE_SOCKET_ASSIGN        TO  -2         ;* cannot assign I/O channel
    EQU JBASE_SOCKET_BADCONTEXT    TO  -3         ;* invalid context number
    EQU JBASE_SOCKET_BADFD         TO  -4         ;* invalid FTP descriptor
    EQU JBASE_SOCKET_BADPARAM      TO  -5         ;* bad parameter value
    EQU JBASE_SOCKET_BIND          TO  -6         ;* cannot bind a socket
    EQU JBASE_SOCKET_CONNECT       TO  -7         ;* cannot send a connection request
    EQU JBASE_SOCKET_CRESOCKET     TO  -8         ;* cannot create socket
    EQU JBASE_SOCKET_CVTIAHN       TO  -9         ;* error converting IP    TO -addr to hostname
    EQU JBASE_SOCKET_CVTIANN       TO -10         ;* error converting IP    TO -addr to IP    TO -text
    EQU JBASE_SOCKET_CVTHNIA       TO -11         ;* error converting hostname to IP    TO -addr
    EQU JBASE_SOCKET_CVTSNPV       TO -12         ;* error converting servicename to port    TO -num
    EQU JBASE_SOCKET_DELSOCKET     TO -13         ;* cannot deleting socket
    EQU JBASE_SOCKET_EFILTER       TO -14         ;* filter error     TO - cannot convert data
    EQU JBASE_SOCKET_EISCONN       TO -15         ;* connection request in progress
    EQU JBASE_SOCKET_EOC           TO -16         ;* end of context     TO - no more notries
    EQU JBASE_SOCKET_ESIZEFIL      TO -17         ;* length of the resultant string must not be changed
    EQU JBASE_SOCKET_FAILLOGIN     TO -18         ;* login failed
    EQU JBASE_SOCKET_FCLOSE        TO -19         ;* file close failure
    EQU JBASE_SOCKET_FCREATE       TO -20         ;* file create failure
    EQU JBASE_SOCKET_FDISCONNECT   TO -21         ;* file disconnect failure
    EQU JBASE_SOCKET_FGET          TO -22         ;* cannot get file
    EQU JBASE_SOCKET_FOPEN         TO -23         ;* file open failure
    EQU JBASE_SOCKET_FPARSE        TO -24         ;* file parse failure
    EQU JBASE_SOCKET_FPUT          TO -25         ;* file put failure
    EQU JBASE_SOCKET_FREAD         TO -26         ;* file read failure
    EQU JBASE_SOCKET_FSEARCH       TO -27         ;* file search failure
    EQU JBASE_SOCKET_FWRITE        TO -28         ;* file write failure
    EQU JBASE_SOCKET_GETLOCALADDR  TO -29         ;* cannot get local address information
    EQU JBASE_SOCKET_INSFARG       TO -30         ;* insufficient call arguments
    EQU JBASE_SOCKET_INVFILE       TO -31         ;* file specification error
    EQU JBASE_SOCKET_INVREPLYNO    TO -32         ;* invalid reply number
    EQU JBASE_SOCKET_INVREQCAL     TO -33         ;* invalid request call
    EQU JBASE_SOCKET_LINKLOCKED    TO -34         ;* link currently locked
    EQU JBASE_SOCKET_LINKTIMEOUT   TO -35         ;* connection timeout
    EQU JBASE_SOCKET_LISTEN        TO -36         ;* cannot define a socket as listener
    EQU JBASE_SOCKET_MAXFD         TO -37         ;* too many open FTP descriptor
    EQU JBASE_SOCKET_MAXLSCONTEXT  TO -38         ;* too many open ls context
    EQU JBASE_SOCKET_NOCLOSEFIL    TO -39         ;* cannot close filter
    EQU JBASE_SOCKET_NOENTRY       TO -40         ;* no entry
    EQU JBASE_SOCKET_NOMOREDATA    TO -41         ;* no more data
    EQU JBASE_SOCKET_NOOPENFIL     TO -42         ;* cannot open filter file
    EQU JBASE_SOCKET_NOPASSWD      TO -43         ;* no password
    EQU JBASE_SOCKET_NOREPLY       TO -44         ;* no reply message
    EQU JBASE_SOCKET_NOSETFIL      TO -45         ;* cannot set filter
    EQU JBASE_SOCKET_NOSPRTOPR     TO -46         ;* not    TO -supported operation
    EQU JBASE_SOCKET_NOTCONNECT    TO -47         ;* connection is not established
    EQU JBASE_SOCKET_NOTSTRDFILE   TO -48         ;* not a standard file
    EQU JBASE_SOCKET_OVRMAXARG     TO -49         ;* maximum parameter count exceeded
    EQU JBASE_SOCKET_READ          TO -50         ;* cannot read data from socket
    EQU JBASE_SOCKET_REMERROR      TO -51         ;* remote error
    EQU JBASE_SOCKET_SETKEEPALIVE  TO -52         ;* cannot set keepalive option
    EQU JBASE_SOCKET_SETREUSEADDR  TO -53         ;* cannot set reuseaddr option
    EQU JBASE_SOCKET_SIZEERR       TO -54         ;* VMS mode size error
    EQU JBASE_SOCKET_TERMINAL      TO -55         ;* device is terminal
    EQU JBASE_SOCKET_TOLNGPRM      TO -56         ;* too long parameter length
    EQU JBASE_SOCKET_TOLONG        TO -57         ;* record size too long
    EQU JBASE_SOCKET_UNSYMBOL      TO -58         ;* unknown symbol
    EQU JBASE_SOCKET_VMALLOC       TO -59         ;* virtual memory allocation error
    EQU JBASE_SOCKET_VMFREE        TO -60         ;* virtual memory free error
    EQU JBASE_SOCKET_WRITE         TO -61         ;* cannot write data to socket
    EQU JBASE_SOCKET_LINKNODATA    TO -62         ;* cannot receive message
    EQU JBASE_SOCKET_LINKDISCON    TO -63         ;* link was closed at the initiative of the peer
    EQU JBASE_SOCKET_UNKNOWNERR    TO -64         ;* unknown error status
    EQU JBASE_SOCKET_MUSTSENDPORT  TO -65         ;* must send port
    EQU JBASE_SOCKET_EPUTREPLY     TO -66         ;* cannot put reply massage
    EQU JBASE_SOCKET_FCONNECT      TO -67         ;* file connect failure
    EQU JBASE_SOCKET_BUGCHECK      TO -68         ;* internal consistency failure
    EQU JBASE_SOCKET_MBXREAD       TO -69         ;* cannot read mailbox (VMS olny)
    EQU JBASE_SOCKET_MBXWRITE      TO -70         ;* cannot write mailbox (VMS only)
    EQU JBASE_SOCKET_CREPRC        TO -71         ;* cannot create process (VMS only)
    EQU JBASE_SOCKET_CREMBX        TO -72         ;* cannot create mailbox (VMS only)
    EQU JBASE_SOCKET_GETDVI        TO -73         ;* cannot get device information (VMS only)
    EQU JBASE_SOCKET_GETTIM        TO -74         ;* cannot get time (VMS only)
    EQU JBASE_SOCKET_SUBPRCHANGUP  TO -75         ;* subprocess hangup (VMS only)
    EQU JBASE_SOCKET_SUBPRCTIMEOUT TO -76         ;* subprocess timeout (VMS only)
    EQU JBASE_SOCKET_INVPARM       TO -77         ;* invalid parameter value (VMS only)
*
    DEFC VAR SOCKOPEN(VAR, VAR, INT, INT, VAR)
    DEFC VAR SOCKCLOSE(VAR, VAR)
    DEFC VAR SOCKSEND(VAR, VAR, VAR)
    DEFC VAR SOCKRECV(VAR, VAR, VAR)
    DEFC VAR SOCKSERV(VAR, VAR, VAR)
    DEFC VAR SOCKACCEPT(VAR, VAR, VAR)
    DEFC VAR SOCKBIND(VAR, VAR, VAR, VAR)
    DEFC VAR GETSOCKBASE(VAR)
    DEFC VAR GETSERVERHANDLE(VAR, VAR)







