# Level 00

## step 1 : find flag00's files
```
$ find / -user flag00 2> /dev/null
/usr/sbin/john
/rofs/usr/sbin/john
```

## step 2 : display file
```
$ cat /usr/sbin/john
cdiiddwpgswtgt
```

## step 3 : decode token
dcode.fr -> chiffre ROT
decode token : nottoohardhere

## step 4 : get level01 password
```
$ su flag00
$ getflag
Here is your token : x24ti5gi3x0ol2eh4esiuxias
```
