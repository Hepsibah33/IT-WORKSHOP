user@mhg:~$ cat> grepfile.txt
welcome to rgukt
rgukt is in basar village
nearby saraswathi temple
user@mhg:~$ grep "welcome" grepfile.txt
welcome to rgukt
user@mhg:~$ grep -h 'temple' grepfile.txt
nearby saraswathi temple
user@mhg:~$ grep -h "unix" grepfile.txt
user@mhg:~$ grep -h 'unix' grepfile.txt
user@mhg:~$ grep -n "to" grepfile.txt
1:welcome to rgukt
user@mhg:~$ grep -l
Usage: grep [OPTION]... PATTERNS [FILE]...
Try 'grep --help' for more information.
user@mhg:~$ grep -v "temple" grefile.txt
grep: grefile.txt: No such file or directory
user@mhg:~$ grep -o "unix" grepfile.txt
user@mhg:~$ grep -o "unix" grepfile.txt
unix
user@mhg:~$ grep -o "unix" grepfile.txt
unix
user@mhg:~$ grep -v "unix" grepfile.txt
welcome to rgukt
rgukt is in basar village
nearby saraswathi temple
user@mhg:~$ cat> month.txt
August
September
November
December
July
March
May
June
user@mhg:~$ sort -m month.txt
August
September
November
December
July
March
May
June
user@mhg:~$ sort -M month.txt
March
May
June
July
August
September
November
December
user@mhg:~$ sort -n number.txt
sort: cannot read: number.txt: No such file or directory
user@mhg:~$ cat> number.txt
8
9
3
5
6
7
2
1
4
user@mhg:~$ sort -n number.txt
1
2
3
4
5
6
7
8
9
user@mhg:~$ sort -r number.txt
9
8
7
6
5
4
3
2
1
user@mhg:~$ sort grepfile.txt -o month.txt
user@mhg:~$ cat> sed.txt
August 
september
November
December
July
june
may

user@mhg:~$ sed 's/August/AUGUST/'sed.txt
sed: -e expression #1, char 17: unknown option to `s'
user@mhg:~$ sed '/best/'sed.txt
sed: -e expression #1, char 13: unterminated `s' command
user@mhg:~$ sed '2d' sed.txt  // 2d it deletes 2nd line and print remainig//
August 
November
December
July
june
may
This is one of the software 
UNIX and Linux
commands are used in linux

user@mhg:~$ sed 's/August/AUGUST/' sed.txt
AUGUST 
september
November
December
July
june
may
This is one of the software 
UNIX and Linux
commands are used in linux


user@mhg:~$ sed '2,3d' sed.txt // it deletes 2,3rd lines and print remaining//
August 
December
July
june
may
This is one of the software 
UNIX and Linux
commands are used in linux


user@mhg:~$ cat>awk.txt
vyshu salary id 2456
vivo window id 2349
ayesha storage id 3429
manasa linux id 92423
user@mhg:~$ awk '{print $2,$1}' awk.txt
salary vyshu
window vivo
storage ayesha
linux manasa
user@mhg:~$ awk '{print NR}' awk.txt
1
2
3
4
user@mhg:~$ awk '{print NR,$2}' awk.txt
1 salary
2 window
3 storage
4 linux
user@mhg:~$ awk '{print NR,$1,$2,$3,$4}' awk.txt
1 vyshu salary id 2456
2 vivo window id 2349
3 ayesha storage id 3429
4 manasa linux id 92423
user@mhg:~$ 

user@mhg:~$ free -m // used storage of user//
              total        used        free      shared  buff/cache   available
Mem:           7716        1202        5213         202        1300        6056
Swap:          2047           0        2047


user:- shutdown -r now //its shutdown the laptop immediately
user:-shutdown +5 //after 5 minutes//
shutdown -p // power off/
shutdown -h //half // power off system not working
shutdown 15:00 // at particular time //
shutdown -r +5 

man shutdown //-------//


