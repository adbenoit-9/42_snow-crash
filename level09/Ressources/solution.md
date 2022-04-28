# Level 09

## step 1 : try things
```
$ ./level09 abcd
aceg
```
Conclusion : level09 code token
Create the decoder : decoder.c

## step 1 : extract token from SnowCrash
```
$ scp -P 4242 level09@192.168.56.101:token .
```

## step 2 : decode token
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
