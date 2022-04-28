# Level 01

## step 1 : extract level02.pcap from SnowCrash
```
$ scp -P 4242 level02@192.168.56.101:level02.pcap .
```

## step 2 : read the pcap file with wireshark
- install wireshark on a VM
*you can use sc-wireshark. password: okok123*
```
$ sudo add-apt-repository ppa:wireshark-dev/stable
$ sudo apt-get update
$ sudo apt-get install wireshark
$ sudo wireshark
```
- in wireshark: Analyze -> follow -> TCP stream -> show data as Hex Dump
nonpritable char = char 0x7f (del)

Password: ft_wandrNDRelL0L

## step 3 : get level03 password
```
$ su flag03
$ getflag
Check flag.Here is your token : kooda2puivaav1idi4f57q8iq
```