user@mhg:~$ ls -lrt
total 164
drwxr-xr-x 2 user user  4096 Mar 16  2022  Templates
drwxr-xr-x 2 user user  4096 Mar 16  2022  Public
drwx------ 3 user user  4096 Jan  4  2023  snap
-rw-rw-r-- 1 user user  6390 Jan 11  2023 'butterfly WP.jpg'
-rw-rw-r-- 1 user user   372 Mar 14  2023  Max_Min_Avg.c
-rw-rw-r-- 1 user user   869 Mar 21  2023  Hello.c
-rwxrwxr-x 1 user user 16800 Apr 18  2023  a.out
-rw-rw-r-- 1 user user   105 Sep 23  2023  circularLL.c
-rw-rw-r-- 1 user user  4310 Sep 23  2023  dcll.c
-rw-rw-r-- 1 user user 36493 Sep 25  2023  codes.c
-rw-rw-r-- 1 user user   838 Feb 12 16:52  Hello.java
-rw-rw-r-- 1 user user   415 Feb 12 16:52  Hello.class
drwxr-xr-x 2 user user  4096 Mar  9 17:48  Videos
drwxr-xr-x 3 user user  4096 Mar  9 18:08  Pictures
drwxr-xr-x 2 user user  4096 Mar 13 22:35  Music
drwxr-xr-x 2 user user  4096 Mar 15 17:48  Documents
-rw-rw-r-- 1 user user   353 Mar 18 12:37  Index.html
drwxrwxr-x 6 user user  4096 Mar 18 16:38  programming
-rw-rw-r-- 1 user user   387 Mar 18 21:53  MyWebpage.html
drwxrwxr-x 5 user user  4096 Mar 20 14:23  programs
-rw-rw-r-- 1 user user     0 Mar 20 15:28  RGUKT
drwxr-xr-x 5 user user  4096 Mar 20 16:50  Desktop
drwxr-xr-x 5 user user  4096 Mar 27 14:35  Downloads
-rw-rw-r-- 1 user user    77 Mar 27 14:39  grepfile.txt
-rw-rw-r-- 1 user user    18 Mar 27 14:53  number.txt
-rw-rw-r-- 1 user user    77 Mar 27 14:56  month.txt
-rw-rw-r-- 1 user user   122 Mar 27 15:06  sed.txt
-rw-rw-r-- 1 user user    86 Mar 27 15:19  awk.txt
user@mhg:~$ chmod u+x number.txt
user@mhg:~$ ls -lrt
total 164
drwxr-xr-x 2 user user  4096 Mar 16  2022  Templates
drwxr-xr-x 2 user user  4096 Mar 16  2022  Public
drwx------ 3 user user  4096 Jan  4  2023  snap
-rw-rw-r-- 1 user user  6390 Jan 11  2023 'butterfly WP.jpg'
-rw-rw-r-- 1 user user   372 Mar 14  2023  Max_Min_Avg.c
-rw-rw-r-- 1 user user   869 Mar 21  2023  Hello.c
-rwxrwxr-x 1 user user 16800 Apr 18  2023  a.out
-rw-rw-r-- 1 user user   105 Sep 23  2023  circularLL.c
-rw-rw-r-- 1 user user  4310 Sep 23  2023  dcll.c
-rw-rw-r-- 1 user user 36493 Sep 25  2023  codes.c
-rw-rw-r-- 1 user user   838 Feb 12 16:52  Hello.java
-rw-rw-r-- 1 user user   415 Feb 12 16:52  Hello.class
drwxr-xr-x 2 user user  4096 Mar  9 17:48  Videos
drwxr-xr-x 3 user user  4096 Mar  9 18:08  Pictures
drwxr-xr-x 2 user user  4096 Mar 13 22:35  Music
drwxr-xr-x 2 user user  4096 Mar 15 17:48  Documents
-rw-rw-r-- 1 user user   353 Mar 18 12:37  Index.html
drwxrwxr-x 6 user user  4096 Mar 18 16:38  programming
-rw-rw-r-- 1 user user   387 Mar 18 21:53  MyWebpage.html
drwxrwxr-x 5 user user  4096 Mar 20 14:23  programs
-rw-rw-r-- 1 user user     0 Mar 20 15:28  RGUKT
drwxr-xr-x 5 user user  4096 Mar 20 16:50  Desktop
drwxr-xr-x 5 user user  4096 Mar 27 14:35  Downloads
-rw-rw-r-- 1 user user    77 Mar 27 14:39  grepfile.txt
-rwxrw-r-- 1 user user    18 Mar 27 14:53  number.txt  // 
-rw-rw-r-- 1 user user    77 Mar 27 14:56  month.txt
-rw-rw-r-- 1 user user   122 Mar 27 15:06  sed.txt
-rw-rw-r-- 1 user user    86 Mar 27 15:19  awk.txt
//
user@mhg:~$ 
user@mhg:~$ chmod go-w grepfile.txt
user@mhg:~$ ls -lrt
total 164
drwxr-xr-x 2 user user  4096 Mar 16  2022  Templates
drwxr-xr-x 2 user user  4096 Mar 16  2022  Public
drwx------ 3 user user  4096 Jan  4  2023  snap
-rw-rw-r-- 1 user user  6390 Jan 11  2023 'butterfly WP.jpg'
-rw-rw-r-- 1 user user   372 Mar 14  2023  Max_Min_Avg.c
-rw-rw-r-- 1 user user   869 Mar 21  2023  Hello.c
-rwxrwxr-x 1 user user 16800 Apr 18  2023  a.out
-rw-rw-r-- 1 user user   105 Sep 23  2023  circularLL.c
-rw-rw-r-- 1 user user  4310 Sep 23  2023  dcll.c
-rw-rw-r-- 1 user user 36493 Sep 25  2023  codes.c
-rw-rw-r-- 1 user user   838 Feb 12 16:52  Hello.java
-rw-rw-r-- 1 user user   415 Feb 12 16:52  Hello.class
drwxr-xr-x 2 user user  4096 Mar  9 17:48  Videos
drwxr-xr-x 3 user user  4096 Mar  9 18:08  Pictures
drwxr-xr-x 2 user user  4096 Mar 13 22:35  Music
drwxr-xr-x 2 user user  4096 Mar 15 17:48  Documents
-rw-rw-r-- 1 user user   353 Mar 18 12:37  Index.html
drwxrwxr-x 6 user user  4096 Mar 18 16:38  programming
-rw-rw-r-- 1 user user   387 Mar 18 21:53  MyWebpage.html
drwxrwxr-x 5 user user  4096 Mar 20 14:23  programs
-rw-rw-r-- 1 user user     0 Mar 20 15:28  RGUKT
drwxr-xr-x 5 user user  4096 Mar 20 16:50  Desktop
drwxr-xr-x 5 user user  4096 Mar 27 14:35  Downloads
-rw-r--r-- 1 user user    77 Mar 27 14:39  grepfile.txt
-rwxrw-r-- 1 user user    18 Mar 27 14:53  number.txt
-rw-rw-r-- 1 user user    77 Mar 27 14:56  month.txt
-rw-rw-r-- 1 user user   122 Mar 27 15:06  sed.txt
-rw-rw-r-- 1 user user    86 Mar 27 15:19  awk.txt

