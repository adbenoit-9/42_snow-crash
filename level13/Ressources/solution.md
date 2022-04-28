# Level 13

## step 1 : analyze level13
```
$ strings level13
```
We understand that we must modify the UID during the execution of the program.

## step 2 : modify UID
*use gdb*
```
$ gdb level13
```

- display main code in asm
```
(gdb) disas main
   ...
   0x08048595 <+9>:     call   0x8048380 <getuid@plt>
   0x0804859a <+14>:    cmp    $0x1092,%eax
   ...
```

- modify eax
```
(gdb) b getuid
(gdb) run
(gdb) step
(gdb) print $eax
$1 = 2013
(gdb) set $eax=4242
(gdb) step
which has no line number information.
your token is 2A31L79asukciNyi8uppkEuSx
0xb7e454d3 in __libc_start_main ()
   from /lib/i386-linux-gnu/libc.so.6
```
