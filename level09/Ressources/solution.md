# Level 09

## step 1 : try things
```
$ ./level09 abcd
aceg
```
Conclusion : level09 encrypted token\
Create the decrypter : decoder.c

## step 1 : extract token from SnowCrash
```
$ scp -P 4242 level09@192.168.56.101:token .
```

## step 2 : decrypt token
```
$ chmod 777 token
$ cat token
f4kmm6p|=�p�n��DB�Du{��
$ gcc level09/Ressources/decode.c; ./a.out `cat token`
f3iji1ju5yuevaus41q1afiuq
```

## step 3 : get level10 password
```
$ su flag09
$ getflag
Check flag.Here is your token : s5cAJpM8ev6XHw998pRWG728z
```