//
user@mhg:~$ chmod a=w month.txt
user@mhg:~$ ls -lrt
total 164
drwxr-xr-x 2 user user  4096 Mar 16  2022  Templates
drwxr-xr-x 2 user user  4096 Mar 16  2022  Public
drwx------ 3 user user  4096 Jan  4  2023  snap
-rw-rw-r-- 1 user user  6390 Jan 11  2023 'butterfly WP.jpg'
-rw-rw-r-- 1 user user   372 Mar 14  2023  Max_Min_Avg.c
-rw-rw-r-- 1 user user   869 Mar 21  2023  Hello.c
-rwxrwxr-x 1 user user 16800 Apr 18  2023  a.out
-rw-rw-r-- 1 user user   105 Sep 23  2023  circularLL.c
-rw-rw-r-- 1 user user  4310 Sep 23  2023  dcll.c
-rw-rw-r-- 1 user user 36493 Sep 25  2023  codes.c
-rw-rw-r-- 1 user user   838 Feb 12 16:52  Hello.java
-rw-rw-r-- 1 user user   415 Feb 12 16:52  Hello.class
drwxr-xr-x 2 user user  4096 Mar  9 17:48  Videos
drwxr-xr-x 3 user user  4096 Mar  9 18:08  Pictures
drwxr-xr-x 2 user user  4096 Mar 13 22:35  Music
drwxr-xr-x 2 user user  4096 Mar 15 17:48  Documents
-rw-rw-r-- 1 user user   353 Mar 18 12:37  Index.html
drwxrwxr-x 6 user user  4096 Mar 18 16:38  programming
-rw-rw-r-- 1 user user   387 Mar 18 21:53  MyWebpage.html
drwxrwxr-x 5 user user  4096 Mar 20 14:23  programs
-rw-rw-r-- 1 user user     0 Mar 20 15:28  RGUKT
drwxr-xr-x 5 user user  4096 Mar 20 16:50  Desktop
drwxr-xr-x 5 user user  4096 Mar 27 14:35  Downloads
-rw-r--r-- 1 user user    77 Mar 27 14:39  grepfile.txt
-rwxrw-r-- 1 user user    18 Mar 27 14:53  number.txt
--w--w--w- 1 user user    77 Mar 27 14:56  month.txt
-rw-rw-r-- 1 user user   122 Mar 27 15:06  sed.txt
-rw-rw-r-- 1 user user    86 Mar 27 15:19  awk.txt
user@mhg:~$ 

