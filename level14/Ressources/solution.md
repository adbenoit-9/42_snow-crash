# Level 14

## step 1 : analyze getflag
```
$ gdb /bin/getflag
(gdb) disas main
   0x08048989 <+67>:    call   0x8048540 <ptrace@plt>
    ...
   0x08048afd <+439>:   call   0x80484b0 <getuid@plt>
```

## step 2 : get flag14 UID
```
$ cat /etc/passwd | grep flag14
flag14:x:3014:3014::/home/flag/flag14:/bin/bash
```

UID = 3014

## step 3 : change UID to get the flag
```
(gdb) run
Starting program: /bin/getflag 
You should not reverse this
[Inferior 1 (process 2095) exited with code 01]
```
1- deblock the debbuger
2- change UID

```
(gdb) b ptrace
(gdb) b getuid
(gdb) run
(gdb) print $eax
$4 = 0
(gdb) step
(gdb) print $eax
$5 = -1
(gdb) set $eax=1
(gdb) step
(gdb) print $eax
$6 = 32
(gdb) step
(gdb) print $eax
$7 = 2014
(gdb) set $eax=3014
(gdb) step
Single stepping until exit from function main,
which has no line number information.
Check flag.Here is your token : 7QiHafiNa3HVozsaXkawuYrTstxbpABHD8CPnHJ
0xb7e454d3 in __libc_start_main () from /lib/i386-linux-gnu/libc.so.6
```

## final step
```
$ su flag14
Password: 
Congratulation. Type getflag to get the key and send it to me the owner of this livecd :)
$ getflag
Check flag.Here is your token : 7QiHafiNa3HVozsaXkawuYrTstxbpABHD8CPnHJ
```