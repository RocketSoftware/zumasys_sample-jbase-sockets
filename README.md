# Sample socket library for jBASE

This library gives an example on how to build both a socket server and client in jBASE. This example also demonstrates with jBASE threading how you can build fully threaded socket server allowing multiple requests against a single server.

## Usage

First compile both SIMPLE_CLIENT and SIMPLE_SERVER.  You must include the supplied JBC_SOCKS.h library as this file contains all the equates for error handling and the DEFC definitions for the internal jBASE socket libraries.

Once compiled run

```
jsh DEMOS ~ -->SIMPLE_SERVER -PORT=12345 -MODE=1
[000000]Server Startup [SIMPLE_SERVER -PORT=12345 -MODE=1]
[000000]Running as thread service
[000000]opening connections
[000000]Client connection received from [DESKTOP-KNKDC07]
[000000]Call listen [1]
[000844]Accept  12345   844     0       new connection from a client
[000844]Launch thread SIMPLE_SERVER -PORT=12345 -MODE=1 -CTX=1f8fc10 -CLIENT=844
[000844]Launch threadrc [0] handle [E02B0002000000000000000000000000]
```

Then open a new window and run the client

```
jsh DEMOS ~ -->SIMPLE_CLIENT -PORT=12345
Sample client 1.0
'close' to close the client connection.
'stop' kill server and client.
'help' for server commands
> help
*-
        sample socket server 1.0

        help   : this page
        mode   : show server mode
        status : show active threads
        who    : run jwho on server
        diag   : run jdiag on server
        where  : run where on server
        vwhere  : run where (V on server
        close  : Close client session, but keep server running.
        stop   : Stop server and close client

*-
> who
*-
        6 patrickp
```