user@mhg:~$ ftp ftp.dlptest.com
Connected to ftp.dlptest.com.
220 Welcome to the DLP Test FTP Server
Name (ftp.dlptest.com:user): dlpuser
331 Please specify the password.
Password:
530 Login incorrect.
Login failed.
ftp> 
ftp> rNrKYTX9g7z3RgJRmxWuGHbeu
?Invalid command
ftp> 221 Goodbye.
user@mhg:~$ ^C
user@mhg:~$ ftp ftp.dlptest.com
Connected to ftp.dlptest.com.
220 Welcome to the DLP Test FTP Server
Name (ftp.dlptest.com:user): dlpuser
331 Please specify the password.
Password:
230 Login successful.
Remote system type is UNIX.
Using binary mode to transfer files.
ftp> exit
221 Goodbye.
user@mhg:~$ ftp ftp.dlptest.com
Connected to ftp.dlptest.com.
220 Welcome to the DLP Test FTP Server
Name (ftp.dlptest.com:user): dlpuser
331 Please specify the password.
Password:
230 Login successful.
Remote system type is UNIX.
Using binary mode to transfer files.
ftp> 221 Goodbye.
user@mhg:~$ ping www.goggle.com
ping: www.goggle.com: Name or service not known
user@mhg:~$ 

user@mhg:~$ ftp ftp.dlptest.com
Connected to ftp.dlptest.com.
220 Welcome to the DLP Test FTP Server
Name (ftp.dlptest.com:user): dlpuser
331 Please specify the password.
Password:
530 Login incorrect.
Login failed.
ftp> 
ftp> rNrKYTX9g7z3RgJRmxWuGHbeu
?Invalid command
ftp> 221 Goodbye.
user@mhg:~$ ^C
user@mhg:~$ ftp ftp.dlptest.com
Connected to ftp.dlptest.com.
220 Welcome to the DLP Test FTP Server
Name (ftp.dlptest.com:user): dlpuser
331 Please specify the password.
Password:
230 Login successful.
Remote system type is UNIX.
Using binary mode to transfer files.
ftp> exit
221 Goodbye.
user@mhg:~$ ftp ftp.dlptest.com
Connected to ftp.dlptest.com.
220 Welcome to the DLP Test FTP Server
Name (ftp.dlptest.com:user): dlpuser
331 Please specify the password.
Password:
230 Login successful.
Remote system type is UNIX.
Using binary mode to transfer files.
ftp> 221 Goodbye.
user@mhg:~$ ping www.goggle.com
ping: www.goggle.com: Name or service not known
user@mhg:~$ ssh hepsibah@tty.sdf.org
The authenticity of host 'tty.sdf.org (205.166.94.4)' can't be established.
ED25519 key fingerprint is SHA256:ZjwbO7AU8rHJExYrmZS2LqGZ7WfdoELfMrF54W92PYA.
Are you sure you want to continue connecting (yes/no/[fingerprint])? yes
Warning: Permanently added 'tty.sdf.org,205.166.94.4' (ED25519) to the list of known hosts.
hepsibah@tty.sdf.org's password: 
Connection closed by 205.166.94.4 port 22
user@mhg:~$ ssh hepsibah@tty.sdf.org
Warning: Permanently added the ED25519 host key for IP address '209.160.32.186' to the list of known hosts.
hepsibah@tty.sdf.org's password: 
Connection closed by 209.160.32.186 port 22
user@mhg:~$ ssh hepsibah@tty.sdf.org
hepsibah@tty.sdf.org's password: 
Connection to tty.sdf.org closed.
user@mhg:~$ ssh hepsibah@tty.sdf.org
Warning: Permanently added the ED25519 host key for IP address '205.166.94.9' to the list of known hosts.
hepsibah@tty.sdf.org's password: 
[ 'hepsibah' will expire in 665 days - Please 'validate' your account soon ]

