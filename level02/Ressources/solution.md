# Level 01

## step 1 : extract level02.pcap from SnowCrash
```
$ scp -P 4242 level02@192.168.56.101:level02.pcap .
```

## step 2 : read the pcap file with wireshark
- install wireshark

- in wireshark: Analyze -> follow-tcp stream

Password: ft_wandrNDRelL0L
nonpritable char = char 0x7f (del)

## step 3 : get level03 password
```
$ su flag03
$ getflag
Here is your token : kooda2puivaav1idi4f57q8iq
```
