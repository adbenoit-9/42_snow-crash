# Level 01

## step 1 : try things
```
$ cat /etc/passwd | grep flag01
flag01:42hDRfypTqqnw:3001:3001::/home/flag/flag01:/bin/bash
```

## step 2 : extract passwd from SnowCrash
```
$ scp -P 4242 level01@192.168.56.101:/etc/passwd .
```

## step 3 : crack the password with john
- install john:
```
$ sh install_john.sh
```

- run john
```
$ ../../john-1.9.0-jumbo-1/run/john passwd
$ ../../john-1.9.0-jumbo-1/run/john passwd --show
flag01:abcdefg:3001:3001::/home/flag/flag01:/bin/bash

1 password hash cracked, 0 left
```
password : abcdefg

## step 4 : get level02 password
```
$ su flag01
$ getflag
Here is your token : f2av5il02puano7naaf6adaaf
```