Please press your BACKSPACE key: 

=======================================================================
SDF host uptime report for Seattle WA, Dallas TX (USA) and Germany (EU)
             Please use 'tty.sdf.org' for general access
=======================================================================

SERVER          DAYS+HOUR:MIN       USERS   MACHINE LOAD
----------------------------------------------------------------------
9p             up  22+16:00,   11 users,  load:   0.00,   0.00,   0.00
aNONradio      up  180+7:54,   34 users,  load:   0.17,   0.22,   0.24
faeroes        up  62+10:01,   87 users,  load:   1.21,   1.38,   1.31
iceland        up  62+13:23,   48 users,  load:   1.18,   1.43,   1.60
jitsi          up  32+17:10,  786 users,  load:  11.29,  11.76,  10.41
ma             up  55+10:13,    0 users,  load:   3.66,   4.13,   4.85
matrix         up  53+13:45, 1313 users,  load:   2.07,   2.08,   2.16
miku           up  62+13:21,    3 users,  load:   0.12,   0.06,   0.02
mx             up  62+10:23,  329 users,  load:   1.29,   1.67,   1.99
norge          up  62+09:58,   93 users,  load:   0.03,   0.01,   0.00
otaku          up  37+17:19,   41 users,  load:   0.09,   0.17,   0.16
pixelfed       up  182+2:51, 2059 users,  load:   0.40,   0.27,   0.26
rie            up  62+13:20,   63 users,  load:   1.19,   1.48,   1.53
ryo            up  62+13:02,   37  user,  load:   0.06,   0.14,   0.19
sdf            up  24+03:04,  118 users,  load:   2.58,   2.16,   2.26
sdfeu          up 628+07:24,   55 users,  load:   1.92,   1.81,   1.76
sverige        up  62+13:21,    8 users,  load:   0.11,   0.17,   0.23
unix50         up  180+7:53,   91 users,  load: 113.95, 114.09, 114.10
vps3           up 180+07:45,   49 users,  load:   1.00,   1.00,   1.28
vps9           up 181+18:12,   17 users,  load:   5.99,   5.92,   5.35
                             5242 total
(continue)
The Moon is Waning Gibbous (96% of Full)
                 .------------
             .--'  o     . .   `--
          .-'   .    O   .       . `-
       .-'@   @@@@@@@   .  @@@@@      `
      /@@@  @@@@@@@@@@@   @@@@@@@   .    
    ./    o @@@@@@@@@@@   @@@@@@@       . 
   /@@  o   @@@@@@@@@@@.   @@@@@@@   O     
  /@@@@   .   @@@@@@@o    @@@@@@@@@@     @@@
  |@@@@@               . @@@@@@@@@@@@@ o @@@
 /@@@@@  O  `.-./  .      @@@@@@@@@@@@    @@     Full Moon +    
 | @@@@    --`-'       o     @@@@@@@@ @@@@       2  4:18:21
 |@ @@@        `    o      .  @@   . @@@@@@@     Last Quarter - 
 |       @@  @         .-.     @@@   @@@@@@@     5 15:55:51
 \  . @        @@@     `-'   . @@@@   @@@@  o
  |      @@   @@@@@ .           @@   .      
  \     @@@@  @\@@    /  .  O    .     o   .
   \  o  @@     \ \  /         .    .      
    `\     .    .\.-.___   .      .   .-. 
      \           `-'                `-' 
       `-.   o   / |     o    O   .   .
          `-.   /     .       .    .-
             `--.       .      .--
                 `------------
(continue)
[12-Mar-24 23:55:30 lycanthropene       axonohydrolia                  outer space]
% Casino owners don't want you to know this one special trick…
 -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
[16-Mar-24 14:56:52    lohang              LohanG                    Sri Lanka]
% Happy weekend SDF :)
 -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
[17-Mar-24 00:29:41    neural              neural                        Italy]
% Saying hello from Italy! ;)
 -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
[17-Mar-24 01:59:32        tf                 Tom                  Connecticut]
% Ciao!
 -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
[18-Mar-24 03:26:29 rodiongork              Rodion                    st-Pete's]
% From Italy? L'Italiano vero? or guesting there? drop a message at bboard!
 -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
[19-Mar-24 20:56:14  amedrado       Adler Medrado            Sao Paulo, Brazil]
% Hello friends.
 -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
[20-Mar-24 07:10:17 burgertron               Grant                   Denton, TX]
% Checking in again, what's up gamers?
 -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
[20-Mar-24 14:05:53  somedude            somedude                Flin Flon, MB]
% Been playing cataclysmdda again. Having a blast.
 -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
[20-Mar-24 21:25:46     kosan               Kosan                      Germany]
% Wishing a happy Newroz to those who celebrate it! ^^
 -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
[22-Mar-24 05:36:16     sh0rk               sh0rk            GA, United States]
% hey guys, im new to doing unix and stuff but this is really cool and i like using it! how yall doing?
 -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
[22-Mar-24 11:31:20 rodiongork              Rodion                    St-Pete's]
% Hi Sh0rk, we are fine, thanks, don't miss "bboard" and feel free to tell more about how you come here :)
 -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
[22-mar-24 13:22:19     peron         Juan Perón             Puerta de Hierro]
% The PSU may get energized, but the real power grows out from the Ethernet port.
 -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
[22-Mar-24 17:13:26 naterator           naterator               Frisco, TX, US]
% Hi from Frisco! Thanks for being awesome, SDF!
 -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
[23-Mar-24 13:47:00  claudiom            ClaudioM           Homestead, FL, USA]
% WelCOM, sh0rk! Be sure to hop on COM as well and say hi in the aNONradio room! o/
 -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
[25-Mar-24 18:17:35 lycanthropene          weretomato                    NERV Alba]
% Everyone gets hugged and turns into Irn-Bru.
 -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
[26-Mar-24 08:52:49 tusharhero          tusharhero                             ]
% Hey guys, checkout my new blog https://tusharhero.codeberg.page/ Any feedback would be appreciated ^^
 -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
[26-Mar-24 12:02:30        tf                 Tom                      CT, USA]
% I like the minimalist style, tusharhero. Very nice!
7736 guestbook entries.

Type 'help' for Commands.
Type 'com' to chat with other users.
Type 'ttytter' to listen to Twitter Tweets anonymously.
Type 'mud' to play the SDFmud.
Type 'mkhomepg' to set up your personal website.

Did you know you can become a permanent LIFETIME member of SDF
by making a onetime donation of $36?  Type 'arpa' for more info!

faeroes:/sdf/udd/h/hepsibah> telnet towel  ^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?

To use this feature, please join the SDF 'arpa' membership
ARPA membership is available to you for a ONE TIME donation of only $36.

Your membership ensures our future!  Type 'arpa' for details.

faeroes:/sdf/udd/h/hepsibah> 
faeroes:/sdf/udd/h/hepsibah> 
faeroes:/sdf/udd/h/hepsibah> 
faeroes:/sdf/udd/h/hepsibah> 
faeroes:/sdf/udd/h/hepsibah> 
faeroes:/sdf/udd/h/hepsibah> 
faeroes:/sdf/udd/h/hepsibah> 
faeroes:/sdf/udd/h/hepsibah> 
faeroes:/sdf/udd/h/hepsibah> 
faeroes:/sdf/udd/h/hepsibah> 
faeroes:/sdf/udd/h/hepsibah> telnet  towel 






