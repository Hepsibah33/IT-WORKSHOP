//#touch: Create a new file or update its timestamp.

touch file1 and file2
user@mhg:~$ touch file1 and file2

//#2) cat: Concatenate files and print to stdout.
user@mhg:~$ cat > file1
Hello 
Welcome to IT Workshop

//#3) cp: Copy files
user@mhg:~$ cp file1 file2

user@mhg:~$ touch f1

//#4) mv: Move files or rename files
user@mhg:~$ mv file1 f1

//#5) rm: Remove files and directories
user@mhg:~$ rm f1

//#6) mkdir: Make a directory
user@mhg:~$ mkdir dire
user@mhg:~$ cd

//#7) rmdir: Remove a directory
user@mhg:~$ rmdir dire
user@mhg:~$ mkdir dir
user@mhg:~$ cd dir
user@mhg:~/dir$ rmkdir dir

//#8) cd: Change directory
user@mhg:~/dir$ cd

//#9) pwd: Print the present working directory
user@mhg:~$ pwd 
/home/user

//#10) ls: List directory contents
//$ ls -alt
user@mhg:~$ ls -alt
total 344
drwxr-xr-x 29 user user  4096 Apr 10 20:21  .
drwxrwxr-x  2 user user  4096 Apr 10 20:21  dir
-rw-------  1 user user 39279 Apr 10 14:35  .bash_history
-rw-rw-r--  1 user user     7 Apr 10 14:29  file2
-rw-rw-r--  1 user user     0 Apr 10 14:26  and
drwx------  3 user user  4096 Apr 10 14:23  .gnupg
drwxr-xr-x  5 user user  4096 Apr 10 14:23  Downloads
drwxr-xr-x  5 user user  4096 Apr  9 23:05  Desktop
drwx------ 27 user user  4096 Apr  9 14:45  .config
drwxrwxr-x  6 user user  4096 Apr  4 12:10  programs
drwxr-xr-x  3 user user  4096 Apr  3 15:31  Pictures
drwxr-xr-x  3 user user  4096 Apr  3 15:30  .texlive2019
-rw-rw-r--  1 user user   304 Apr  1 14:36 'Untitled Document 1'
drwx------  2 user user  4096 Mar 27 16:30  .ssh
-rw-rw-r--  1 user user    86 Mar 27 15:19  awk.txt
-rw-rw-r--  1 user user   122 Mar 27 15:06  sed.txt
--w--w--w-  1 user user    77 Mar 27 14:56  month.txt
-rwxrw-r--  1 user user    18 Mar 27 14:53  number.txt
-rw-r--r--  1 user user    77 Mar 27 14:39  grepfile.txt
-rw-rw-r--  1 user user     0 Mar 20 15:28  RGUKT
-rw-rw-r--  1 user user   387 Mar 18 21:53  MyWebpage.html
drwxrwxr-x  6 user user  4096 Mar 18 16:38  programming
-rw-rw-r--  1 user user   353 Mar 18 12:37  Index.html
-rw-------  1 user user 51118 Mar 16 12:59  .mysql_history
drwxr-xr-x  2 user user  4096 Mar 15 17:48  Documents
drwxr-xr-x  2 user user  4096 Mar 13 22:35  Music
drwxr-xr-x  2 user user  4096 Mar  9 17:48  Videos
drwxrwxr-x  3 user user  4096 Feb 13 15:53  .java
-rw-rw-r--  1 user user   415 Feb 12 16:52  Hello.class
-rw-rw-r--  1 user user   838 Feb 12 16:52  Hello.java
drwxr-xr-x  4 root root  4096 Feb  9 10:17  ..
drwxrwxr-x  5 user user  4096 Jan 23 14:12  .audacity-data
drwx------ 25 user user  4096 Dec 11 21:10  .cache
-rw-rw-r--  1 user user 36493 Sep 25  2023  codes.c
-rw-rw-r--  1 user user  4310 Sep 23  2023  dcll.c
-rw-rw-r--  1 user user   105 Sep 23  2023  circularLL.c
drwxrwxr-x  2 user user  4096 Jul 31  2023  .gphoto
drwxrwxr-x  3 user user  4096 Jul 28  2023  .dotnet
drwxrwxr-x  4 user user  4096 Jul 28  2023  .vscode
drwx------  3 user user  4096 Jun 30  2023  .gnome
-rwxrwxr-x  1 user user 16800 Apr 18  2023  a.out
-rw-rw-r--  1 user user   869 Mar 21  2023  Hello.c
-rw-rw-r--  1 user user   372 Mar 14  2023  Max_Min_Avg.c
drwx------  6 user user  4096 Jan 11  2023  .thunderbird
-rw-------  1 user user    12 Jan 11  2023  .python_history
drwx------  3 user user  4096 Jan 11  2023  .pki
drwx------  3 user user  4096 Jan  4  2023  snap
drwx------  4 user user  4096 Mar 16  2022  .mozilla
-rw-r--r--  1 user user     0 Mar 16  2022  .sudo_as_admin_successful
drwxr-xr-x  2 user user  4096 Mar 16  2022  Public
drwxr-xr-x  2 user user  4096 Mar 16  2022  Templates
drwx------  3 user user  4096 Mar 16  2022  .local
-rw-r--r--  1 user user   220 Mar 16  2022  .bash_logout
-rw-r--r--  1 user user  3771 Mar 16  2022  .bashrc
-rw-r--r--  1 user user   807 Mar 16  2022  .profile

//$ls -l
user@mhg:~$ ls -l
total 168
-rw-rw-r-- 1 user user     0 Apr 10 14:26  and
-rwxrwxr-x 1 user user 16800 Apr 18  2023  a.out
-rw-rw-r-- 1 user user    86 Mar 27 15:19  awk.txt
-rw-rw-r-- 1 user user   105 Sep 23  2023  circularLL.c
-rw-rw-r-- 1 user user 36493 Sep 25  2023  codes.c
-rw-rw-r-- 1 user user  4310 Sep 23  2023  dcll.c
drwxr-xr-x 5 user user  4096 Apr  9 23:05  Desktop
drwxrwxr-x 2 user user  4096 Apr 10 20:21  dir
drwxr-xr-x 2 user user  4096 Mar 15 17:48  Documents
drwxr-xr-x 5 user user  4096 Apr 10 14:23  Downloads
-rw-rw-r-- 1 user user     7 Apr 10 14:29  file2
-rw-r--r-- 1 user user    77 Mar 27 14:39  grepfile.txt
-rw-rw-r-- 1 user user   869 Mar 21  2023  Hello.c
-rw-rw-r-- 1 user user   415 Feb 12 16:52  Hello.class
-rw-rw-r-- 1 user user   838 Feb 12 16:52  Hello.java
-rw-rw-r-- 1 user user   353 Mar 18 12:37  Index.html
-rw-rw-r-- 1 user user   372 Mar 14  2023  Max_Min_Avg.c
--w--w--w- 1 user user    77 Mar 27 14:56  month.txt
drwxr-xr-x 2 user user  4096 Mar 13 22:35  Music
-rw-rw-r-- 1 user user   387 Mar 18 21:53  MyWebpage.html
-rwxrw-r-- 1 user user    18 Mar 27 14:53  number.txt
drwxr-xr-x 3 user user  4096 Apr  3 15:31  Pictures
drwxrwxr-x 6 user user  4096 Mar 18 16:38  programming
drwxrwxr-x 6 user user  4096 Apr  4 12:10  programs
drwxr-xr-x 2 user user  4096 Mar 16  2022  Public
-rw-rw-r-- 1 user user     0 Mar 20 15:28  RGUKT
-rw-rw-r-- 1 user user   122 Mar 27 15:06  sed.txt
drwx------ 3 user user  4096 Jan  4  2023  snap
drwxr-xr-x 2 user user  4096 Mar 16  2022  Templates
-rw-rw-r-- 1 user user   304 Apr  1 14:36 'Untitled Document 1'
drwxr-xr-x 2 user user  4096 Mar  9 17:48  Videos

//$ls -ltr
user@mhg:~$ ls -ltr
total 168
drwxr-xr-x 2 user user  4096 Mar 16  2022  Templates
drwxr-xr-x 2 user user  4096 Mar 16  2022  Public
drwx------ 3 user user  4096 Jan  4  2023  snap
-rw-rw-r-- 1 user user   372 Mar 14  2023  Max_Min_Avg.c
-rw-rw-r-- 1 user user   869 Mar 21  2023  Hello.c
-rwxrwxr-x 1 user user 16800 Apr 18  2023  a.out
-rw-rw-r-- 1 user user   105 Sep 23  2023  circularLL.c
-rw-rw-r-- 1 user user  4310 Sep 23  2023  dcll.c
-rw-rw-r-- 1 user user 36493 Sep 25  2023  codes.c
-rw-rw-r-- 1 user user   838 Feb 12 16:52  Hello.java
-rw-rw-r-- 1 user user   415 Feb 12 16:52  Hello.class
drwxr-xr-x 2 user user  4096 Mar  9 17:48  Videos
drwxr-xr-x 2 user user  4096 Mar 13 22:35  Music
drwxr-xr-x 2 user user  4096 Mar 15 17:48  Documents
-rw-rw-r-- 1 user user   353 Mar 18 12:37  Index.html
drwxrwxr-x 6 user user  4096 Mar 18 16:38  programming
-rw-rw-r-- 1 user user   387 Mar 18 21:53  MyWebpage.html
-rw-rw-r-- 1 user user     0 Mar 20 15:28  RGUKT
-rw-r--r-- 1 user user    77 Mar 27 14:39  grepfile.txt
-rwxrw-r-- 1 user user    18 Mar 27 14:53  number.txt
--w--w--w- 1 user user    77 Mar 27 14:56  month.txt
-rw-rw-r-- 1 user user   122 Mar 27 15:06  sed.txt
-rw-rw-r-- 1 user user    86 Mar 27 15:19  awk.txt
-rw-rw-r-- 1 user user   304 Apr  1 14:36 'Untitled Document 1'
drwxr-xr-x 3 user user  4096 Apr  3 15:31  Pictures
drwxrwxr-x 6 user user  4096 Apr  4 12:10  programs
drwxr-xr-x 5 user user  4096 Apr  9 23:05  Desktop
drwxr-xr-x 5 user user  4096 Apr 10 14:23  Downloads
-rw-rw-r-- 1 user user     0 Apr 10 14:26  and
-rw-rw-r-- 1 user user     7 Apr 10 14:29  file2
drwxrwxr-x 2 user user  4096 Apr 10 20:21  dir

//$ls -a
user@mhg:~$ ls -a
 .                codes.c     .gphoto         Music             RGUKT
 ..               .config     grepfile.txt    .mysql_history    sed.txt
 and              dcll.c      Hello.c         MyWebpage.html    snap
 a.out            Desktop     Hello.class     number.txt        .ssh
 .audacity-data   dir         Hello.java      Pictures          .sudo_as_admin_successful
 awk.txt          Documents   Index.html      .pki              Templates
 .bash_history    .dotnet     .java           .profile          .texlive2019
 .bash_logout     Downloads   .local          programming       .thunderbird
 .bashrc          file2       Max_Min_Avg.c   programs         'Untitled Document 1'
 .cache           .gnome      month.txt       Public            Videos
 circularLL.c     .gnupg      .mozilla        .python_history   .vscode

//#11) which: Locate a command
user@mhg:~$ which -a cat
/usr/bin/cat
/bin/cat

//#12) man: Interface for working with the online reference manuals.
user@mhg:~$ man cat


//#16) du: Estimate disk usage is blocks
user@mhg:~$ du
72	./.pki/nssdb
76	./.pki
29920	./Documents
4	./.gnupg/private-keys-v1.d
16	./.gnupg
124	./.dotnet/corefx/cryptography/crls
128	./.dotnet/corefx/cryptography
132	./.dotnet/corefx
136	./.dotnet
4	./snap/snap-store/959/.config/gtk-2.0
8	./snap/snap-store/959/.config/autostart
4	./snap/snap-store/959/.config/ibus
8	./snap/snap-store/959/.config/fontconfig
4	./snap/snap-store/959/.config/gtk-3.0
4	./snap/snap-store/959/.config/dconf
52	./snap/snap-store/959/.config
192	./snap/snap-store/959/.local/share/glib-2.0/schemas
196	./snap/snap-store/959/.local/share/glib-2.0
44	./snap/snap-store/959/.local/share/icons/Humanity-Dark
324	./snap/snap-store/959/.local/share/icons/Humanity
8	./snap/snap-store/959/.local/share/icons/LoginIcons
8	./snap/snap-store/959/.local/share/icons/hicolor
84	./snap/snap-store/959/.local/share/icons/ubuntu-mono-dark
92	./snap/snap-store/959/.local/share/icons/ubuntu-mono-light
60	./snap/snap-store/959/.local/share/icons/Adwaita
624	./snap/snap-store/959/.local/share/icons
824	./snap/snap-store/959/.local/share
828	./snap/snap-store/959/.local
888	./snap/snap-store/959
4	./snap/snap-store/1113/.config/gtk-2.0
8	./snap/snap-store/1113/.config/autostart
4	./snap/snap-store/1113/.config/ibus
8	./snap/snap-store/1113/.config/fontconfig
4	./snap/snap-store/1113/.config/gtk-3.0
4	./snap/snap-store/1113/.config/dconf
52	./snap/snap-store/1113/.config
200	./snap/snap-store/1113/.local/share/glib-2.0/schemas
204	./snap/snap-store/1113/.local/share/glib-2.0
4	./snap/snap-store/1113/.local/share/icons
212	./snap/snap-store/1113/.local/share
216	./snap/snap-store/1113/.local
276	./snap/snap-store/1113
28	./snap/snap-store/common/.cache/gio-modules
4	./snap/snap-store/common/.cache/appstream
260	./snap/snap-store/common/.cache/fontconfig
336	./snap/snap-store/common/.cache/gnome-software/cssresource
4828	./snap/snap-store/common/.cache/gnome-software/appstream
8	./snap/snap-store/common/.cache/gnome-software/fwupd/remotes.d/lvfs
12	./snap/snap-store/common/.cache/gnome-software/fwupd/remotes.d
16	./snap/snap-store/common/.cache/gnome-software/fwupd
1552	./snap/snap-store/common/.cache/gnome-software/odrs
1764	./snap/snap-store/common/.cache/gnome-software/icons
8500	./snap/snap-store/common/.cache/gnome-software
76	./snap/snap-store/common/.cache/immodules
8876	./snap/snap-store/common/.cache
8880	./snap/snap-store/common
10048	./snap/snap-store
10052	./snap
608	./Pictures/Webcam
4216	./Pictures
4	./Templates
4	./.audacity-data/Plug-Ins
4	./.audacity-data/Macros
4	./.audacity-data/AutoSave
60	./.audacity-data
48	./.java/fonts/11.0.20.1
52	./.java/fonts
56	./.java
4	./dir
8	./.thunderbird/v6z1rb4w.default
4	./.thunderbird/Pending Pings
4	./.thunderbird/h4eru2px.default-release/crashes/events
12	./.thunderbird/h4eru2px.default-release/crashes
804	./.thunderbird/h4eru2px.default-release/calendar-data
4	./.thunderbird/h4eru2px.default-release/minidumps
4	./.thunderbird/h4eru2px.default-release/storage/permanent/chrome/idb/3870112724rsegmnoittet-es.files
144	./.thunderbird/h4eru2px.default-release/storage/permanent/chrome/idb
152	./.thunderbird/h4eru2px.default-release/storage/permanent/chrome
156	./.thunderbird/h4eru2px.default-release/storage/permanent
160	./.thunderbird/h4eru2px.default-release/storage
4	./.thunderbird/h4eru2px.default-release/security_state
12	./.thunderbird/h4eru2px.default-release/datareporting/archived/2023-06
16	./.thunderbird/h4eru2px.default-release/datareporting/archived
28	./.thunderbird/h4eru2px.default-release/datareporting
14724	./.thunderbird/h4eru2px.default-release
4	./.thunderbird/Crash Reports/events
12	./.thunderbird/Crash Reports
14760	./.thunderbird
879608	./Music
224	./programs/Data Base Management System
5980	./programs/web development/html
6008	./programs/web development
192	./programs/IT
56	./programs/DAA
6512	./programs
4	./.config/gnome-session/saved-session
8	./.config/gnome-session
100	./.config/vlc
12	./.config/gnome-games
4	./.config/libreoffice/4/user/uno_packages/cache/uno_packages
8	./.config/libreoffice/4/user/uno_packages/cache/registry/com.sun.star.comp.deployment.help.PackageRegistryBackend
4	./.config/libreoffice/4/user/uno_packages/cache/registry/com.sun.star.comp.deployment.script.PackageRegistryBackend
4	./.config/libreoffice/4/user/uno_packages/cache/registry/com.sun.star.comp.deployment.executable.PackageRegistryBackend
4	./.config/libreoffice/4/user/uno_packages/cache/registry/com.sun.star.comp.deployment.sfwk.PackageRegistryBackend
4	./.config/libreoffice/4/user/uno_packages/cache/registry/com.sun.star.comp.deployment.component.PackageRegistryBackend
4	./.config/libreoffice/4/user/uno_packages/cache/registry/com.sun.star.comp.deployment.bundle.PackageRegistryBackend
8	./.config/libreoffice/4/user/uno_packages/cache/registry/com.sun.star.comp.deployment.configuration.PackageRegistryBackend
40	./.config/libreoffice/4/user/uno_packages/cache/registry
48	./.config/libreoffice/4/user/uno_packages/cache
52	./.config/libreoffice/4/user/uno_packages
4	./.config/libreoffice/4/user/backup
4	./.config/libreoffice/4/user/psprint
8	./.config/libreoffice/4/user/autotext
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/schart/statusbar
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/schart/toolbar
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/schart/images/Bitmaps
8	./.config/libreoffice/4/user/config/soffice.cfg/modules/schart/images
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/schart/popupmenu
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/schart/menubar
28	./.config/libreoffice/4/user/config/soffice.cfg/modules/schart
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/swriter/statusbar
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/swriter/toolbar
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/swriter/images/Bitmaps
8	./.config/libreoffice/4/user/config/soffice.cfg/modules/swriter/images
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/swriter/popupmenu
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/swriter/menubar
28	./.config/libreoffice/4/user/config/soffice.cfg/modules/swriter
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/simpress/statusbar
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/simpress/toolbar
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/simpress/images/Bitmaps
8	./.config/libreoffice/4/user/config/soffice.cfg/modules/simpress/images
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/simpress/popupmenu
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/simpress/menubar
28	./.config/libreoffice/4/user/config/soffice.cfg/modules/simpress
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/StartModule/statusbar
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/StartModule/toolbar
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/StartModule/images/Bitmaps
8	./.config/libreoffice/4/user/config/soffice.cfg/modules/StartModule/images
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/StartModule/popupmenu
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/StartModule/menubar
28	./.config/libreoffice/4/user/config/soffice.cfg/modules/StartModule
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/scalc/statusbar
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/scalc/toolbar
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/scalc/images/Bitmaps
8	./.config/libreoffice/4/user/config/soffice.cfg/modules/scalc/images
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/scalc/popupmenu
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/scalc/menubar
28	./.config/libreoffice/4/user/config/soffice.cfg/modules/scalc
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/sdraw/statusbar
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/sdraw/toolbar
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/sdraw/images/Bitmaps
8	./.config/libreoffice/4/user/config/soffice.cfg/modules/sdraw/images
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/sdraw/popupmenu
4	./.config/libreoffice/4/user/config/soffice.cfg/modules/sdraw/menubar
28	./.config/libreoffice/4/user/config/soffice.cfg/modules/sdraw
172	./.config/libreoffice/4/user/config/soffice.cfg/modules
176	./.config/libreoffice/4/user/config/soffice.cfg
224	./.config/libreoffice/4/user/config
12	./.config/libreoffice/4/user/gallery
4	./.config/libreoffice/4/user/autocorr
8	./.config/libreoffice/4/user/extensions/bundled/registry/com.sun.star.comp.deployment.help.PackageRegistryBackend
4	./.config/libreoffice/4/user/extensions/bundled/registry/com.sun.star.comp.deployment.script.PackageRegistryBackend
4	./.config/libreoffice/4/user/extensions/bundled/registry/com.sun.star.comp.deployment.executable.PackageRegistryBackend
4	./.config/libreoffice/4/user/extensions/bundled/registry/com.sun.star.comp.deployment.sfwk.PackageRegistryBackend
4	./.config/libreoffice/4/user/extensions/bundled/registry/com.sun.star.comp.deployment.component.PackageRegistryBackend
4	./.config/libreoffice/4/user/extensions/bundled/registry/com.sun.star.comp.deployment.bundle.PackageRegistryBackend
8	./.config/libreoffice/4/user/extensions/bundled/registry/com.sun.star.comp.deployment.configuration.PackageRegistryBackend
40	./.config/libreoffice/4/user/extensions/bundled/registry
48	./.config/libreoffice/4/user/extensions/bundled
8	./.config/libreoffice/4/user/extensions/shared/registry/com.sun.star.comp.deployment.help.PackageRegistryBackend
4	./.config/libreoffice/4/user/extensions/shared/registry/com.sun.star.comp.deployment.script.PackageRegistryBackend
4	./.config/libreoffice/4/user/extensions/shared/registry/com.sun.star.comp.deployment.executable.PackageRegistryBackend
4	./.config/libreoffice/4/user/extensions/shared/registry/com.sun.star.comp.deployment.sfwk.PackageRegistryBackend
4	./.config/libreoffice/4/user/extensions/shared/registry/com.sun.star.comp.deployment.component.PackageRegistryBackend
4	./.config/libreoffice/4/user/extensions/shared/registry/com.sun.star.comp.deployment.bundle.PackageRegistryBackend
8	./.config/libreoffice/4/user/extensions/shared/registry/com.sun.star.comp.deployment.configuration.PackageRegistryBackend
40	./.config/libreoffice/4/user/extensions/shared/registry
48	./.config/libreoffice/4/user/extensions/shared
4	./.config/libreoffice/4/user/extensions/tmp/extensions
8	./.config/libreoffice/4/user/extensions/tmp/registry/com.sun.star.comp.deployment.help.PackageRegistryBackend
4	./.config/libreoffice/4/user/extensions/tmp/registry/com.sun.star.comp.deployment.script.PackageRegistryBackend
4	./.config/libreoffice/4/user/extensions/tmp/registry/com.sun.star.comp.deployment.executable.PackageRegistryBackend
4	./.config/libreoffice/4/user/extensions/tmp/registry/com.sun.star.comp.deployment.sfwk.PackageRegistryBackend
4	./.config/libreoffice/4/user/extensions/tmp/registry/com.sun.star.comp.deployment.component.PackageRegistryBackend
4	./.config/libreoffice/4/user/extensions/tmp/registry/com.sun.star.comp.deployment.bundle.PackageRegistryBackend
8	./.config/libreoffice/4/user/extensions/tmp/registry/com.sun.star.comp.deployment.configuration.PackageRegistryBackend
40	./.config/libreoffice/4/user/extensions/tmp/registry
48	./.config/libreoffice/4/user/extensions/tmp
152	./.config/libreoffice/4/user/extensions
16	./.config/libreoffice/4/user/basic/Standard
28	./.config/libreoffice/4/user/basic
1016	./.config/libreoffice/4/user/database/biblio
1024	./.config/libreoffice/4/user/database
8	./.config/libreoffice/4/user/pack/autotext
16	./.config/libreoffice/4/user/pack/config
16	./.config/libreoffice/4/user/pack/basic/Standard
28	./.config/libreoffice/4/user/pack/basic
20	./.config/libreoffice/4/user/pack/database/biblio
28	./.config/libreoffice/4/user/pack/database
8	./.config/libreoffice/4/user/pack/wordbook
1208	./.config/libreoffice/4/user/pack
8	./.config/libreoffice/4/user/wordbook
3628	./.config/libreoffice/4/user
3632	./.config/libreoffice/4
3636	./.config/libreoffice
12	./.config/klavaro
104	./.config/pulse
8	./.config/totem
4	./.config/texstudio/templates/user
8	./.config/texstudio/templates
4	./.config/texstudio/completion/user
4	./.config/texstudio/completion/autogenerated
12	./.config/texstudio/completion
12	./.config/texstudio/cache
4	./.config/texstudio/macro
108	./.config/texstudio
4	./.config/procps
8	./.config/gedit
8	./.config/remmina
8	./.config/eog
4	./.config/enchant
12	./.config/ibus/bus
16	./.config/ibus
8	./.config/nautilus
8	./.config/menus/applications-merged
12	./.config/menus
8	./.config/google-chrome/ClientSidePhishing/30.2/_metadata
3420	./.config/google-chrome/ClientSidePhishing/30.2
3424	./.config/google-chrome/ClientSidePhishing
4100	./.config/google-chrome/BrowserMetrics
8	./.config/google-chrome/SSLErrorAssistant/7/_metadata
24	./.config/google-chrome/SSLErrorAssistant/7
28	./.config/google-chrome/SSLErrorAssistant
8	./.config/google-chrome/FileTypePolicies/63/_metadata
28	./.config/google-chrome/FileTypePolicies/63
32	./.config/google-chrome/FileTypePolicies
28	./.config/google-chrome/AutofillStates/2020.11.2.164946/_metadata
976	./.config/google-chrome/AutofillStates/2020.11.2.164946
980	./.config/google-chrome/AutofillStates
8	./.config/google-chrome/FirstPartySetsPreloaded/2024.3.27.0/_metadata
32	./.config/google-chrome/FirstPartySetsPreloaded/2024.3.27.0
36	./.config/google-chrome/FirstPartySetsPreloaded
17208	./.config/google-chrome/WidevineCdm/4.10.2710.0/_platform_specific/linux_x64
17212	./.config/google-chrome/WidevineCdm/4.10.2710.0/_platform_specific
8	./.config/google-chrome/WidevineCdm/4.10.2710.0/_metadata
17236	./.config/google-chrome/WidevineCdm/4.10.2710.0
17244	./.config/google-chrome/WidevineCdm
8	./.config/google-chrome/PKIMetadata/911/_metadata
224	./.config/google-chrome/PKIMetadata/911
8	./.config/google-chrome/PKIMetadata/921/_metadata
224	./.config/google-chrome/PKIMetadata/921
452	./.config/google-chrome/PKIMetadata
48	./.config/google-chrome/Default/WebStorage
4	./.config/google-chrome/Default/Search Logos
16	./.config/google-chrome/Default/Site Characteristics Database/lost
100	./.config/google-chrome/Default/Site Characteristics Database
4	./.config/google-chrome/Default/PersistentOriginTrials
24	./.config/google-chrome/Default/Local Extension Settings/ghbmnnjooekpmoecnnnilnnbdlolhkhi
28	./.config/google-chrome/Default/Local Extension Settings
608	./.config/google-chrome/Default/Sync Data/LevelDB
616	./.config/google-chrome/Default/Sync Data
4	./.config/google-chrome/Default/optimization_guide_hint_cache_store
24	./.config/google-chrome/Default/Extension Scripts
4	./.config/google-chrome/Default/Feature Engagement Tracker/AvailabilityDB
4	./.config/google-chrome/Default/Feature Engagement Tracker/EventDB
12	./.config/google-chrome/Default/Feature Engagement Tracker
16	./.config/google-chrome/Default/Storage/ext/nmmhkkegccagdldgiimedpiccmgmieda/def/Local Storage/leveldb
20	./.config/google-chrome/Default/Storage/ext/nmmhkkegccagdldgiimedpiccmgmieda/def/Local Storage
20	./.config/google-chrome/Default/Storage/ext/nmmhkkegccagdldgiimedpiccmgmieda/def/Session Storage
300	./.config/google-chrome/Default/Storage/ext/nmmhkkegccagdldgiimedpiccmgmieda/def/GPUCache
300	./.config/google-chrome/Default/Storage/ext/nmmhkkegccagdldgiimedpiccmgmieda/def/DawnCache
648	./.config/google-chrome/Default/Storage/ext/nmmhkkegccagdldgiimedpiccmgmieda/def
652	./.config/google-chrome/Default/Storage/ext/nmmhkkegccagdldgiimedpiccmgmieda
656	./.config/google-chrome/Default/Storage/ext
660	./.config/google-chrome/Default/Storage
4	./.config/google-chrome/Default/AutofillStrikeDatabase
4	./.config/google-chrome/Default/BudgetDatabase
480	./.config/google-chrome/Default/Local Storage/leveldb
484	./.config/google-chrome/Default/Local Storage
4	./.config/google-chrome/Default/blob_storage/47909d6d-0c73-439b-a33e-5d3bd554c35a
8	./.config/google-chrome/Default/blob_storage
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/kk
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/sk
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/id
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/te
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/en_US
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/sr
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/sl
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/my
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/eu
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/ru
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/si
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/pl
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/de
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/gl
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/fr_CA
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/ko
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/en_CA
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/en
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/fil
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/ms
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/it
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/tr
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/kn
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/ml
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/bn
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/cy
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/am
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/ta
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/uk
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/pa
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/zh_HK
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/cs
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/no
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/vi
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/sv
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/hy
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/es_419
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/mn
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/mr
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/iw
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/sw
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/en_GB
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/bg
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/is
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/lo
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/af
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/gu
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/km
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/es
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/th
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/fr
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/ca
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/ne
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/nl
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/el
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/pt_PT
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/da
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/hi
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/zh_CN
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/ja
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/ro
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/hu
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/ka
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/zu
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/pt_BR
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/et
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/hr
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/be
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/fi
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/az
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/lv
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/lt
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/ar
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/zh_TW
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/ur
8	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales/fa
612	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_locales
28	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0/_metadata
752	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi/1.75.4_0
756	./.config/google-chrome/Default/Extensions/ghbmnnjooekpmoecnnnilnnbdlolhkhi
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/sk
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/id
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/sr
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/sl
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/ru
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/pl
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/de
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/ko
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/en
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/fil
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/it
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/tr
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/uk
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/cs
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/vi
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/sv
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/es_419
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/en_GB
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/bg
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/es
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/th
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/fr
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/ca
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/nb
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/nl
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/el
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/pt_PT
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/da
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/hi
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/zh_CN
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/ja
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/ro
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/hu
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/pt_BR
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/et
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/hr
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/fi
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/lv
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/lt
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales/zh_TW
324	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_locales
108	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/images
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/css
8	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/html
24	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0/_metadata
1268	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda/1.0.0.6_0
1272	./.config/google-chrome/Default/Extensions/nmmhkkegccagdldgiimedpiccmgmieda
2032	./.config/google-chrome/Default/Extensions
24	./.config/google-chrome/Default/Extension Rules
4	./.config/google-chrome/Default/Segmentation Platform/SignalDB
4	./.config/google-chrome/Default/Segmentation Platform/SignalStorageConfigDB
4	./.config/google-chrome/Default/Segmentation Platform/SegmentInfoDB
16	./.config/google-chrome/Default/Segmentation Platform
20	./.config/google-chrome/Default/IndexedDB/https_googleads.g.doubleclick.net_0.indexeddb.leveldb
24	./.config/google-chrome/Default/IndexedDB/https_engage.wixapps.net_0.indexeddb.leveldb
1252	./.config/google-chrome/Default/IndexedDB/https_web.telegram.org_0.indexeddb.blob/1/00
1256	./.config/google-chrome/Default/IndexedDB/https_web.telegram.org_0.indexeddb.blob/1
1260	./.config/google-chrome/Default/IndexedDB/https_web.telegram.org_0.indexeddb.blob
3160	./.config/google-chrome/Default/IndexedDB/https_resourceful-otter-36p2ay-dev-ed.trailblaze.lightning.force.com_0.indexeddb.leveldb
20	./.config/google-chrome/Default/IndexedDB/https_www.salesforce.com_0.indexeddb.leveldb
4	./.config/google-chrome/Default/IndexedDB/https_music.youtube.com_0.indexeddb.blob/2/00
8	./.config/google-chrome/Default/IndexedDB/https_music.youtube.com_0.indexeddb.blob/2
12	./.config/google-chrome/Default/IndexedDB/https_music.youtube.com_0.indexeddb.blob
1020	./.config/google-chrome/Default/IndexedDB/https_music.youtube.com_0.indexeddb.leveldb
1504	./.config/google-chrome/Default/IndexedDB/https_web.telegram.org_0.indexeddb.leveldb
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/70/00
8	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/70
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/19
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/10
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/13
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/05
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/0d
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/1a
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/0c
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/0b
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/01
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/0e
308	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/1f
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/04
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/11
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/00
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/15
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/16
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/06
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/17
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/1d
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/07
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/12
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/09
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/08
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/03
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/1e
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/0f
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/02
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/14
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/18
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/1b
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/0a
4	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e/1c
436	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob/6e
448	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.blob
20	./.config/google-chrome/Default/IndexedDB/https_ad.doubleclick.net_0.indexeddb.leveldb
20	./.config/google-chrome/Default/IndexedDB/https_resourceful-otter-36p2ay-dev-ed.trailblaze.my.salesforce.com_0.indexeddb.leveldb
197004	./.config/google-chrome/Default/IndexedDB/https_web.whatsapp.com_0.indexeddb.leveldb
88	./.config/google-chrome/Default/IndexedDB/https_districtsinfo.os.tc_0.indexeddb.leveldb
28	./.config/google-chrome/Default/IndexedDB/https_trailhead.salesforce.com_0.indexeddb.leveldb
28	./.config/google-chrome/Default/IndexedDB/https_www.tutorialspoint.com_0.indexeddb.leveldb
3220	./.config/google-chrome/Default/IndexedDB/https_resilient-unicorn-m1x9gw-dev-ed.trailblaze.lightning.force.com_0.indexeddb.leveldb
4	./.config/google-chrome/Default/IndexedDB/https_www.youtube.com_0.indexeddb.blob/12/00
8	./.config/google-chrome/Default/IndexedDB/https_www.youtube.com_0.indexeddb.blob/12
12	./.config/google-chrome/Default/IndexedDB/https_www.youtube.com_0.indexeddb.blob
316	./.config/google-chrome/Default/IndexedDB/https_resilient-unicorn-m1x9gw-dev-ed.trailblaze.lightning.force.com_0.indexeddb.blob/2/01
4	./.config/google-chrome/Default/IndexedDB/https_resilient-unicorn-m1x9gw-dev-ed.trailblaze.lightning.force.com_0.indexeddb.blob/2/00
324	./.config/google-chrome/Default/IndexedDB/https_resilient-unicorn-m1x9gw-dev-ed.trailblaze.lightning.force.com_0.indexeddb.blob/2
328	./.config/google-chrome/Default/IndexedDB/https_resilient-unicorn-m1x9gw-dev-ed.trailblaze.lightning.force.com_0.indexeddb.blob
20	./.config/google-chrome/Default/IndexedDB/https_40ea027a0b6b28691bdb1295f745cf38.safeframe.googlesyndication.com_0.indexeddb.leveldb
1468	./.config/google-chrome/Default/IndexedDB/https_www.youtube.com_0.indexeddb.leveldb
4	./.config/google-chrome/Default/IndexedDB/https_resourceful-otter-36p2ay-dev-ed.trailblaze.lightning.force.com_0.indexeddb.blob/a/01
500	./.config/google-chrome/Default/IndexedDB/https_resourceful-otter-36p2ay-dev-ed.trailblaze.lightning.force.com_0.indexeddb.blob/a/04
4	./.config/google-chrome/Default/IndexedDB/https_resourceful-otter-36p2ay-dev-ed.trailblaze.lightning.force.com_0.indexeddb.blob/a/00
4	./.config/google-chrome/Default/IndexedDB/https_resourceful-otter-36p2ay-dev-ed.trailblaze.lightning.force.com_0.indexeddb.blob/a/03
4	./.config/google-chrome/Default/IndexedDB/https_resourceful-otter-36p2ay-dev-ed.trailblaze.lightning.force.com_0.indexeddb.blob/a/02
520	./.config/google-chrome/Default/IndexedDB/https_resourceful-otter-36p2ay-dev-ed.trailblaze.lightning.force.com_0.indexeddb.blob/a
96	./.config/google-chrome/Default/IndexedDB/https_resourceful-otter-36p2ay-dev-ed.trailblaze.lightning.force.com_0.indexeddb.blob/3/00
100	./.config/google-chrome/Default/IndexedDB/https_resourceful-otter-36p2ay-dev-ed.trailblaze.lightning.force.com_0.indexeddb.blob/3
624	./.config/google-chrome/Default/IndexedDB/https_resourceful-otter-36p2ay-dev-ed.trailblaze.lightning.force.com_0.indexeddb.blob
24	./.config/google-chrome/Default/IndexedDB/https_www.codechef.com_0.indexeddb.leveldb
210356	./.config/google-chrome/Default/IndexedDB
164	./.config/google-chrome/Default/Service Worker/Database
8	./.config/google-chrome/Default/Service Worker/ScriptCache/index-dir
11724	./.config/google-chrome/Default/Service Worker/ScriptCache
8	./.config/google-chrome/Default/Service Worker/CacheStorage/0bf6ab7f94a21cdc9c1649f884333ec20f40a544/b7be242b-0483-4b97-931f-557636513377/index-dir
32	./.config/google-chrome/Default/Service Worker/CacheStorage/0bf6ab7f94a21cdc9c1649f884333ec20f40a544/b7be242b-0483-4b97-931f-557636513377
8	./.config/google-chrome/Default/Service Worker/CacheStorage/0bf6ab7f94a21cdc9c1649f884333ec20f40a544/a02ed0a2-b039-4770-9463-826c7119940c/index-dir
3400	./.config/google-chrome/Default/Service Worker/CacheStorage/0bf6ab7f94a21cdc9c1649f884333ec20f40a544/a02ed0a2-b039-4770-9463-826c7119940c
8	./.config/google-chrome/Default/Service Worker/CacheStorage/0bf6ab7f94a21cdc9c1649f884333ec20f40a544/0ab26076-985b-45a7-9396-4d6f5ef0ee33/index-dir
16	./.config/google-chrome/Default/Service Worker/CacheStorage/0bf6ab7f94a21cdc9c1649f884333ec20f40a544/0ab26076-985b-45a7-9396-4d6f5ef0ee33
8	./.config/google-chrome/Default/Service Worker/CacheStorage/0bf6ab7f94a21cdc9c1649f884333ec20f40a544/ebea84fa-b0ec-4557-b5f5-206327348040/index-dir
24	./.config/google-chrome/Default/Service Worker/CacheStorage/0bf6ab7f94a21cdc9c1649f884333ec20f40a544/ebea84fa-b0ec-4557-b5f5-206327348040
8	./.config/google-chrome/Default/Service Worker/CacheStorage/0bf6ab7f94a21cdc9c1649f884333ec20f40a544/3a9c5fed-0354-47d0-a024-f43e5cb84fe9/index-dir
46772	./.config/google-chrome/Default/Service Worker/CacheStorage/0bf6ab7f94a21cdc9c1649f884333ec20f40a544/3a9c5fed-0354-47d0-a024-f43e5cb84fe9
8	./.config/google-chrome/Default/Service Worker/CacheStorage/0bf6ab7f94a21cdc9c1649f884333ec20f40a544/16bc386b-3a6d-441b-9747-2135f48c6f59/index-dir
292	./.config/google-chrome/Default/Service Worker/CacheStorage/0bf6ab7f94a21cdc9c1649f884333ec20f40a544/16bc386b-3a6d-441b-9747-2135f48c6f59
50544	./.config/google-chrome/Default/Service Worker/CacheStorage/0bf6ab7f94a21cdc9c1649f884333ec20f40a544
8	./.config/google-chrome/Default/Service Worker/CacheStorage/1e538fbb9a411578d5bec848a4a4b012e8b26441/5aa6993f-61e4-40e7-b273-cf26e4a43d0e/index-dir
13776	./.config/google-chrome/Default/Service Worker/CacheStorage/1e538fbb9a411578d5bec848a4a4b012e8b26441/5aa6993f-61e4-40e7-b273-cf26e4a43d0e
13784	./.config/google-chrome/Default/Service Worker/CacheStorage/1e538fbb9a411578d5bec848a4a4b012e8b26441
8	./.config/google-chrome/Default/Service Worker/CacheStorage/379f1cbab5b08b6fc9e08681e42d8be311441c88/901c404c-885a-47e2-a83d-1c8539278b3e/index-dir
33904	./.config/google-chrome/Default/Service Worker/CacheStorage/379f1cbab5b08b6fc9e08681e42d8be311441c88/901c404c-885a-47e2-a83d-1c8539278b3e
8	./.config/google-chrome/Default/Service Worker/CacheStorage/379f1cbab5b08b6fc9e08681e42d8be311441c88/23024858-c1ce-4b7c-98ce-0b6dd38db4eb/index-dir
16	./.config/google-chrome/Default/Service Worker/CacheStorage/379f1cbab5b08b6fc9e08681e42d8be311441c88/23024858-c1ce-4b7c-98ce-0b6dd38db4eb
8	./.config/google-chrome/Default/Service Worker/CacheStorage/379f1cbab5b08b6fc9e08681e42d8be311441c88/1fce3535-2dd7-4191-bf64-21a6c88eb46c/index-dir
596	./.config/google-chrome/Default/Service Worker/CacheStorage/379f1cbab5b08b6fc9e08681e42d8be311441c88/1fce3535-2dd7-4191-bf64-21a6c88eb46c
34524	./.config/google-chrome/Default/Service Worker/CacheStorage/379f1cbab5b08b6fc9e08681e42d8be311441c88
8	./.config/google-chrome/Default/Service Worker/CacheStorage/ba00623a413aef1be0c65618db85f0b8176e803d/16074e00-0d20-4380-a4b8-8a63efb71202/index-dir
11340	./.config/google-chrome/Default/Service Worker/CacheStorage/ba00623a413aef1be0c65618db85f0b8176e803d/16074e00-0d20-4380-a4b8-8a63efb71202
24	./.config/google-chrome/Default/Service Worker/CacheStorage/ba00623a413aef1be0c65618db85f0b8176e803d/70ac1af6-c360-432e-985b-b60c63adab52/index-dir
8044	./.config/google-chrome/Default/Service Worker/CacheStorage/ba00623a413aef1be0c65618db85f0b8176e803d/70ac1af6-c360-432e-985b-b60c63adab52
8	./.config/google-chrome/Default/Service Worker/CacheStorage/ba00623a413aef1be0c65618db85f0b8176e803d/5bbced56-4f28-4a35-86bd-5fcb62e1100c/index-dir
16	./.config/google-chrome/Default/Service Worker/CacheStorage/ba00623a413aef1be0c65618db85f0b8176e803d/5bbced56-4f28-4a35-86bd-5fcb62e1100c
19408	./.config/google-chrome/Default/Service Worker/CacheStorage/ba00623a413aef1be0c65618db85f0b8176e803d
118264	./.config/google-chrome/Default/Service Worker/CacheStorage
130156	./.config/google-chrome/Default/Service Worker
24	./.config/google-chrome/Default/optimization_guide_prediction_model_downloads/7d551f35-c775-4a12-a7f6-8c7d73302987
3560	./.config/google-chrome/Default/optimization_guide_prediction_model_downloads/65fa22f6-32ff-40ae-99fe-abc89bbf9d8a
72	./.config/google-chrome/Default/optimization_guide_prediction_model_downloads/b6e4d437-776a-40a6-9d6c-fd5bd75a158d
3560	./.config/google-chrome/Default/optimization_guide_prediction_model_downloads/c33a4cd2-6bea-4c7a-8922-bc8d802ca3dd
1200	./.config/google-chrome/Default/optimization_guide_prediction_model_downloads/fe36e984-8952-4a59-a726-9832e49f0845
392	./.config/google-chrome/Default/optimization_guide_prediction_model_downloads/7441ba34-3e82-43db-a552-99485a554c45
8812	./.config/google-chrome/Default/optimization_guide_prediction_model_downloads
24	./.config/google-chrome/Default/Extension State
24	./.config/google-chrome/Default/GCM Store/Encryption
236	./.config/google-chrome/Default/GCM Store
32	./.config/google-chrome/Default/databases
36	./.config/google-chrome/Default/shared_proto_db/metadata
396	./.config/google-chrome/Default/shared_proto_db
120	./.config/google-chrome/Default/Accounts/Avatar Images
124	./.config/google-chrome/Default/Accounts
4	./.config/google-chrome/Default/optimization_guide_model_metadata_store
108	./.config/google-chrome/Default/Session Storage
132	./.config/google-chrome/Default/Platform Notifications
4	./.config/google-chrome/Default/commerce_subscription_db
260	./.config/google-chrome/Default/Sessions
16	./.config/google-chrome/Default/File System/001/t/Paths
24	./.config/google-chrome/Default/File System/001/t
28	./.config/google-chrome/Default/File System/001
16	./.config/google-chrome/Default/File System/000/t/Paths
24	./.config/google-chrome/Default/File System/000/t
28	./.config/google-chrome/Default/File System/000
24	./.config/google-chrome/Default/File System/Origins
84	./.config/google-chrome/Default/File System
4	./.config/google-chrome/Default/Download Service/EntryDB
4	./.config/google-chrome/Default/Download Service/Files
12	./.config/google-chrome/Default/Download Service
80	./.config/google-chrome/Default/Web Applications/Manifest Resources/fiocnjeibbipncjjokehnbgmjngpfbjp/Icons
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/fiocnjeibbipncjjokehnbgmjngpfbjp/Icons Maskable
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/fiocnjeibbipncjjokehnbgmjngpfbjp/Icons Monochrome
92	./.config/google-chrome/Default/Web Applications/Manifest Resources/fiocnjeibbipncjjokehnbgmjngpfbjp
28	./.config/google-chrome/Default/Web Applications/Manifest Resources/mdolieicjfghcpgicgamjnnphiidfilo/Icons
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/mdolieicjfghcpgicgamjnnphiidfilo/Icons Maskable
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/mdolieicjfghcpgicgamjnnphiidfilo/Icons Monochrome
40	./.config/google-chrome/Default/Web Applications/Manifest Resources/mdolieicjfghcpgicgamjnnphiidfilo
36	./.config/google-chrome/Default/Web Applications/Manifest Resources/fhihpiojkbmbpdjeoajapmgkhlnakfjf/Icons
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/fhihpiojkbmbpdjeoajapmgkhlnakfjf/Icons Maskable
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/fhihpiojkbmbpdjeoajapmgkhlnakfjf/Icons Monochrome
48	./.config/google-chrome/Default/Web Applications/Manifest Resources/fhihpiojkbmbpdjeoajapmgkhlnakfjf
148	./.config/google-chrome/Default/Web Applications/Manifest Resources/diijockbmcgnpcmijibdpmllinnbjoip/Icons
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/diijockbmcgnpcmijibdpmllinnbjoip/Icons Maskable
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/diijockbmcgnpcmijibdpmllinnbjoip/Icons Monochrome
160	./.config/google-chrome/Default/Web Applications/Manifest Resources/diijockbmcgnpcmijibdpmllinnbjoip
44	./.config/google-chrome/Default/Web Applications/Manifest Resources/fmgjjmmmlfnkbppncabfkddbjimcfncm/Icons
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/fmgjjmmmlfnkbppncabfkddbjimcfncm/Icons Maskable
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/fmgjjmmmlfnkbppncabfkddbjimcfncm/Icons Monochrome
56	./.config/google-chrome/Default/Web Applications/Manifest Resources/fmgjjmmmlfnkbppncabfkddbjimcfncm
96	./.config/google-chrome/Default/Web Applications/Manifest Resources/hnpfjngllnobngcgfapefoaidbinmjnm/Icons
28	./.config/google-chrome/Default/Web Applications/Manifest Resources/hnpfjngllnobngcgfapefoaidbinmjnm/Icons Maskable
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/hnpfjngllnobngcgfapefoaidbinmjnm/Icons Monochrome
132	./.config/google-chrome/Default/Web Applications/Manifest Resources/hnpfjngllnobngcgfapefoaidbinmjnm
60	./.config/google-chrome/Default/Web Applications/Manifest Resources/aghbiahbpaijignceidepookljebhfak/Icons
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/aghbiahbpaijignceidepookljebhfak/Icons Maskable
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/aghbiahbpaijignceidepookljebhfak/Icons Monochrome
72	./.config/google-chrome/Default/Web Applications/Manifest Resources/aghbiahbpaijignceidepookljebhfak
36	./.config/google-chrome/Default/Web Applications/Manifest Resources/mpnpojknpmmopombnjdcgaaiekajbnjb/Icons
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/mpnpojknpmmopombnjdcgaaiekajbnjb/Icons Maskable
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/mpnpojknpmmopombnjdcgaaiekajbnjb/Icons Monochrome
48	./.config/google-chrome/Default/Web Applications/Manifest Resources/mpnpojknpmmopombnjdcgaaiekajbnjb
32	./.config/google-chrome/Default/Web Applications/Manifest Resources/kefjledonklijopmnomlcbpllchaibag/Icons
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/kefjledonklijopmnomlcbpllchaibag/Icons Maskable
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/kefjledonklijopmnomlcbpllchaibag/Icons Monochrome
44	./.config/google-chrome/Default/Web Applications/Manifest Resources/kefjledonklijopmnomlcbpllchaibag
116	./.config/google-chrome/Default/Web Applications/Manifest Resources/jdfnkganbnookpkpfmoppaabhkkmgolp/Icons
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/jdfnkganbnookpkpfmoppaabhkkmgolp/Icons Maskable
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/jdfnkganbnookpkpfmoppaabhkkmgolp/Icons Monochrome
128	./.config/google-chrome/Default/Web Applications/Manifest Resources/jdfnkganbnookpkpfmoppaabhkkmgolp
96	./.config/google-chrome/Default/Web Applications/Manifest Resources/dbjegiddfibbmpjkcjjcnhnmjjmcbgjg/Icons
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/dbjegiddfibbmpjkcjjcnhnmjjmcbgjg/Icons Maskable
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/dbjegiddfibbmpjkcjjcnhnmjjmcbgjg/Icons Monochrome
108	./.config/google-chrome/Default/Web Applications/Manifest Resources/dbjegiddfibbmpjkcjjcnhnmjjmcbgjg
40	./.config/google-chrome/Default/Web Applications/Manifest Resources/agimnkijcaahngcdmfeangaknmldooml/Icons
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/agimnkijcaahngcdmfeangaknmldooml/Icons Maskable
24	./.config/google-chrome/Default/Web Applications/Manifest Resources/agimnkijcaahngcdmfeangaknmldooml/Icons Monochrome
16	./.config/google-chrome/Default/Web Applications/Manifest Resources/agimnkijcaahngcdmfeangaknmldooml/Shortcuts Menu Icons/1
8	./.config/google-chrome/Default/Web Applications/Manifest Resources/agimnkijcaahngcdmfeangaknmldooml/Shortcuts Menu Icons/0
4	./.config/google-chrome/Default/Web Applications/Manifest Resources/agimnkijcaahngcdmfeangaknmldooml/Shortcuts Menu Icons/Maskable
16	./.config/google-chrome/Default/Web Applications/Manifest Resources/agimnkijcaahngcdmfeangaknmldooml/Shortcuts Menu Icons/Monochrome/1
8	./.config/google-chrome/Default/Web Applications/Manifest Resources/agimnkijcaahngcdmfeangaknmldooml/Shortcuts Menu Icons/Monochrome/0
28	./.config/google-chrome/Default/Web Applications/Manifest Resources/agimnkijcaahngcdmfeangaknmldooml/Shortcuts Menu Icons/Monochrome
60	./.config/google-chrome/Default/Web Applications/Manifest Resources/agimnkijcaahngcdmfeangaknmldooml/Shortcuts Menu Icons
132	./.config/google-chrome/Default/Web Applications/Manifest Resources/agimnkijcaahngcdmfeangaknmldooml
1064	./.config/google-chrome/Default/Web Applications/Manifest Resources
4	./.config/google-chrome/Default/Web Applications/Temp
1072	./.config/google-chrome/Default/Web Applications
5344	./.config/google-chrome/Default/GPUCache
300	./.config/google-chrome/Default/DawnCache
4	./.config/google-chrome/Default/coupon_db
4	./.config/google-chrome/Default/VideoDecodeStats
370952	./.config/google-chrome/Default
448	./.config/google-chrome/Dictionaries
12	./.config/google-chrome/hyphen-data/120.0.6050.0/_metadata
1852	./.config/google-chrome/hyphen-data/120.0.6050.0
1856	./.config/google-chrome/hyphen-data
8	./.config/google-chrome/Crowd Deny/2023.11.27.1202/_metadata
36	./.config/google-chrome/Crowd Deny/2023.11.27.1202
40	./.config/google-chrome/Crowd Deny
4	./.config/google-chrome/NativeMessagingHosts
8	./.config/google-chrome/TrustTokenKeyCommitments/2024.3.25.1/_metadata
32	./.config/google-chrome/TrustTokenKeyCommitments/2024.3.25.1
36	./.config/google-chrome/TrustTokenKeyCommitments
4	./.config/google-chrome/MEIPreload
8	./.config/google-chrome/OnDeviceHeadSuggestModel/20240309.615576781.14/_metadata
7752	./.config/google-chrome/OnDeviceHeadSuggestModel/20240309.615576781.14
7756	./.config/google-chrome/OnDeviceHeadSuggestModel
8	./.config/google-chrome/OptimizationHints/441/_metadata
68	./.config/google-chrome/OptimizationHints/441
8	./.config/google-chrome/OptimizationHints/440/_metadata
68	./.config/google-chrome/OptimizationHints/440
140	./.config/google-chrome/OptimizationHints
8	./.config/google-chrome/CertificateRevocation/8639/_metadata
48	./.config/google-chrome/CertificateRevocation/8639
8	./.config/google-chrome/CertificateRevocation/8655/_metadata
48	./.config/google-chrome/CertificateRevocation/8655
100	./.config/google-chrome/CertificateRevocation
17952	./.config/google-chrome/pnacl/0.57.44.2492/_platform_specific/x86_64
17956	./.config/google-chrome/pnacl/0.57.44.2492/_platform_specific
8	./.config/google-chrome/pnacl/0.57.44.2492/_metadata
17976	./.config/google-chrome/pnacl/0.57.44.2492
17980	./.config/google-chrome/pnacl
8	./.config/google-chrome/ZxcvbnData/3/_metadata
1676	./.config/google-chrome/ZxcvbnData/3
1680	./.config/google-chrome/ZxcvbnData
12808	./.config/google-chrome/GrShaderCache
4	./.config/google-chrome/Crash Reports/new
4	./.config/google-chrome/Crash Reports/completed
4	./.config/google-chrome/Crash Reports/pending
4	./.config/google-chrome/Crash Reports/attachments
24	./.config/google-chrome/Crash Reports
308	./.config/google-chrome/ShaderCache
128	./.config/google-chrome/Subresource Filter/Indexed Rules/36/9.49.1
132	./.config/google-chrome/Subresource Filter/Indexed Rules/36
136	./.config/google-chrome/Subresource Filter/Indexed Rules
8	./.config/google-chrome/Subresource Filter/Unindexed Rules/9.49.1/_metadata
120	./.config/google-chrome/Subresource Filter/Unindexed Rules/9.49.1
124	./.config/google-chrome/Subresource Filter/Unindexed Rules
264	./.config/google-chrome/Subresource Filter
8	./.config/google-chrome/OriginTrials/1.0.0.15/_metadata
20	./.config/google-chrome/OriginTrials/1.0.0.15
24	./.config/google-chrome/OriginTrials
27088	./.config/google-chrome/Safe Browsing
8	./.config/google-chrome/SafetyTips/3025/_metadata
168	./.config/google-chrome/SafetyTips/3025
172	./.config/google-chrome/SafetyTips
473380	./.config/google-chrome
4	./.config/goa-1.0
20	./.config/evolution/sources
24	./.config/evolution
8	./.config/gnome-control-center/backgrounds
12	./.config/gnome-control-center
4	./.config/Code/Backups
52	./.config/Code/WebStorage
327824	./.config/Code/CachedExtensionVSIXs
804	./.config/Code/CachedExtensions
4	./.config/Code/Crashpad/new
4	./.config/Code/Crashpad/completed
4	./.config/Code/Crashpad/pending
4	./.config/Code/Crashpad/attachments
28	./.config/Code/Crashpad
16	./.config/Code/Cache/Cache_Data/index-dir
228208	./.config/Code/Cache/Cache_Data
228212	./.config/Code/Cache
12	./.config/Code/User/History/-a53e8dd
24	./.config/Code/User/History/-374d8bcd
128	./.config/Code/User/History/34515545
208	./.config/Code/User/History/6b68a67a
204	./.config/Code/User/History/-589995bd
112	./.config/Code/User/History/-57bae255
16	./.config/Code/User/History/-1f98dfb9
16	./.config/Code/User/History/-169e1bdf
28	./.config/Code/User/History/-2d900f38
40	./.config/Code/User/History/-7745135f
20	./.config/Code/User/History/-3af6d6be
92	./.config/Code/User/History/17116e0e
12	./.config/Code/User/History/-3e7bb8af
16	./.config/Code/User/History/31b2b231
20	./.config/Code/User/History/728f25e4
64	./.config/Code/User/History/-7c2a25ea
12	./.config/Code/User/History/-127cfb28
52	./.config/Code/User/History/-3058a891
208	./.config/Code/User/History/-407748e
12	./.config/Code/User/History/-82f26f
12	./.config/Code/User/History/24e53fae
12	./.config/Code/User/History/-491b6547
16	./.config/Code/User/History/c17b53f
124	./.config/Code/User/History/-1737d081
12	./.config/Code/User/History/d07854a
12	./.config/Code/User/History/-2cc43922
28	./.config/Code/User/History/3cab5232
12	./.config/Code/User/History/-70d596ed
16	./.config/Code/User/History/60590170
12	./.config/Code/User/History/-39847aa9
76	./.config/Code/User/History/461bb2ac
12	./.config/Code/User/History/31456343
20	./.config/Code/User/History/25a19612
92	./.config/Code/User/History/-36997264
16	./.config/Code/User/History/-19545ba
24	./.config/Code/User/History/280975b4
12	./.config/Code/User/History/36cc7107
12	./.config/Code/User/History/-3ece43c2
28	./.config/Code/User/History/-5344496a
76	./.config/Code/User/History/777d2e9f
20	./.config/Code/User/History/-757ebc6
16	./.config/Code/User/History/6b2223a7
40	./.config/Code/User/History/-7ed9d63
12	./.config/Code/User/History/56d67c7b
208	./.config/Code/User/History/-1d2539a6
12	./.config/Code/User/History/-78ba9527
32	./.config/Code/User/History/-480d5f2
28	./.config/Code/User/History/332df73b
28	./.config/Code/User/History/aa05e9a
208	./.config/Code/User/History/-325a72ee
12	./.config/Code/User/History/62536d4
32	./.config/Code/User/History/2b7b7adf
64	./.config/Code/User/History/3fad43d7
28	./.config/Code/User/History/1a904d74
44	./.config/Code/User/History/5728ce72
12	./.config/Code/User/History/-52207a97
24	./.config/Code/User/History/-1af7bae0
24	./.config/Code/User/History/7accf8
60	./.config/Code/User/History/34819b21
12	./.config/Code/User/History/534b1d29
12	./.config/Code/User/History/-7e7ca962
32	./.config/Code/User/History/-1d9a325
36	./.config/Code/User/History/-244148c2
60	./.config/Code/User/History/-63e7ca43
12	./.config/Code/User/History/-2215c50b
16	./.config/Code/User/History/7485aafa
16	./.config/Code/User/History/2f5cc21a
16	./.config/Code/User/History/499bf874
16	./.config/Code/User/History/8e43a2e
12	./.config/Code/User/History/3f28c9b7
20	./.config/Code/User/History/306fceae
12	./.config/Code/User/History/1216219a
44	./.config/Code/User/History/-30c95b50
16	./.config/Code/User/History/5d1e2b92
16	./.config/Code/User/History/-5e1f7c65
16	./.config/Code/User/History/44d13ee9
40	./.config/Code/User/History/d17d948
16	./.config/Code/User/History/-63e7c682
16	./.config/Code/User/History/5b6990b5
28	./.config/Code/User/History/5d6854b4
20	./.config/Code/User/History/1b47c293
12	./.config/Code/User/History/-17a2f003
12	./.config/Code/User/History/-ce487a1
12	./.config/Code/User/History/281ef371
36	./.config/Code/User/History/3f3f0c25
208	./.config/Code/User/History/c46203e
12	./.config/Code/User/History/4b5aee9
20	./.config/Code/User/History/54a75f94
12	./.config/Code/User/History/530e443e
12	./.config/Code/User/History/3291ed22
12	./.config/Code/User/History/4e040728
12	./.config/Code/User/History/59e4e24
36	./.config/Code/User/History/-14cc279f
20	./.config/Code/User/History/-33af41f1
48	./.config/Code/User/History/513d8175
84	./.config/Code/User/History/-40c84b22
32	./.config/Code/User/History/3d6fa02
296	./.config/Code/User/History/-3c1fdd96
32	./.config/Code/User/History/60720020
12	./.config/Code/User/History/268e07f2
16	./.config/Code/User/History/-65c57b52
60	./.config/Code/User/History/-56de0999
16	./.config/Code/User/History/-2e55110c
12	./.config/Code/User/History/19f39e00
32	./.config/Code/User/History/3f41ac18
72	./.config/Code/User/History/40150ca7
16	./.config/Code/User/History/-21f51cf
20	./.config/Code/User/History/-77619ce4
32	./.config/Code/User/History/-4d8e9da6
12	./.config/Code/User/History/6e65eb59
20	./.config/Code/User/History/-72cb4263
72	./.config/Code/User/History/-2cda50e9
12	./.config/Code/User/History/1aa5ee79
16	./.config/Code/User/History/-3dad78ab
60	./.config/Code/User/History/-1b2bbe73
16	./.config/Code/User/History/17ee9de4
16	./.config/Code/User/History/-2eed1f1d
48	./.config/Code/User/History/409bf74d
24	./.config/Code/User/History/-65282d77
12	./.config/Code/User/History/-bb29acf
24	./.config/Code/User/History/-29c806bb
12	./.config/Code/User/History/60e6bb5b
40	./.config/Code/User/History/-6547d6db
12	./.config/Code/User/History/-497c4af7
16	./.config/Code/User/History/1cb92a78
12	./.config/Code/User/History/5336808d
96	./.config/Code/User/History/18fdfd24
16	./.config/Code/User/History/6ba9ebd0
12	./.config/Code/User/History/3d732332
12	./.config/Code/User/History/1c580c5b
12	./.config/Code/User/History/56b941e5
48	./.config/Code/User/History/-63d78304
12	./.config/Code/User/History/-2a2ed26f
12	./.config/Code/User/History/226b33d
24	./.config/Code/User/History/-5fa95bee
20	./.config/Code/User/History/42dee165
8	./.config/Code/User/History/a00e36d
32	./.config/Code/User/History/54d5a068
16	./.config/Code/User/History/3686f170
20	./.config/Code/User/History/-2059b67b
16	./.config/Code/User/History/-354229c8
56	./.config/Code/User/History/3f22dd23
12	./.config/Code/User/History/-45494ed8
32	./.config/Code/User/History/196557a7
20	./.config/Code/User/History/78add95f
24	./.config/Code/User/History/4df02bc0
12	./.config/Code/User/History/-2e35b7d1
12	./.config/Code/User/History/28b705b8
20	./.config/Code/User/History/54e9ba0
12	./.config/Code/User/History/-678a7cf8
12	./.config/Code/User/History/2048bffb
24	./.config/Code/User/History/1136322
80	./.config/Code/User/History/3f339497
16	./.config/Code/User/History/-270fb7c0
5620	./.config/Code/User/History
44	./.config/Code/User/workspaceStorage/1712673908296
64	./.config/Code/User/workspaceStorage/0ecdf81fd4704b3c033496f85adeebaa
4	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/ms-vscode.cpptools
20	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.runtime/.settings
24	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.runtime
4	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.jdt.ls.core
4	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.debug.core
12	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.jdt.launching
32	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.jdt.core
4	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.history
16	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.root/.indexes
24	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.root
8	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.safetable
4	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/jdt.ls-java-project/org.eclipse.jdt.core
12	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/jdt.ls-java-project/.settings
28	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/jdt.ls-java-project
32	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.projects
72	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources
152	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/.metadata/.plugins
160	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/.metadata
4	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/jdt.ls-java-project/bin
4	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/jdt.ls-java-project/src
12	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws/jdt.ls-java-project
176	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/ss_ws
20	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.runtime/.settings
24	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.runtime
4	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.jdt.ls.core
4	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.debug.core
12	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.jdt.launching
47944	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.jdt.core
4	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.history
16	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.root/.indexes
24	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.root
8	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.safetable
8	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/jdt.ls-java-project/org.eclipse.jdt.core
12	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/jdt.ls-java-project/.settings
32	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/jdt.ls-java-project
36	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.projects
76	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources
8	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.m2e.core
4	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.buildship.core
48080	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata/.plugins
48092	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/.metadata
4	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/jdt.ls-java-project/bin
4	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/jdt.ls-java-project/src
12	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws/jdt.ls-java-project
48108	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java/jdt_ws
48296	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde/redhat.java
48376	./.config/Code/User/workspaceStorage/df0a5d13dd4893edfde6a0fab2f84bde
2276	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/ms-vscode.cpptools
20	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.runtime/.settings
24	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.runtime
4	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.jdt.ls.core
4	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.debug.core
12	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.jdt.launching
32	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.jdt.core
4	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.history
16	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.root/.indexes
36	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.root
8	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.safetable
4	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/programming_9c1fdaf6/org.eclipse.jdt.core
12	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/programming_9c1fdaf6/.settings
28	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/programming_9c1fdaf6
4	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/jdt.ls-java-project/org.eclipse.jdt.core
12	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/jdt.ls-java-project/.settings
28	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/jdt.ls-java-project
60	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources/.projects
112	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins/org.eclipse.core.resources
192	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata/.plugins
236	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/.metadata
4	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/programming_9c1fdaf6/bin
8	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/programming_9c1fdaf6
4	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/jdt.ls-java-project/bin
4	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/jdt.ls-java-project/src/practice
8	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/jdt.ls-java-project/src
16	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws/jdt.ls-java-project
264	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/ss_ws
20	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.runtime/.settings
24	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.runtime
4	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.jdt.ls.core
4	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.debug.core
4	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.jdt.junit.core/history
8	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.jdt.junit.core
12	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.jdt.launching
47956	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.jdt.core
4	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.history
16	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.root/.indexes
36	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.root
8	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.safetable
8	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/programming_9c1fdaf6/org.eclipse.jdt.core
12	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/programming_9c1fdaf6/.settings
4	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/programming_9c1fdaf6/org.eclipse.jdt.apt.core
48	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/programming_9c1fdaf6
8	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/jdt.ls-java-project/org.eclipse.jdt.core
12	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/jdt.ls-java-project/.settings
32	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.projects/jdt.ls-java-project
84	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources/.projects
136	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.core.resources
8	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.m2e.core
4	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins/org.eclipse.buildship.core
48160	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata/.plugins
49220	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/.metadata
96	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/programming_9c1fdaf6/bin
100	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/programming_9c1fdaf6
4	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/jdt.ls-java-project/bin
4	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/jdt.ls-java-project/src
12	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws/jdt.ls-java-project
49336	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java/jdt_ws
49616	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9/redhat.java
52144	./.config/Code/User/workspaceStorage/212881d14a8e7f2b18768159e2cda7a9
48	./.config/Code/User/workspaceStorage/bf837e1f1b48fe3d96ef628c13c8220e
4	./.config/Code/User/workspaceStorage/a7889fa068cdc7d3f4682c4d5d854413/ms-vscode.cpptools
80	./.config/Code/User/workspaceStorage/a7889fa068cdc7d3f4682c4d5d854413
100760	./.config/Code/User/workspaceStorage
4	./.config/Code/User/snippets
8	./.config/Code/User/globalStorage/vscode-extension-recommender
12	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_ss_linux/org.eclipse.core.runtime/.manager
136	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_ss_linux/org.eclipse.core.runtime
12	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_ss_linux/org.eclipse.osgi/.manager
2144	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_ss_linux/org.eclipse.osgi/38/0/.cp/lib
2148	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_ss_linux/org.eclipse.osgi/38/0/.cp
2152	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_ss_linux/org.eclipse.osgi/38/0
2156	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_ss_linux/org.eclipse.osgi/38
992	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_ss_linux/org.eclipse.osgi/36/0/.cp
996	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_ss_linux/org.eclipse.osgi/36/0
1000	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_ss_linux/org.eclipse.osgi/36
3388	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_ss_linux/org.eclipse.osgi
196	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_ss_linux/org.eclipse.equinox.launcher/org.eclipse.equinox.launcher.gtk.linux.x86_64_1.2.800.v20231003-1442
200	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_ss_linux/org.eclipse.equinox.launcher
4	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_ss_linux/org.eclipse.equinox.app/.manager
8	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_ss_linux/org.eclipse.equinox.app
3744	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_ss_linux
12	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.core.runtime/.manager
168	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.core.runtime
12	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/.manager
2144	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/55/0/.cp/lib
2148	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/55/0/.cp
2152	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/55/0
2156	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/55
5820	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/114/0/.cp/lib
5824	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/114/0/.cp
5828	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/114/0
5832	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/114
3300	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/11/0/.cp/lib
3304	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/11/0/.cp
3308	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/11/0
3312	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/11
6132	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/65/0/.cp/jars
6136	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/65/0/.cp
6140	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/65/0
6144	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/65
3084	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/95/0/.cp/lib
3088	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/95/0/.cp
3092	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/95/0
3096	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/95
992	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/51/0/.cp
996	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/51/0
1000	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi/51
21948	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.osgi
196	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.equinox.launcher/org.eclipse.equinox.launcher.gtk.linux.x86_64_1.2.800.v20231003-1442
200	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.equinox.launcher
4	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.equinox.app/.manager
8	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux/org.eclipse.equinox.app
22336	./.config/Code/User/globalStorage/redhat.java/1.26.0/config_linux
26084	./.config/Code/User/globalStorage/redhat.java/1.26.0
12	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_ss_linux/org.eclipse.core.runtime/.manager
128	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_ss_linux/org.eclipse.core.runtime
992	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_ss_linux/org.eclipse.osgi/34/0/.cp
996	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_ss_linux/org.eclipse.osgi/34/0
1000	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_ss_linux/org.eclipse.osgi/34
12	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_ss_linux/org.eclipse.osgi/.manager
2144	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_ss_linux/org.eclipse.osgi/36/0/.cp/lib
2148	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_ss_linux/org.eclipse.osgi/36/0/.cp
2152	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_ss_linux/org.eclipse.osgi/36/0
2156	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_ss_linux/org.eclipse.osgi/36
3380	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_ss_linux/org.eclipse.osgi
196	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_ss_linux/org.eclipse.equinox.launcher/org.eclipse.equinox.launcher.gtk.linux.x86_64_1.2.700.v20221108-1024
200	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_ss_linux/org.eclipse.equinox.launcher
4	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_ss_linux/org.eclipse.equinox.app/.manager
8	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_ss_linux/org.eclipse.equinox.app
3728	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_ss_linux
12	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.core.runtime/.manager
160	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.core.runtime
8708	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/60/0/.cp/jars
8712	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/60/0/.cp
8716	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/60/0
8720	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/60
12	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/.manager
992	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/47/0/.cp
996	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/47/0
1000	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/47
3084	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/124/0/.cp/lib
3088	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/124/0/.cp
3092	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/124/0
3096	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/124
5820	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/126/0/.cp/lib
5824	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/126/0/.cp
5828	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/126/0
5832	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/126
2144	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/51/0/.cp/lib
2148	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/51/0/.cp
2152	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/51/0
2156	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi/51
21184	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.osgi
196	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.equinox.launcher/org.eclipse.equinox.launcher.gtk.linux.x86_64_1.2.700.v20221108-1024
200	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.equinox.launcher
4	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.equinox.app/.manager
8	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux/org.eclipse.equinox.app
21564	./.config/Code/User/globalStorage/redhat.java/1.21.0/config_linux
25296	./.config/Code/User/globalStorage/redhat.java/1.21.0
12	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_ss_linux/org.eclipse.core.runtime/.manager
136	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_ss_linux/org.eclipse.core.runtime
12	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_ss_linux/org.eclipse.osgi/.manager
2144	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_ss_linux/org.eclipse.osgi/38/0/.cp/lib
2148	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_ss_linux/org.eclipse.osgi/38/0/.cp
2152	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_ss_linux/org.eclipse.osgi/38/0
2156	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_ss_linux/org.eclipse.osgi/38
992	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_ss_linux/org.eclipse.osgi/36/0/.cp
996	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_ss_linux/org.eclipse.osgi/36/0
1000	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_ss_linux/org.eclipse.osgi/36
3388	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_ss_linux/org.eclipse.osgi
200	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_ss_linux/org.eclipse.equinox.launcher/org.eclipse.equinox.launcher.gtk.linux.x86_64_1.2.900.v20240129-1338
204	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_ss_linux/org.eclipse.equinox.launcher
4	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_ss_linux/org.eclipse.equinox.app/.manager
8	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_ss_linux/org.eclipse.equinox.app
3748	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_ss_linux
12	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.core.runtime/.manager
168	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.core.runtime
12	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/.manager
2144	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/55/0/.cp/lib
2148	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/55/0/.cp
2152	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/55/0
2156	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/55
5820	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/114/0/.cp/lib
5824	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/114/0/.cp
5828	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/114/0
5832	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/114
3300	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/11/0/.cp/lib
3304	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/11/0/.cp
3308	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/11/0
3312	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/11
6132	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/65/0/.cp/jars
6136	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/65/0/.cp
6140	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/65/0
6144	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/65
3084	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/95/0/.cp/lib
3088	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/95/0/.cp
3092	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/95/0
3096	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/95
992	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/51/0/.cp
996	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/51/0
1000	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi/51
21948	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.osgi
200	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.equinox.launcher/org.eclipse.equinox.launcher.gtk.linux.x86_64_1.2.900.v20240129-1338
204	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.equinox.launcher
4	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.equinox.app/.manager
8	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux/org.eclipse.equinox.app
22340	./.config/Code/User/globalStorage/redhat.java/1.27.0/config_linux
26092	./.config/Code/User/globalStorage/redhat.java/1.27.0
77476	./.config/Code/User/globalStorage/redhat.java
8	./.config/Code/User/globalStorage/vscode-redhat-telemetry
77948	./.config/Code/User/globalStorage
184340	./.config/Code/User
1180	./.config/Code/CachedProfilesData/__default__profile__
1184	./.config/Code/CachedProfilesData
24	./.config/Code/Local Storage/leveldb
28	./.config/Code/Local Storage
4	./.config/Code/blob_storage/261f2e9a-8ad2-4855-84f8-23e4bfc6917a
8	./.config/Code/blob_storage
448	./.config/Code/Dictionaries
4	./.config/Code/logs/20240326T211923
4	./.config/Code/logs/20240326T211906
4	./.config/Code/logs/20240326T211806/window2/output_20240326T211924
8	./.config/Code/logs/20240326T211806/window2/exthost/vscode.github
12	./.config/Code/logs/20240326T211806/window2/exthost/output_logging_20240326T211924
8	./.config/Code/logs/20240326T211806/window2/exthost/vscode.git
40	./.config/Code/logs/20240326T211806/window2/exthost
60	./.config/Code/logs/20240326T211806/window2
4	./.config/Code/logs/20240326T211806/window1/output_20240326T211807
8	./.config/Code/logs/20240326T211806/window1/exthost/vscode.github
8	./.config/Code/logs/20240326T211806/window1/exthost/vscode.git
4	./.config/Code/logs/20240326T211806/window1/exthost/output_logging_20240326T211807
32	./.config/Code/logs/20240326T211806/window1/exthost
52	./.config/Code/logs/20240326T211806/window1
152	./.config/Code/logs/20240326T211806
8	./.config/Code/logs/20240309T205832/window1/exthost/vscode.github
8	./.config/Code/logs/20240309T205832/window1/exthost/vscode.git
16	./.config/Code/logs/20240309T205832/window1/exthost/output_logging_20240309T205833
44	./.config/Code/logs/20240309T205832/window1/exthost
4	./.config/Code/logs/20240309T205832/window1/output_20240309T205833
64	./.config/Code/logs/20240309T205832/window1
112	./.config/Code/logs/20240309T205832
4	./.config/Code/logs/20240402T143415/window1/output_20240402T143416
8	./.config/Code/logs/20240402T143415/window1/exthost/vscode.github
4	./.config/Code/logs/20240402T143415/window1/exthost/output_logging_20240402T143416
8	./.config/Code/logs/20240402T143415/window1/exthost/vscode.git
32	./.config/Code/logs/20240402T143415/window1/exthost
52	./.config/Code/logs/20240402T143415/window1
84	./.config/Code/logs/20240402T143415
4	./.config/Code/logs/20240319T144051/window1/output_20240319T144052
8	./.config/Code/logs/20240319T144051/window1/exthost/vscode.github
8	./.config/Code/logs/20240319T144051/window1/exthost/vscode.git
4	./.config/Code/logs/20240319T144051/window1/exthost/output_logging_20240319T144052
32	./.config/Code/logs/20240319T144051/window1/exthost
52	./.config/Code/logs/20240319T144051/window1
84	./.config/Code/logs/20240319T144051
8	./.config/Code/logs/20240318T163841/window1/exthost/vscode.github
8	./.config/Code/logs/20240318T163841/window1/exthost/vscode.git
12	./.config/Code/logs/20240318T163841/window1/exthost/output_logging_20240318T163842
40	./.config/Code/logs/20240318T163841/window1/exthost
4	./.config/Code/logs/20240318T163841/window1/output_20240318T163842
60	./.config/Code/logs/20240318T163841/window1
92	./.config/Code/logs/20240318T163841
4	./.config/Code/logs/20240318T164015/window1/output_20240318T164016
4	./.config/Code/logs/20240318T164015/window1/exthost/output_logging_20240318T164016
8	./.config/Code/logs/20240318T164015/window1/exthost/vscode.github
8	./.config/Code/logs/20240318T164015/window1/exthost/vscode.git
32	./.config/Code/logs/20240318T164015/window1/exthost
52	./.config/Code/logs/20240318T164015/window1
92	./.config/Code/logs/20240318T164015
8	./.config/Code/logs/20240409T144507/window1/exthost/vscode.github
20	./.config/Code/logs/20240409T144507/window1/exthost
4	./.config/Code/logs/20240409T144507/window1/output_20240409T144508
40	./.config/Code/logs/20240409T144507/window1
72	./.config/Code/logs/20240409T144507
4	./.config/Code/logs/20240213T234156/window1/output_20240213T234201
8	./.config/Code/logs/20240213T234156/window1/exthost/vscode.github
16	./.config/Code/logs/20240213T234156/window1/exthost/output_logging_20240213T234201
8	./.config/Code/logs/20240213T234156/window1/exthost/vscode.git
44	./.config/Code/logs/20240213T234156/window1/exthost
76	./.config/Code/logs/20240213T234156/window1
136	./.config/Code/logs/20240213T234156
4	./.config/Code/logs/20240213T233114/window1/output_20240213T233116
16	./.config/Code/logs/20240213T233114/window1/exthost/output_logging_20240213T233116
8	./.config/Code/logs/20240213T233114/window1/exthost/vscode.github
8	./.config/Code/logs/20240213T233114/window1/exthost/vscode.git
8	./.config/Code/logs/20240213T233114/window1/exthost/vscode.github-authentication
8	./.config/Code/logs/20240213T233114/window1/exthost/vscode.microsoft-authentication
60	./.config/Code/logs/20240213T233114/window1/exthost
76	./.config/Code/logs/20240213T233114/window1
108	./.config/Code/logs/20240213T233114
944	./.config/Code/logs
52	./.config/Code/Service Worker/Database
8	./.config/Code/Service Worker/ScriptCache/index-dir
344	./.config/Code/Service Worker/ScriptCache
8	./.config/Code/Service Worker/CacheStorage/89361dc5292e89dc69f2ea6af65e3d1f339b552c/96b2d1af-cc16-43ae-9992-e64e4701eadd/index-dir
64	./.config/Code/Service Worker/CacheStorage/89361dc5292e89dc69f2ea6af65e3d1f339b552c/96b2d1af-cc16-43ae-9992-e64e4701eadd
72	./.config/Code/Service Worker/CacheStorage/89361dc5292e89dc69f2ea6af65e3d1f339b552c
8	./.config/Code/Service Worker/CacheStorage/c834b1bb7c98cf0ce81d3dc0c0afa0d171fb6cfd/d44545fc-20f6-4c49-a6c0-649514b03cce/index-dir
24	./.config/Code/Service Worker/CacheStorage/c834b1bb7c98cf0ce81d3dc0c0afa0d171fb6cfd/d44545fc-20f6-4c49-a6c0-649514b03cce
32	./.config/Code/Service Worker/CacheStorage/c834b1bb7c98cf0ce81d3dc0c0afa0d171fb6cfd
8	./.config/Code/Service Worker/CacheStorage/50c1ab9083d15e26e7854ce8bf4eccdbb0215d1e/a78231ff-e483-4524-971f-85c298e325a3/index-dir
64	./.config/Code/Service Worker/CacheStorage/50c1ab9083d15e26e7854ce8bf4eccdbb0215d1e/a78231ff-e483-4524-971f-85c298e325a3
72	./.config/Code/Service Worker/CacheStorage/50c1ab9083d15e26e7854ce8bf4eccdbb0215d1e
8	./.config/Code/Service Worker/CacheStorage/586db4a48d64ae12d29b701c2a046d9b81cf2176/69bcccbf-7eb7-451c-9082-1387ad2d4482/index-dir
5948	./.config/Code/Service Worker/CacheStorage/586db4a48d64ae12d29b701c2a046d9b81cf2176/69bcccbf-7eb7-451c-9082-1387ad2d4482
5956	./.config/Code/Service Worker/CacheStorage/586db4a48d64ae12d29b701c2a046d9b81cf2176
8	./.config/Code/Service Worker/CacheStorage/d0f7757de8966615cda59a6d19fbd61583478d56/b98f4495-fb07-422a-9924-e77565ada5bf/index-dir
64	./.config/Code/Service Worker/CacheStorage/d0f7757de8966615cda59a6d19fbd61583478d56/b98f4495-fb07-422a-9924-e77565ada5bf
72	./.config/Code/Service Worker/CacheStorage/d0f7757de8966615cda59a6d19fbd61583478d56
8	./.config/Code/Service Worker/CacheStorage/e38447d9067c8e181b0dd4fe938b51d87d0fcf51/378b5184-3256-48cd-b42b-8854f5947775/index-dir
64	./.config/Code/Service Worker/CacheStorage/e38447d9067c8e181b0dd4fe938b51d87d0fcf51/378b5184-3256-48cd-b42b-8854f5947775
72	./.config/Code/Service Worker/CacheStorage/e38447d9067c8e181b0dd4fe938b51d87d0fcf51
8	./.config/Code/Service Worker/CacheStorage/aff59b6f36535ceb02663292ae458349f8989815/96c279fa-5ccd-4d02-9dfe-225f4c040f29/index-dir
64	./.config/Code/Service Worker/CacheStorage/aff59b6f36535ceb02663292ae458349f8989815/96c279fa-5ccd-4d02-9dfe-225f4c040f29
72	./.config/Code/Service Worker/CacheStorage/aff59b6f36535ceb02663292ae458349f8989815
8	./.config/Code/Service Worker/CacheStorage/2f698cc3f478c7ca757cf5e99dad587bd5a5ecd8/549dc6c7-f547-4f92-8eb0-21014927023e/index-dir
64	./.config/Code/Service Worker/CacheStorage/2f698cc3f478c7ca757cf5e99dad587bd5a5ecd8/549dc6c7-f547-4f92-8eb0-21014927023e
72	./.config/Code/Service Worker/CacheStorage/2f698cc3f478c7ca757cf5e99dad587bd5a5ecd8
8	./.config/Code/Service Worker/CacheStorage/4ad90d10c85bf9791dd8b762cbc4fd7833f39e34/4a16f383-461b-48f8-a8a3-296c283f023d/index-dir
64	./.config/Code/Service Worker/CacheStorage/4ad90d10c85bf9791dd8b762cbc4fd7833f39e34/4a16f383-461b-48f8-a8a3-296c283f023d
72	./.config/Code/Service Worker/CacheStorage/4ad90d10c85bf9791dd8b762cbc4fd7833f39e34
8	./.config/Code/Service Worker/CacheStorage/1673c786ac3d1eb3f1f62bef38a169470b828f3d/afa52d7c-32d1-4c83-aa8a-efeb77effc36/index-dir
64	./.config/Code/Service Worker/CacheStorage/1673c786ac3d1eb3f1f62bef38a169470b828f3d/afa52d7c-32d1-4c83-aa8a-efeb77effc36
72	./.config/Code/Service Worker/CacheStorage/1673c786ac3d1eb3f1f62bef38a169470b828f3d
6568	./.config/Code/Service Worker/CacheStorage
6968	./.config/Code/Service Worker
8	./.config/Code/CachedData/74f6148eb9ea00507ec113ec51c489d6ffb4b771/chrome/js/index-dir
8000	./.config/Code/CachedData/74f6148eb9ea00507ec113ec51c489d6ffb4b771/chrome/js
8	./.config/Code/CachedData/74f6148eb9ea00507ec113ec51c489d6ffb4b771/chrome/wasm/index-dir
16	./.config/Code/CachedData/74f6148eb9ea00507ec113ec51c489d6ffb4b771/chrome/wasm
8020	./.config/Code/CachedData/74f6148eb9ea00507ec113ec51c489d6ffb4b771/chrome
41444	./.config/Code/CachedData/74f6148eb9ea00507ec113ec51c489d6ffb4b771
8	./.config/Code/CachedData/0ee08df0cf4527e40edc9aa28f4b5bd38bbff2b2/chrome/js/index-dir
8632	./.config/Code/CachedData/0ee08df0cf4527e40edc9aa28f4b5bd38bbff2b2/chrome/js
8	./.config/Code/CachedData/0ee08df0cf4527e40edc9aa28f4b5bd38bbff2b2/chrome/wasm/index-dir
16	./.config/Code/CachedData/0ee08df0cf4527e40edc9aa28f4b5bd38bbff2b2/chrome/wasm
8652	./.config/Code/CachedData/0ee08df0cf4527e40edc9aa28f4b5bd38bbff2b2/chrome
31784	./.config/Code/CachedData/0ee08df0cf4527e40edc9aa28f4b5bd38bbff2b2
73232	./.config/Code/CachedData
8	./.config/Code/CachedConfigurations/defaults/configurationDefaultsOverrides
12	./.config/Code/CachedConfigurations/defaults
16	./.config/Code/CachedConfigurations
8	./.config/Code/Code Cache/js/index-dir
16	./.config/Code/Code Cache/js
8	./.config/Code/Code Cache/wasm/index-dir
16	./.config/Code/Code Cache/wasm
36	./.config/Code/Code Cache
32	./.config/Code/databases
20	./.config/Code/shared_proto_db/metadata
40	./.config/Code/shared_proto_db
28	./.config/Code/Session Storage
580	./.config/Code/GPUCache
300	./.config/Code/DawnCache
4	./.config/Code/VideoDecodeStats
825184	./.config/Code
8	./.config/gtk-3.0
4	./.config/update-notifier
4	./.config/yelp
28	./.config/dconf
1302744	./.config
4	./.vscode/cli
8	./.vscode/extensions/vscjava.vscode-java-debug-0.56.0/images/commands
12	./.vscode/extensions/vscjava.vscode-java-debug-0.56.0/images
976	./.vscode/extensions/vscjava.vscode-java-debug-0.56.0/dist
2892	./.vscode/extensions/vscjava.vscode-java-debug-0.56.0/server
4104	./.vscode/extensions/vscjava.vscode-java-debug-0.56.0
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/images
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/out/src/announcement
64	./.vscode/extensions/ritwickdey.liveserver-5.7.9/out/src
68	./.vscode/extensions/ritwickdey.liveserver-5.7.9/out
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/escape-string-regexp
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/vary
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-symbol/test
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-symbol/.github
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-symbol/lib/private/setup
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-symbol/lib/private
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-symbol/lib
124	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-symbol
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/redent
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/batch
48	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/minimatch
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/apache-md5/src
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/apache-md5
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/through/test
52	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/through
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-iterator/test/#
44	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-iterator/test
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-iterator/#
120	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-iterator
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/next-tick/test
44	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/next-tick
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/imurmurhash
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/indent-string
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/split/test
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/split/examples
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/split
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/basic-auth
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/cors/lib
44	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/cors
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/jsonify/test
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/jsonify/lib
48	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/jsonify
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-map/primitive
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-map/test/primitive
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-map/test/lib
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-map/test
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-map/lib
140	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-map
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/concat-map/example
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/concat-map/test
40	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/concat-map
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/function-bind/test
72	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/function-bind
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type-check/lib
44	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type-check
52	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/table/test/README/usage
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/table/test/README
132	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/table/test
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/table/dist/schemas
156	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/table/dist
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/table/node_modules/chalk
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/table/node_modules/ansi-styles
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/table/node_modules/is-fullwidth-code-point
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/table/node_modules/supports-color
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/table/node_modules/ansi-regex
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/table/node_modules/string-width/node_modules/ansi-regex
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/table/node_modules/string-width/node_modules/strip-ansi
44	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/table/node_modules/string-width/node_modules
64	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/table/node_modules/string-width
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/table/node_modules/strip-ansi
192	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/table/node_modules
508	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/table
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/camelcase
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-extglob
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/path-parse
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-wsl
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/argparse/lib/action/store
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/argparse/lib/action/append
52	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/argparse/lib/action
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/argparse/lib/help
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/argparse/lib/argument
180	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/argparse/lib
212	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/argparse
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/natural-compare
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-arrayish
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/colors/themes
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/colors/examples
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/colors/lib/maps
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/colors/lib/custom
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/colors/lib/system
68	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/colors/lib
120	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/colors
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/error-ex
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/apache-crypt/src
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/apache-crypt
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ajv-keywords/keywords/dotjs
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ajv-keywords/keywords/dot
112	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ajv-keywords/keywords
144	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ajv-keywords
364	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/serve-index/public/icons
380	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/serve-index/public
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/serve-index/node_modules/http-errors
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/serve-index/node_modules/setprototypeof
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/serve-index/node_modules/depd/lib/browser
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/serve-index/node_modules/depd/lib/compat
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/serve-index/node_modules/depd/lib
68	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/serve-index/node_modules/depd
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/serve-index/node_modules/inherits
152	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/serve-index/node_modules
576	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/serve-index
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/json-stable-stringify/example
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/json-stable-stringify/test
76	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/json-stable-stringify
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ms
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/finalhandler
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/espree/lib
108	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/espree
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/send/node_modules/ms
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/send/node_modules/depd/lib/browser
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/send/node_modules/depd/lib/compat
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/send/node_modules/depd/lib
68	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/send/node_modules/depd
92	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/send/node_modules
156	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/send
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/on-finished
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/utils-merge
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/http-errors/node_modules/depd/lib/browser
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/http-errors/node_modules/depd/lib/compat
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/http-errors/node_modules/depd/lib
68	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/http-errors/node_modules/depd
72	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/http-errors/node_modules
104	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/http-errors
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/string_decoder/lib
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/string_decoder
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn-jsx/node_modules/acorn/bin
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn-jsx/node_modules/acorn/src/bin
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn-jsx/node_modules/acorn/src/loose
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn-jsx/node_modules/acorn/src/walk
232	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn-jsx/node_modules/acorn/src
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn-jsx/node_modules/acorn/rollup
352	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn-jsx/node_modules/acorn/dist
680	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn-jsx/node_modules/acorn
684	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn-jsx/node_modules
728	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn-jsx
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/event-emitter/benchmark
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/event-emitter/test
100	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/event-emitter
48	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/hosted-git-info
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/generate-object-property
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-finite
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/pause-stream/test
48	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/pause-stream
320	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/rx-lite
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/uuid/bin
40	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/uuid/lib
96	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/uuid
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/iterable
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/json
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/promise/#/finally
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/promise/#
48	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/promise
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/iterable
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/json
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/promise/#/finally
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/promise/#
40	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/promise
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/error/#
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/error
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/date/#
48	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/date
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/boolean
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/array/of
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/array/from
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/array/#/filter
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/array/#/fill
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/array/#/find
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/array/#/find-index
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/array/#/map
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/array/#/entries
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/array/#/splice
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/array/#/concat
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/array/#/values
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/array/#/slice
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/array/#/copy-within
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/array/#/@@iterator
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/array/#/keys
364	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/array/#
440	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/array
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math/tanh
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math/log10
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math/atanh
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math/sign
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math/imul
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math/sinh
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math/trunc
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math/log1p
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math/acosh
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math/log2
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math/asinh
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math/fround
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math/clz32
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math/cbrt
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math/hypot
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math/expm1
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math/cosh
368	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/math
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/reg-exp/#/split
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/reg-exp/#/search
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/reg-exp/#/replace
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/reg-exp/#/sticky
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/reg-exp/#/match
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/reg-exp/#/unicode
120	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/reg-exp/#
136	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/reg-exp
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/string/from-code-point
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/string/#/normalize
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/string/#/starts-with
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/string/#/code-point-at
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/string/#/@@iterator
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/string/#/ends-with
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/string/#/repeat
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/string/#/contains
200	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/string/#
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/string/raw
260	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/string
40	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/function/#
80	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/function
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/number/epsilon
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/number/is-finite
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/number/is-safe-integer
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/number/min-safe-integer
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/number/is-integer
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/number/is-nan
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/number/#
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/number/max-safe-integer
160	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/number
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/object/set-prototype-of
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/object/assign
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/object/entries
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/object/keys
336	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test/object
1956	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/test
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/error/#
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/error
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/date/#
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/date
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/.github
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/boolean
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/array/of
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/array/from
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/array/#/filter
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/array/#/fill
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/array/#/find
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/array/#/find-index
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/array/#/map
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/array/#/entries
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/array/#/splice
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/array/#/concat
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/array/#/values
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/array/#/slice
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/array/#/copy-within
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/array/#/@@iterator
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/array/#/keys
368	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/array/#
444	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/array
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math/tanh
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math/log10
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math/atanh
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math/sign
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math/imul
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math/sinh
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math/trunc
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math/log1p
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math/acosh
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math/log2
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math/asinh
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math/fround
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math/clz32
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math/cbrt
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math/hypot
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math/expm1
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math/cosh
372	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/math
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/reg-exp/#/split
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/reg-exp/#/search
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/reg-exp/#/replace
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/reg-exp/#/sticky
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/reg-exp/#/match
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/reg-exp/#/unicode
120	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/reg-exp/#
140	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/reg-exp
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/string/from-code-point
196	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/string/#/normalize
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/string/#/starts-with
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/string/#/code-point-at
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/string/#/@@iterator
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/string/#/ends-with
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/string/#/repeat
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/string/#/contains
372	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/string/#
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/string/raw
436	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/string
44	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/function/#
88	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/function
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/number/epsilon
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/number/is-finite
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/number/is-safe-integer
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/number/min-safe-integer
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/number/is-integer
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/number/is-nan
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/number/#
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/number/max-safe-integer
168	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/number
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/object/set-prototype-of
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/object/assign
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/object/entries
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/object/keys
340	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext/object
4252	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es5-ext
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-utf8
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/duplexer/test
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/duplexer
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/event-stream/test/helper
72	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/event-stream/test
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/event-stream/examples
120	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/event-stream
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/map-obj
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/has/src
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/has/test
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/has
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/readable-stream/doc/wg-meetings
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/readable-stream/doc
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/readable-stream/lib/internal/streams
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/readable-stream/lib/internal
96	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/readable-stream/lib
172	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/readable-stream
84	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/escope/src
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/escope/third_party
304	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/escope/lib
472	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/escope/powered-test
908	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/escope
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/levn/lib
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/levn
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/readdirp
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/path-is-absolute
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/strip-bom
112	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/connect
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/destroy
68	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/glob
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/internal-ip
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/deep-is/example
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/deep-is/test
48	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/deep-is
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/buffer-from
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/jsonpointer
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/setprototypeof/test
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/setprototypeof
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/babel-code-frame/lib
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/babel-code-frame/node_modules/chalk
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/babel-code-frame/node_modules/ansi-styles
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/babel-code-frame/node_modules/supports-color
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/babel-code-frame/node_modules/ansi-regex
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/babel-code-frame/node_modules/strip-ansi
108	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/babel-code-frame/node_modules
136	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/babel-code-frame
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/node-status-codes
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/require-uncached/node_modules/caller-path
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/require-uncached/node_modules/resolve-from
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/require-uncached/node_modules/callsites
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/require-uncached/node_modules
76	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/require-uncached
52	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/websocket-extensions/lib/pipeline
68	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/websocket-extensions/lib
100	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/websocket-extensions
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/array-like
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/plain-object
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/time-value
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/array-length
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/iterable
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/promise
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/array-like
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/plain-object
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/time-value
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/array-length
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/iterable
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/promise
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/error
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/safe-integer
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/thenable
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/date
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/finite
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/plain-function
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/natural-number
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/array
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/value
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/lib
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/integer
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/reg-exp
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/string
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/_lib
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/prototype
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/function
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/number
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test/object
296	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/test
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/error
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/safe-integer
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/thenable
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/date
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/finite
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/plain-function
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/natural-number
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/array
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/value
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/lib
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/integer
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/reg-exp
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/string
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/prototype
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/function
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/number
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type/object
620	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/type
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-binary-path
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/signal-exit
52	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/follow-redirects
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-redirect
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/meow
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/fresh
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/interpret
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-retry-allowed
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/number-is-nan
68	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/picomatch/lib
120	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/picomatch
40	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/optionator/lib
72	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/optionator
44	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/morgan
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/map-stream/test
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/map-stream/examples
48	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/map-stream
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ignore
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ip-regex
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-stream
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/generate-function
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/concat-stream
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/strip-json-comments
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/once
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/estraverse
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/etag
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/spdx-correct
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-my-ip-valid/fixtures
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-my-ip-valid
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/unzip-response
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/fs.realpath
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ips/bin
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ips/test
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ips/examples
64	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ips
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-plain-obj
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/read-all-stream
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/object-assign
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/requires-port
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/graceful-fs
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/process-nextick-args
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/bin
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/lib/util/patterns
116	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/lib/util
100	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/lib/config
68	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/lib/formatters
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/lib/internal-rules
80	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/lib/token-store
104	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/lib/code-path-analysis
1756	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/lib/rules
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/lib/testers
2464	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/lib
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/restore-cursor
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/mkdirp/bin
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/mkdirp
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/chalk
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/ansi-escapes
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/cli-width/.nyc_output/processinfo
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/cli-width/.nyc_output
52	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/cli-width
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/figures
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/ansi-styles
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/cli-cursor
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/is-fullwidth-code-point
48	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/inquirer/lib/prompts
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/inquirer/lib/objects
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/inquirer/lib/ui
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/inquirer/lib/utils
112	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/inquirer/lib
132	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/inquirer
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/onetime
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/supports-color
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/ansi-regex
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/string-width
44	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/run-async
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules/strip-ansi
508	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/node_modules
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/messages
48	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint/conf
3340	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eslint
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/write/node_modules/mkdirp/bin
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/write/node_modules/mkdirp
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/write/node_modules
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/write
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-set/primitive
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-set/test/primitive
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-set/test/ext
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-set/test/lib
80	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-set/test
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-set/ext
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-set/lib
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-set/node_modules/es6-symbol/test
96	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-set/node_modules/es6-symbol
100	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-set/node_modules
288	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-set
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/esprima/bin
284	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/esprima/dist
336	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/esprima
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/has-ansi/node_modules/ansi-regex
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/has-ansi/node_modules
44	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/has-ansi
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/loud-rejection
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/os-homedir
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/array-find-index
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/debug/src
112	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/debug
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn/bin
376	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn/acorn/dist
380	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn/acorn
104	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn/acorn-loose/dist
108	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn/acorn-loose
488	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn/dist
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn/acorn-walk/dist
40	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn/acorn-walk
1120	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/acorn
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/brace-expansion
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/wrappy
48	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/opn
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/esrecurse/node_modules/estraverse
60	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/esrecurse/node_modules
92	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/esrecurse
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/readline2/node_modules/mute-stream/test
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/readline2/node_modules/mute-stream
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/readline2/node_modules/is-fullwidth-code-point
52	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/readline2/node_modules
68	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/readline2
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-resolvable
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/from/test
40	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/from
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/range-parser
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-glob
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eventemitter3/umd
52	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/eventemitter3
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/isarray
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/flat-cache/node_modules/rimraf
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/flat-cache/node_modules
84	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/flat-cache
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/slice-ansi
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/websocket-driver/lib/websocket/driver/hybi
72	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/websocket-driver/lib/websocket/driver
92	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/websocket-driver/lib/websocket
96	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/websocket-driver/lib
132	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/websocket-driver
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/circular-json/build
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/circular-json/template
60	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/circular-json
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/promise
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/test/promise
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/test/thenable_
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/test/math
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/test/global-this
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/test/string
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/test/function
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/test/string_/includes
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/test/string_
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/test/object/entries
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/test/object
120	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/test
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/.github
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/thenable_
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/math
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/docs/promise
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/docs/thenable_
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/docs/math
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/docs/string
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/docs/function
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/docs/string_
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/docs/object
76	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/docs
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/lib/private
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/lib
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/global-this
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/array-like
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/plain-object
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/time-value
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/array-length
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/iterable
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/promise
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/map
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/error
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/safe-integer
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/set
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/thenable
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/date
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/finite
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/plain-function
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/natural-number
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/array
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/constructor
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/value
108	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/docs
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/lib/ensure
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/lib
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/integer
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/reg-exp
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/string
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/prototype
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/function
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/number
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type/object
468	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules/type
472	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/node_modules
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/string
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/function
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/string_/includes
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/string_
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/object/entries
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext/object
828	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ext
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/create-error-class
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/js-yaml/bin
156	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/js-yaml/dist
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/js-yaml/lib/js-yaml/schema
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/js-yaml/lib/js-yaml/type/js
72	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/js-yaml/lib/js-yaml/type
192	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/js-yaml/lib/js-yaml
200	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/js-yaml/lib
408	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/js-yaml
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/exit-hook
40	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/normalize-package-data/lib
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/normalize-package-data/node_modules/semver/bin
88	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/normalize-package-data/node_modules/semver
92	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/normalize-package-data/node_modules
156	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/normalize-package-data
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/mime-types
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/user-home
456	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/esquery/dist
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/esquery/node_modules/estraverse
60	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/esquery/node_modules
604	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/esquery
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/duplexer2
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/pluralize
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/xtend
52	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/globals
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/repeating
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/statuses
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/sprintf-js/src
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/sprintf-js/test
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/sprintf-js/dist
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/sprintf-js/demo
76	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/sprintf-js
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/fill-range
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/decamelize
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/bcryptjs/bin
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/bcryptjs/externs
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/bcryptjs/src/bcrypt/util
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/bcryptjs/src/bcrypt/prng
68	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/bcryptjs/src/bcrypt
92	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/bcryptjs/src
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/bcryptjs/scripts
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/bcryptjs/.vscode
100	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/bcryptjs/dist
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/bcryptjs/tests
288	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/bcryptjs
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/core-util-is/lib
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/core-util-is
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/file-entry-cache
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ee-first
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/stream-combiner/test
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/stream-combiner
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/text-table/example
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/text-table/test
76	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/text-table
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/progress/lib
44	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/progress
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/shelljs/bin
168	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/shelljs/src
300	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/shelljs
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/http-auth/src/auth
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/http-auth/src/server
64	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/http-auth/src
92	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/http-auth
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/braces/lib
84	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/braces
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/chokidar/types
44	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/chokidar/lib
112	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/chokidar
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/http-shutdown
1700	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/lodash/fp
5016	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/lodash
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ipify/node_modules/prepend-http
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ipify/node_modules/url-parse-lax
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ipify/node_modules/timed-out
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ipify/node_modules/got
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ipify/node_modules/parse-json/vendor
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ipify/node_modules/parse-json
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ipify/node_modules/lowercase-keys
172	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ipify/node_modules
196	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ipify
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/util-deprecate
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/read-pkg-up/node_modules/path-type
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/read-pkg-up/node_modules/strip-bom
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/read-pkg-up/node_modules/load-json-file
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/read-pkg-up/node_modules/pify
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/read-pkg-up/node_modules/parse-json/vendor
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/read-pkg-up/node_modules/parse-json
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/read-pkg-up/node_modules/read-pkg
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/read-pkg-up/node_modules/find-up
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/read-pkg-up/node_modules/path-exists
200	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/read-pkg-up/node_modules
220	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/read-pkg-up
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/escape-html
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/code-point-at
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/spdx-license-ids
80	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/vsls
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/word-wrap
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/camelcase-keys
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-core-module/test
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-core-module
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/parseurl
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/depd/lib/browser
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/depd/lib
52	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/depd
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/proxy-middleware
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/inflight
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/trim-newlines
44	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/http-parser-js
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/to-regex-range
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/normalize-path
44	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/prelude-ls/lib
64	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/prelude-ls
220	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/mime-db
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/http-proxy/lib/http-proxy/passes
48	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/http-proxy/lib/http-proxy
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/http-proxy/lib
288	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/http-proxy
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/anymatch
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/unpipe
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/fast-levenshtein
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-weak-map/test
88	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/es6-weak-map
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/js-tokens
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-property
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/co
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/spdx-expression-parse
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/strip-indent/node_modules/get-stdin
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/strip-indent/node_modules
44	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/strip-indent
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/typedarray/example
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/typedarray/test/server
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/typedarray/test
68	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/typedarray
136	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/live-server
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/encodeurl
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/balanced-match/.github
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/balanced-match
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/esutils/lib
76	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/esutils
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/faye-websocket/lib/faye/websocket/api
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/faye-websocket/lib/faye/websocket
40	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/faye-websocket/lib/faye
44	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/faye-websocket/lib
72	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/faye-websocket
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-number
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/capture-stack-trace
48	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/safe-buffer
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/mime/src
80	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/mime
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/validate-npm-package-license
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/rechoir/lib
48	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/rechoir
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/unix-crypt-td-js/src
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/unix-crypt-td-js/test
48	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/unix-crypt-td-js
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/glob-parent
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/currently-unhandled
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ajv/scripts
1568	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ajv/dist
176	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ajv/lib/dotjs
68	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ajv/lib/compile
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ajv/lib/dot/v5
144	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ajv/lib/dot
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ajv/lib/refs
464	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ajv/lib
2144	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/ajv
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/negotiator/lib
52	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/negotiator
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/toidentifier
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/binary-extensions
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/pinkie-promise
60	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/is-my-json-valid
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/bin
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/example
4	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/shadowed_core/node_modules/util
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/shadowed_core/node_modules
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/shadowed_core
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/module_dir/ymodules/aaa
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/module_dir/ymodules
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/module_dir/xmodules/aaa
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/module_dir/xmodules
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/module_dir/zmodules/bbb
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/module_dir/zmodules
44	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/module_dir
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/precedence/aaa
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/precedence/bbb
32	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/precedence
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/same_names/foo
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/same_names
4	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/symlinked/_/symlink_target
4	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/symlinked/_/node_modules
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/symlinked/_
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/symlinked/package
28	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/symlinked
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/dot_slash_main
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/baz
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/quux/foo
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/quux
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/dot_main
4	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/other_path/lib
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/other_path
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/browser_field
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/incorrect_main
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/without_basedir
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/malformed_package_json
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/nested_symlinks/mylib
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/nested_symlinks
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/multirepo/packages/package-b
12	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/multirepo/packages/package-a
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/multirepo/packages
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/multirepo
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver/invalid_main
212	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/resolver
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/dotdot/abc
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/dotdot
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/node_path/x/aaa
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/node_path/x/ccc
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/node_path/x
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/node_path/y/bbb
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/node_path/y/ccc
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/node_path/y
44	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/node_path
4	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/pathfilter/deep_ref
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test/pathfilter
508	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/test
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/.github
56	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve/lib
644	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/resolve
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/on-headers
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/inherits
24	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/pinkie
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/path-is-inside/lib
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/path-is-inside
36	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/accepts
16	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/spdx-exceptions
80	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/doctrine/lib
128	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/doctrine
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/minimist/example
72	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/minimist/test
108	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/minimist
20	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/d/test
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/d/.github
68	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/d
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/supports-preserve-symlinks-flag/test
8	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/supports-preserve-symlinks-flag/.github
52	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules/supports-preserve-symlinks-flag
33620	./.vscode/extensions/ritwickdey.liveserver-5.7.9/node_modules
33748	./.vscode/extensions/ritwickdey.liveserver-5.7.9
252	./.vscode/extensions/ms-vscode.cpptools-themes-2.0.0/assets
64	./.vscode/extensions/ms-vscode.cpptools-themes-2.0.0/themes
340	./.vscode/extensions/ms-vscode.cpptools-themes-2.0.0
12	./.vscode/extensions/romankoblov.lprvw-0.0.1/.vscode
40	./.vscode/extensions/romankoblov.lprvw-0.0.1
40	./.vscode/extensions/redhat.java-1.27.0-linux-x64/formatters
24	./.vscode/extensions/redhat.java-1.27.0-linux-x64/webview-resources
756	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/man/man1
760	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/man
564	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/bin
12	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/include/linux
228	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/include
76	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/lib/jfr
416	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/lib/security
23444	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/lib/server
85264	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/lib
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/conf/management
8	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/conf/sdp
16	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/conf/security/policy/limited
12	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/conf/security/policy/unlimited
36	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/conf/security/policy
100	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/conf/security
160	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/conf
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.jdeps
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.se
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.unsupported
80	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.xml
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.zipfs
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.management
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.jartool
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.sql.rowset
48	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.localedata
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.transaction.xa
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.jshell
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.jconsole
36	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.smartcardio
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.nio.mapmode
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.jdi
72	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.desktop
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.attach
40	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.crypto.cryptoki
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.sctp
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.accessibility
96	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.base
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.internal.vm.compiler.management
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.jstatd
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.charsets
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.random
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.security.jgss
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.management
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.hotspot.agent
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.internal.vm.compiler
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.internal.ed
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.security.auth
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.rmi
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.jpackage
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.jfr
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.internal.jvmstat
36	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.internal.le
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.jsobject
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.xml.dom
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.editpad
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.compiler
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.jdwp.agent
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.instrument
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.jlink
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.compiler
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.httpserver
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.security.sasl
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.prefs
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.naming.rmi
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.net.http
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.naming.dns
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.management.jfr
36	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.dynalink
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.logging
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.unsupported.desktop
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.scripting
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.net
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.internal.vm.ci
40	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.javadoc
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.security.jgss
44	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.xml.crypto
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.management.agent
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.sql
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.management.rmi
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.crypto.ec
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.naming
36	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.internal.opt
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/java.datatransfer
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal/jdk.jcmd
2392	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64/legal
89384	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre/17.0.10-linux-x86_64
89388	./.vscode/extensions/redhat.java-1.27.0-linux-x64/jre
1996	./.vscode/extensions/redhat.java-1.27.0-linux-x64/lombok
2632	./.vscode/extensions/redhat.java-1.27.0-linux-x64/dist
32	./.vscode/extensions/redhat.java-1.27.0-linux-x64/language-support/kotlin
8	./.vscode/extensions/redhat.java-1.27.0-linux-x64/language-support/yaml
8	./.vscode/extensions/redhat.java-1.27.0-linux-x64/language-support/json
8	./.vscode/extensions/redhat.java-1.27.0-linux-x64/language-support/xml
8	./.vscode/extensions/redhat.java-1.27.0-linux-x64/language-support/html
12	./.vscode/extensions/redhat.java-1.27.0-linux-x64/language-support/properties
8	./.vscode/extensions/redhat.java-1.27.0-linux-x64/language-support/sql
48	./.vscode/extensions/redhat.java-1.27.0-linux-x64/language-support/java
136	./.vscode/extensions/redhat.java-1.27.0-linux-x64/language-support
180	./.vscode/extensions/redhat.java-1.27.0-linux-x64/document
8	./.vscode/#16) du: Estimate disk usage is blocksextensions/redhat.java-1.27.0-linux-x64/snippets
8	./.vscode/extensions/redhat.java-1.27.0-linux-x64/schemas
16	./.vscode/extensions/redhat.java-1.27.0-linux-x64/icons
12	./.vscode/extensions/redhat.java-1.27.0-linux-x64/server/config_mac
16	./.vscode/extensions/redhat.java-1.27.0-linux-x64/server/bin
12	./.vscode/extensions/redhat.java-1.27.0-linux-x64/server/config_mac_arm
48260	./.vscode/extensions/redhat.java-1.27.0-linux-x64/server/plugins
12	./.vscode/extensions/redhat.java-1.27.0-linux-x64/server/config_win
12	./.vscode/extensions/redhat.java-1.27.0-linux-x64/server/config_ss_linux
12	./.vscode/extensions/redhat.java-1.27.0-linux-x64/server/config_ss_mac
12	./.vscode/extensions/redhat.java-1.27.0-linux-x64/server/config_linux
12	./.vscode/extensions/redhat.java-1.27.0-linux-x64/server/config_ss_linux_arm
444	./.vscode/extensions/redhat.java-1.27.0-linux-x64/server/features
12	./.vscode/extensions/redhat.java-1.27.0-linux-x64/server/config_linux_arm
12	./.vscode/extensions/redhat.java-1.27.0-linux-x64/server/config_ss_mac_arm
12	./.vscode/extensions/redhat.java-1.27.0-linux-x64/server/config_ss_win
48844	./.vscode/extensions/redhat.java-1.27.0-linux-x64/server
143604	./.vscode/extensions/redhat.java-1.27.0-linux-x64
1536	./.vscode/extensions/negokaz.live-server-preview-0.1.4/doc/img
1540	./.vscode/extensions/negokaz.live-server-preview-0.1.4/doc
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/out/src
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/out
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/vary
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/set-value/node_modules/extend-shallow
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/set-value/node_modules
48	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/set-value
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/collection-visit
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/batch
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/apache-md5/src
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/apache-md5
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/micromatch/lib
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/micromatch/node_modules/is-extendable
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/micromatch/node_modules/extend-shallow
56	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/micromatch/node_modules
160	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/micromatch
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/through/test
52	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/through
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/component-emitter
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/split/test
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/split/examples
56	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/split
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/basic-auth
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/cors/lib
44	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/cors
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/async-each
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/object.pick
32	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/snapdragon/lib
388	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/snapdragon/node_modules/source-map/dist
120	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/snapdragon/node_modules/source-map/lib
556	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/snapdragon/node_modules/source-map
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/snapdragon/node_modules/extend-shallow
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/snapdragon/node_modules/define-property
600	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/snapdragon/node_modules
660	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/snapdragon
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/util/test/node
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/util/test/browser
44	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/util/test
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/util/support
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/util/node_modules/inherits
32	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/util/node_modules
132	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/util
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/expand-brackets/lib
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/expand-brackets/node_modules/ms
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/expand-brackets/node_modules/extend-shallow
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/expand-brackets/node_modules/debug/src
112	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/expand-brackets/node_modules/debug
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/expand-brackets/node_modules/define-property
176	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/expand-brackets/node_modules
232	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/expand-brackets
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/cache-base
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/repeat-element
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-plain-object
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-extglob
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/object-visit
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-wsl
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/array-unique
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/repeat-string
40	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/nanomatch/lib
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/nanomatch/node_modules/is-extendable
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/nanomatch/node_modules/extend-shallow
56	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/nanomatch/node_modules
172	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/nanomatch
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/colors/themes
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/colors/examples
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/colors/lib/maps
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/colors/lib/custom
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/colors/lib/system
68	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/colors/lib
116	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/colors
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/apache-crypt/src
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/apache-crypt
364	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/serve-index/public/icons
380	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/serve-index/public
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/serve-index/node_modules/ms
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/serve-index/node_modules/debug/src
112	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/serve-index/node_modules/debug
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/serve-index/node_modules/mime-types
200	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/serve-index/node_modules/mime-db
364	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/serve-index/node_modules
788	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/serve-index
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/union-value/node_modules/set-value
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/union-value/node_modules/extend-shallow
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/union-value/node_modules/arr-union
68	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/union-value/node_modules
88	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/union-value
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/regex-not/node_modules/is-extendable
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/regex-not/node_modules/extend-shallow
56	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/regex-not/node_modules
80	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/regex-not
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/ms
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/finalhandler/node_modules/ms
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/finalhandler/node_modules/debug/src
112	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/finalhandler/node_modules/debug
136	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/finalhandler/node_modules
164	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/finalhandler
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/send/node_modules/ms
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/send/node_modules/debug/src
112	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/send/node_modules/debug
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/send/node_modules/statuses
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/send/node_modules/mime/build
68	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/send/node_modules/mime
232	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/send/node_modules
292	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/send
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/on-finished
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/utils-merge
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/isobject
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/map-cache
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/http-errors/node_modules/statuses
32	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/http-errors/node_modules
64	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/http-errors
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/string_decoder
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/pause-stream/test
48	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/pause-stream
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/uuid/bin
40	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/uuid/lib
112	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/uuid
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/duplexer/test
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/duplexer
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/event-stream/test/helper
72	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/event-stream/test
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/event-stream/examples
120	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/event-stream
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-extendable
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/readable-stream/doc/wg-meetings
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/readable-stream/doc
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/readable-stream/lib/internal/streams
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/readable-stream/lib/internal
76	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/readable-stream/lib
144	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/readable-stream
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/readdirp
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/path-is-absolute
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-accessor-descriptor/node_modules/kind-of
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-accessor-descriptor/node_modules
48	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-accessor-descriptor
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/connect/node_modules/ms
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/connect/node_modules/debug/src
112	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/connect/node_modules/debug
136	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/connect/node_modules
248	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/connect
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/destroy
40	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/process
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/extglob/lib
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/extglob/node_modules/is-accessor-descriptor
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/extglob/node_modules/is-descriptor
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/extglob/node_modules/extend-shallow
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/extglob/node_modules/is-data-descriptor
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/extglob/node_modules/define-property
116	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/extglob/node_modules
176	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/extglob
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/setprototypeof
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/buffer-shims
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/snapdragon-util/node_modules/kind-of
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/snapdragon-util/node_modules
92	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/snapdragon-util
52	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/websocket-extensions/lib/pipeline
68	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/websocket-extensions/lib
100	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/websocket-extensions
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-binary-path
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/assign-symbols
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/upath/build/code
16	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/upath/build
60	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/upath
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fresh
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/snapdragon-node/node_modules/is-accessor-descriptor
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/snapdragon-node/node_modules/is-descriptor
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/snapdragon-node/node_modules/is-data-descriptor
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/snapdragon-node/node_modules/define-property
96	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/snapdragon-node/node_modules
132	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/snapdragon-node
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/map-visit
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/resolve-url/test
44	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/resolve-url
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/to-object-path/node_modules/kind-of
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/to-object-path/node_modules
48	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/to-object-path
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/morgan/node_modules/ms
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/morgan/node_modules/debug/src
112	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/morgan/node_modules/debug
136	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/morgan/node_modules
180	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/morgan
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/map-stream/test
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/map-stream/examples
48	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/map-stream
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/pascalcase
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/safe-regex/example
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/safe-regex/test
40	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/safe-regex
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/lodash.debounce
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/unset-value/node_modules/has-values
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/unset-value/node_modules/has-value/node_modules/isobject
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/unset-value/node_modules/has-value/node_modules
44	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/unset-value/node_modules/has-value
68	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/unset-value/node_modules
92	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/unset-value
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/etag
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/base/node_modules/is-accessor-descriptor
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/base/node_modules/is-descriptor
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/base/node_modules/is-data-descriptor
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/base/node_modules/define-property
96	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/base/node_modules
140	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/base
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/object-assign
48	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/graceful-fs
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/process-nextick-args
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-descriptor/node_modules/kind-of
32	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-descriptor/node_modules
56	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-descriptor
60	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/debug
48	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/opn
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/src
44	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/lib/binding/Release/node-v67-darwin-x64
48	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/lib/binding/Release
52	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/lib/binding
56	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/lib
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/deep-extend/lib
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/deep-extend
48	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/minimatch
104	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/gauge
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/osenv
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/concat-map/example
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/concat-map/test
40	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/concat-map
48	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/sax/lib
72	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/sax
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/node-pre-gyp/bin
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/node-pre-gyp/lib/util/nw-pre-gyp
76	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/node-pre-gyp/lib/util
152	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/node-pre-gyp/lib
232	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/node-pre-gyp
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/mkdirp/bin
64	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/mkdirp/test
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/mkdirp/examples
108	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/mkdirp
140	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/tar/lib
196	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/tar
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/ms
16	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/string_decoder/lib
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/string_decoder
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/chownr
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/ignore-walk
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/needle/bin
16	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/needle/test/utils
180	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/needle/test
40	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/needle/examples
56	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/needle/lib
328	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/needle
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/readable-stream/doc/wg-meetings
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/readable-stream/doc
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/readable-stream/lib/internal/streams
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/readable-stream/lib/internal
96	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/readable-stream/lib
172	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/readable-stream
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/path-is-absolute
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/abbrev
44	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/are-we-there-yet
64	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/safer-buffer
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/os-tmpdir
72	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/glob
32	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/minizlib
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/npmlog
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/ini
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/semver/bin
84	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/semver
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/signal-exit
32	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/console-control-strings
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/minipass
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/number-is-nan
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/wide-align
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/strip-json-comments
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/once
16	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/rc/test
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/rc/lib
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/rc/node_modules/minimist/example
64	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/rc/node_modules/minimist/test
100	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/rc/node_modules/minimist
104	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/rc/node_modules
168	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/rc
32	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/fs.realpath
32	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/rimraf
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/object-assign
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/process-nextick-args
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/os-homedir
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/fs-minipass
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/debug/src
112	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/debug
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/brace-expansion
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/wrappy
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/delegates/test
40	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/delegates
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/nopt/bin
16	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/nopt/test
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/nopt/examples
16	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/nopt/lib
80	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/nopt
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/isarray
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/is-fullwidth-code-point
232	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/iconv-lite/encodings/tables
348	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/iconv-lite/encodings
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/iconv-lite/lib
412	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/iconv-lite
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/detect-libc/bin
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/detect-libc/lib
44	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/detect-libc
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/has-unicode
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/aproba
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/core-util-is/lib
44	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/core-util-is
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/util-deprecate
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/code-point-at
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/set-blocking
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/inflight
32	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/yallist
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/ansi-regex
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/npm-bundled
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/balanced-match
48	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/safe-buffer
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/string-width
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/strip-ansi
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/npm-packlist
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/inherits
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/minimist/example
40	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/minimist/test
76	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules/minimist
3640	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents/node_modules
3764	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fsevents
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/from/test
40	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/from
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/range-parser
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-glob
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/for-in
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-buffer/test
32	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-buffer
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/isarray
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/ret/lib
48	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/ret
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/static-extend/node_modules/define-property
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/static-extend/node_modules
40	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/static-extend
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/websocket-driver/lib/websocket/driver/hybi
68	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/websocket-driver/lib/websocket/driver
88	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/websocket-driver/lib/websocket
92	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/websocket-driver/lib
124	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/websocket-driver
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/has-values/node_modules/kind-of
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/has-values/node_modules
48	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/has-values
152	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/nan/doc
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/nan/tools
520	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/nan
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/posix-character-classes
16	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/source-map-url/test
56	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/source-map-url
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/statuses
16	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/copy-descriptor
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/urix/test
32	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/urix
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/to-regex/node_modules/is-extendable
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/to-regex/node_modules/extend-shallow
56	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/to-regex/node_modules
80	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/to-regex
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fill-range/node_modules/extend-shallow
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fill-range/node_modules
56	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fill-range
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/object-copy/node_modules/kind-of
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/object-copy/node_modules/define-property
48	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/object-copy/node_modules
64	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/object-copy
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-windows
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/bcryptjs/bin
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/bcryptjs/externs
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/bcryptjs/src/bcrypt/util
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/bcryptjs/src/bcrypt/prng
68	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/bcryptjs/src/bcrypt
92	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/bcryptjs/src
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/bcryptjs/scripts
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/bcryptjs/.vscode
100	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/bcryptjs/dist
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/bcryptjs/tests
288	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/bcryptjs
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/core-util-is/lib
44	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/core-util-is
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/kind-of
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-data-descriptor/node_modules/kind-of
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-data-descriptor/node_modules
48	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-data-descriptor
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/ee-first
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/stream-combiner/test
36	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/stream-combiner
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/has-value
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/http-auth/src/auth
32	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/http-auth/src/server
64	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/http-auth/src
92	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/http-auth
32	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/braces/lib
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/braces/node_modules/extend-shallow
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/braces/node_modules/arr-flatten
44	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/braces/node_modules
124	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/braces
16	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/get-value
40	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/chokidar/lib
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/chokidar/node_modules/is-glob
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/chokidar/node_modules
128	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/chokidar
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/util-deprecate
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/escape-html
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/path-dirname
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/remove-trailing-separator
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/parseurl
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/use
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/depd/lib/browser
16	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/depd/lib/compat
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/depd/lib
68	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/depd
32	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/proxy-middleware
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/arr-diff
40	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/http-parser-js
32	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/to-regex-range
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/normalize-path
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/anymatch
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/unpipe
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/mixin-deep/node_modules/is-extendable
32	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/mixin-deep/node_modules
52	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/mixin-deep
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/class-utils/node_modules/arr-union
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/class-utils/node_modules/define-property
44	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/class-utils/node_modules
72	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/class-utils
40	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/path
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/define-property/node_modules/is-accessor-descriptor
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/define-property/node_modules/is-descriptor
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/define-property/node_modules/is-data-descriptor
76	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/define-property/node_modules
104	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/define-property
16	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/live-server/middleware
16	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/live-server/test/conf
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/live-server/test/data/sub
44	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/live-server/test/data
100	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/live-server/test
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/live-server/.github
184	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/live-server
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/atob/bin
72	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/atob
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/encodeurl
32	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/faye-websocket/examples
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/faye-websocket/lib/faye/websocket/api
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/faye-websocket/lib/faye/websocket
40	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/faye-websocket/lib/faye
44	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/faye-websocket/lib
108	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/faye-websocket
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-number/node_modules/kind-of
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-number/node_modules
52	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/is-number
48	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/safe-buffer
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/unix-crypt-td-js/src
12	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/unix-crypt-td-js/test
8	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/unix-crypt-td-js/dist
56	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/unix-crypt-td-js
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/glob-parent
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/fragment-cache
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/negotiator/lib
52	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/negotiator
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/split-string/node_modules/is-extendable
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/split-string/node_modules/extend-shallow
56	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/split-string/node_modules
80	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/split-string
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/binary-extensions
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/decode-uri-component
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/on-headers
24	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/inherits
60	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/source-map-resolve/test
20	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/source-map-resolve/lib
148	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/source-map-resolve
28	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/accepts/node_modules/mime-types
200	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/accepts/node_modules/mime-db
232	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/accepts/node_modules
268	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules/accepts
14072	./.vscode/extensions/negokaz.live-server-preview-0.1.4/node_modules
15832	./.vscode/extensions/negokaz.live-server-preview-0.1.4
28	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/res/light
28	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/res/dark
560	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/res
16	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/src/debug
8	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/src/installs
28	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/src/drivers
180	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/src
216	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/zh-tw/schemas
220	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/zh-tw
352	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/ru/schemas
356	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/ru
260	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/pl/schemas
264	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/pl
260	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/de/schemas
264	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/de
260	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/ko/schemas
264	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/ko
252	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/it/schemas
256	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/it
244	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/tr/schemas
248	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/tr
256	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/cs/schemas
260	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/cs
248	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/es/schemas
252	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/es
260	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/fr/schemas
264	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/fr
228	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/zh-cn/schemas
232	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/zh-cn
276	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/ja/schemas
280	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/ja
248	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/pt-br/schemas
252	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema/pt-br
3416	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist/schema
7580	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/dist
352	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32/schemas
9176	./.vscode/extensions/ms-vscode.cmake-tools-1.16.32
36	./.vscode/extensions/ms-vscode.cpptools-extension-pack-1.3.0
8	./.vscode/extensions/visualstudioexptteam.intellicode-api-usage-examples-0.2.8/images
12	./.vscode/extensions/visualstudioexptteam.intellicode-api-usage-examples-0.2.8/dist/client/gaia-results
20	./.vscode/extensions/visualstudioexptteam.intellicode-api-usage-examples-0.2.8/dist/client
280	./.vscode/extensions/visualstudioexptteam.intellicode-api-usage-examples-0.2.8/dist/gaia-results
1644	./.vscode/extensions/visualstudioexptteam.intellicode-api-usage-examples-0.2.8/dist/server/gaia-lib-typescript/node_modules/typescript/lib
1648	./.vscode/extensions/visualstudioexptteam.intellicode-api-usage-examples-0.2.8/dist/server/gaia-lib-typescript/node_modules/typescript
1652	./.vscode/extensions/visualstudioexptteam.intellicode-api-usage-examples-0.2.8/dist/server/gaia-lib-typescript/node_modules
1656	./.vscode/extensions/visualstudioexptteam.intellicode-api-usage-examples-0.2.8/dist/server/gaia-lib-typescript
196	./.vscode/extensions/visualstudioexptteam.intellicode-api-usage-examples-0.2.8/dist/server/gaia-lib-python
5952	./.vscode/extensions/visualstudioexptteam.intellicode-api-usage-examples-0.2.8/dist/server
8088	./.vscode/extensions/visualstudioexptteam.intellicode-api-usage-examples-0.2.8/dist
8196	./.vscode/extensions/visualstudioexptteam.intellicode-api-usage-examples-0.2.8
8120	./.vscode/extensions/twxs.cmake-0.0.17/images
72	./.vscode/extensions/twxs.cmake-0.0.17/out/src
12	./.vscode/extensions/twxs.cmake-0.0.17/out/test
12	./.vscode/extensions/twxs.cmake-0.0.17/out/.vscode-test/VSCode-linux-x64/resources/app/extensions/json/client/src
16	./.vscode/extensions/twxs.cmake-0.0.17/out/.vscode-test/VSCode-linux-x64/resources/app/extensions/json/client
20	./.vscode/extensions/twxs.cmake-0.0.17/out/.vscode-test/VSCode-linux-x64/resources/app/extensions/json
24	./.vscode/extensions/twxs.cmake-0.0.17/out/.vscode-test/VSCode-linux-x64/resources/app/extensions
28	./.vscode/extensions/twxs.cmake-0.0.17/out/.vscode-test/VSCode-linux-x64/resources/app
32	./.vscode/extensions/twxs.cmake-0.0.17/out/.vscode-test/VSCode-linux-x64/resources
36	./.vscode/extensions/twxs.cmake-0.0.17/out/.vscode-test/VSCode-linux-x64
40	./.vscode/extensions/twxs.cmake-0.0.17/out/.vscode-test
152	./.vscode/extensions/twxs.cmake-0.0.17/out
20	./.vscode/extensions/twxs.cmake-0.0.17/node_modules/peg-cmake/test
12	./.vscode/extensions/twxs.cmake-0.0.17/node_modules/peg-cmake/.vscode
108	./.vscode/extensions/twxs.cmake-0.0.17/node_modules/peg-cmake/grammar
24	./.vscode/extensions/twxs.cmake-0.0.17/node_modules/peg-cmake/lib
196	./.vscode/extensions/twxs.cmake-0.0.17/node_modules/peg-cmake
16	./.vscode/extensions/twxs.cmake-0.0.17/node_modules/opener
216	./.vscode/extensions/twxs.cmake-0.0.17/node_modules
24	./.vscode/extensions/twxs.cmake-0.0.17/syntaxes
8532	./.vscode/extensions/twxs.cmake-0.0.17
52	./.vscode/extensions/yandeu.five-server-0.3.1/dist/bundle/client
2828	./.vscode/extensions/yandeu.five-server-0.3.1/dist/bundle/subdir
164	./.vscode/extensions/yandeu.five-server-0.3.1/dist/bundle/public/serve-preview
192	./.vscode/extensions/yandeu.five-server-0.3.1/dist/bundle/public/serve-explorer/icons
208	./.vscode/extensions/yandeu.five-server-0.3.1/dist/bundle/public/serve-explorer
144	./.vscode/extensions/yandeu.five-server-0.3.1/dist/bundle/public/scripts
16	./.vscode/extensions/yandeu.five-server-0.3.1/dist/bundle/public/serve-php
552	./.vscode/extensions/yandeu.five-server-0.3.1/dist/bundle/public
3436	./.vscode/extensions/yandeu.five-server-0.3.1/dist/bundle
52	./.vscode/extensions/yandeu.five-server-0.3.1/dist/client
164	./.vscode/extensions/yandeu.five-server-0.3.1/dist/public/serve-preview
192	./.vscode/extensions/yandeu.five-server-0.3.1/dist/public/serve-explorer/icons
208	./.vscode/extensions/yandeu.five-server-0.3.1/dist/public/serve-explorer
144	./.vscode/extensions/yandeu.five-server-0.3.1/dist/public/scripts
16	./.vscode/extensions/yandeu.five-server-0.3.1/dist/public/serve-php
552	./.vscode/extensions/yandeu.five-server-0.3.1/dist/public
4044	./.vscode/extensions/yandeu.five-server-0.3.1/dist
92	./.vscode/extensions/yandeu.five-server-0.3.1/img
112	./.vscode/extensions/yandeu.five-server-0.3.1/node_modules/@yandeu/open-cjs
116	./.vscode/extensions/yandeu.five-server-0.3.1/node_modules/@yandeu
184	./.vscode/extensions/yandeu.five-server-0.3.1/node_modules/fsevents
304	./.vscode/extensions/yandeu.five-server-0.3.1/node_modules
4628	./.vscode/extensions/yandeu.five-server-0.3.1
5304	./.vscode/extensions/vscjava.vscode-maven-0.44.0/jdtls.ext/com.microsoft.java.maven.plugin/target
5308	./.vscode/extensions/vscjava.vscode-maven-0.44.0/jdtls.ext/com.microsoft.java.maven.plugin
5312	./.vscode/extensions/vscjava.vscode-maven-0.44.0/jdtls.ext
8	./.vscode/extensions/vscjava.vscode-maven-0.44.0/resources/projectTemplate
10076	./.vscode/extensions/vscjava.vscode-maven-0.44.0/resources/IndexData/index
10108	./.vscode/extensions/vscjava.vscode-maven-0.44.0/resources/IndexData
68	./.vscode/extensions/vscjava.vscode-maven-0.44.0/resources/maven-wrapper/.mvn/wrapper
72	./.vscode/extensions/vscjava.vscode-maven-0.44.0/resources/maven-wrapper/.mvn
96	./.vscode/extensions/vscjava.vscode-maven-0.44.0/resources/maven-wrapper
40	./.vscode/extensions/vscjava.vscode-maven-0.44.0/resources/icons/light
40	./.vscode/extensions/vscjava.vscode-maven-0.44.0/resources/icons/dark
84	./.vscode/extensions/vscjava.vscode-maven-0.44.0/resources/icons
11500	./.vscode/extensions/vscjava.vscode-maven-0.44.0/resources
1464	./.vscode/extensions/vscjava.vscode-maven-0.44.0/dist
18520	./.vscode/extensions/vscjava.vscode-maven-0.44.0
52	./.vscode/extensions/vscjava.vscode-java-pack-0.25.15/webview-resources
40	./.vscode/extensions/vscjava.vscode-java-pack-0.25.15/release-notes
1008	./.vscode/extensions/vscjava.vscode-java-pack-0.25.15/out/assets/java-runtime
1620	./.vscode/extensions/vscjava.vscode-java-pack-0.25.15/out/assets/welcome
540	./.vscode/extensions/vscjava.vscode-java-pack-0.25.15/out/assets/ext-guide
836	./.vscode/extensions/vscjava.vscode-java-pack-0.25.15/out/assets/classpath
776	./.vscode/extensions/vscjava.vscode-java-pack-0.25.15/out/assets/beginner-tips
556	./.vscode/extensions/vscjava.vscode-java-pack-0.25.15/out/assets/install-jdk
1648	./.vscode/extensions/vscjava.vscode-java-pack-0.25.15/out/assets/formatter-settings
536	./.vscode/extensions/vscjava.vscode-java-pack-0.25.15/out/assets/overview
7524	./.vscode/extensions/vscjava.vscode-java-pack-0.25.15/out/assets
8536	./.vscode/extensions/vscjava.vscode-java-pack-0.25.15/out
348	./.vscode/extensions/vscjava.vscode-java-pack-0.25.15/walkthrough
9076	./.vscode/extensions/vscjava.vscode-java-pack-0.25.15
556	./.vscode/extensions/formulahendry.code-runner-0.12.1/images
16	./.vscode/extensions/formulahendry.code-runner-0.12.1/.github/ISSUE_TEMPLATE
8	./.vscode/extensions/formulahendry.code-runner-0.12.1/.github/workflows
28	./.vscode/extensions/formulahendry.code-runner-0.12.1/.github
44	./.vscode/extensions/formulahendry.code-runner-0.12.1/out/src
48	./.vscode/extensions/formulahendry.code-runner-0.12.1/out
76	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/micromatch
28	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/tree-kill
300	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/zone.js/dist
52	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/zone.js/lib/zone-spec
16	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/zone.js/lib/node
12	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/zone.js/lib/jasmine
48	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/zone.js/lib/browser
12	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/zone.js/lib/mocha
28	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/zone.js/lib/common
232	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/zone.js/lib
592	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/zone.js
64	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/picomatch/lib
108	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/picomatch
28	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/fill-range
32	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/braces/lib
84	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/braces
36	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/to-regex-range
24	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/is-number
8	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/applicationinsights/typings/globals/node
8	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/applicationinsights/typings/globals/sinon
8	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/applicationinsights/typings/globals/mocha
28	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/applicationinsights/typings/globals
32	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/applicationinsights/typings
80	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/applicationinsights/Schema/PublicSchema
88	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/applicationinsights/Schema
72	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/applicationinsights/Library
80	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/applicationinsights/AutoCollection
320	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules/applicationinsights
1300	./.vscode/extensions/formulahendry.code-runner-0.12.1/node_modules
8	./.vscode/extensions/formulahendry.code-runner-0.12.1/syntaxes
2000	./.vscode/extensions/formulahendry.code-runner-0.12.1
180	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/bin/messages/zh-tw
384	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/bin/messages/ru
248	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/bin/messages/pl
252	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/bin/messages/de
256	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/bin/messages/ko
248	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/bin/messages/it
228	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/bin/messages/tr
228	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/bin/messages/cs
240	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/bin/messages/es
244	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/bin/messages/fr
180	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/bin/messages/zh-cn
276	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/bin/messages/ja
236	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/bin/messages/pt-br
3204	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/bin/messages
41716	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/bin
75776	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/debugAdapters/bin
75780	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/debugAdapters
121800	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/LLVM/bin
121804	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/LLVM
136	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/assets
36	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/src/Debugger
12	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/src/LanguageServer/Providers
64	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/src/LanguageServer
12	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/src/SSH/TargetsView
32	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/src/SSH
5572	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/src
16	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/schema/zh-tw
20	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/schema/ru
20	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/schema/pl
20	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/schema/de
20	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/schema/ko
20	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/schema/it
20	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/schema/tr
20	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/schema/cs
20	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/schema/es
20	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/schema/fr
16	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/schema/zh-cn
20	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/schema/ja
20	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/schema/pt-br
256	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/schema
36	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/zh-tw/ui
44	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/zh-tw
44	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/ru/ui
52	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/ru
40	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/pl/ui
48	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/pl
40	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/de/ui
48	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/de
40	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/ko/ui
48	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/ko
40	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/it/ui
48	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/it
40	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/tr/ui
48	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/tr
40	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/cs/ui
48	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/cs
40	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/es/ui
48	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/es
40	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/fr/ui
48	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/fr
36	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/zh-cn/ui
44	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/zh-cn
40	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/ja/ui
48	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/ja
40	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/pt-br/ui
48	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html/pt-br
624	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/html
148	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/walkthrough/images
284	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/walkthrough/installcompiler
60	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/walkthrough/devcommandprompt
172	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/walkthrough/debugconfig
668	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/walkthrough
20	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist/ui
7816	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/dist
148	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/walkthrough/images
24	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/walkthrough/installcompiler
8	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/walkthrough/devcommandprompt
16	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/walkthrough/debugconfig
200	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/walkthrough
40	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64/ui
250408	./.vscode/extensions/ms-vscode.cpptools-1.18.5-linux-x64
12	./.vscode/extensions/vscjava.vscode-java-test-0.40.1/resources
1088	./.vscode/extensions/vscjava.vscode-java-test-0.40.1/dist
2168	./.vscode/extensions/vscjava.vscode-java-test-0.40.1/server
3444	./.vscode/extensions/vscjava.vscode-java-test-0.40.1
8	./.vscode/extensions/vscjava.vscode-java-dependency-0.23.4/templates/invisible-project/src
8	./.vscode/extensions/vscjava.vscode-java-dependency-0.23.4/templates/invisible-project/.vscode
24	./.vscode/extensions/vscjava.vscode-java-dependency-0.23.4/templates/invisible-project
28	./.vscode/extensions/vscjava.vscode-java-dependency-0.23.4/templates
1048	./.vscode/extensions/vscjava.vscode-java-dependency-0.23.4/dist
12	./.vscode/extensions/vscjava.vscode-java-dependency-0.23.4/icons/light
12	./.vscode/extensions/vscjava.vscode-java-dependency-0.23.4/icons/dark
28	./.vscode/extensions/vscjava.vscode-java-dependency-0.23.4/icons
68	./.vscode/extensions/vscjava.vscode-java-dependency-0.23.4/server
1324	./.vscode/extensions/vscjava.vscode-java-dependency-0.23.4
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/pt-PT
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/ru
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/pl
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/de
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/pt-BR
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/ko
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/it
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/tr
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/cs
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/sv
12	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/enu
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/zh-Hant
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/zh-Hans
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/es
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/fr
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/nl
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/ja
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff/hu
288	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc/xliff
292	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/loc
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/images
8864	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/dist/runtimes/linux-x64/native
8868	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/dist/runtimes/linux-x64
5876	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/dist/runtimes/win-x64/native
5880	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/dist/runtimes/win-x64
4656	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/dist/runtimes/win-x86/native
4660	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/dist/runtimes/win-x86
5880	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/dist/runtimes/win10-arm/native
5884	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/dist/runtimes/win10-arm
8624	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/dist/runtimes/osx-x64/native
8628	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/dist/runtimes/osx-x64
33924	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/dist/runtimes
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/dist/util
12	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/dist/models
69084	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/dist/bundledModels
932	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/dist/web
105656	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/dist
12	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@nodelib/fs.scandir/out/types
28	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@nodelib/fs.scandir/out/providers
12	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@nodelib/fs.scandir/out/adapters
20	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@nodelib/fs.scandir/out/utils
100	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@nodelib/fs.scandir/out
120	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@nodelib/fs.scandir
12	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@nodelib/fs.stat/out/types
20	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@nodelib/fs.stat/out/providers
12	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@nodelib/fs.stat/out/adapters
64	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@nodelib/fs.stat/out
80	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@nodelib/fs.stat
12	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@nodelib/fs.walk/out/types
36	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@nodelib/fs.walk/out/readers
36	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@nodelib/fs.walk/out/providers
104	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@nodelib/fs.walk/out
124	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@nodelib/fs.walk
328	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@nodelib
48	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/minimatch
72	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/micromatch
20	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/minimalistic-assert
24	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@ts-morph/bootstrap/dist-deno
24	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@ts-morph/bootstrap/dist
24	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@ts-morph/bootstrap/lib
92	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@ts-morph/bootstrap
10620	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@ts-morph/common/dist
512	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@ts-morph/common/lib
11148	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@ts-morph/common
11244	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/@ts-morph
24	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/browserify-sign/browser
48	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/browserify-sign
36	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/randomfill
32	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/fastq/test
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/fastq/.github/workflows
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/fastq/.github
96	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/fastq
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/reusify/benchmarks
48	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/reusify
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/concat-map/example
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/concat-map/test
40	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/concat-map
20	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/is-extglob
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/mkdirp/bin
28	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/mkdirp/lib
68	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/mkdirp
560	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/pako/dist
216	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/pako/lib/zlib
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/pako/lib/utils
264	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/pako/lib
856	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/pako
92	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/create-ecdh/node_modules/bn.js/lib
112	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/create-ecdh/node_modules/bn.js
116	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/create-ecdh/node_modules
144	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/create-ecdh
88	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/public-encrypt/test
92	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/public-encrypt/node_modules/bn.js/lib
112	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/public-encrypt/node_modules/bn.js
116	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/public-encrypt/node_modules
252	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/public-encrypt
36	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/randombytes
56	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/path-browserify/test
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/path-browserify/.github
108	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/path-browserify
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/miller-rabin/bin
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/miller-rabin/test
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/miller-rabin/lib
92	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/miller-rabin/node_modules/bn.js/lib
112	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/miller-rabin/node_modules/bn.js
116	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/miller-rabin/node_modules
164	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/miller-rabin
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/string_decoder/lib
32	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/string_decoder
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/brorand/test
28	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/brorand
28	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/ripemd160
52	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/readable-stream/lib/internal/streams
56	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/readable-stream/lib/internal
140	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/readable-stream/lib
196	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/readable-stream
64	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/safer-buffer
32	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/browserify-des
36	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/browserify-zlib/src
36	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/browserify-zlib/lib
228	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/browserify-zlib
68	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/picomatch/lib
120	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/picomatch
32	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/crypto-browserify/example
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/crypto-browserify/test/node
64	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/crypto-browserify/test
124	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/crypto-browserify
12	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/asn1.js/lib/asn1/constants
20	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/asn1.js/lib/asn1/encoders
20	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/asn1.js/lib/asn1/decoders
40	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/asn1.js/lib/asn1/base
100	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/asn1.js/lib/asn1
108	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/asn1.js/lib
92	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/asn1.js/node_modules/bn.js/lib
112	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/asn1.js/node_modules/bn.js
116	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/asn1.js/node_modules
244	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/asn1.js
20	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/run-parallel
28	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/create-hmac
36	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/parse-asn1
36	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/create-hash
24	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/brace-expansion
24	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/is-glob
32	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/browserify-cipher
20	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/hash-base
20	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/evp_bytestokey
28	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/fill-range
32	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/braces/lib
84	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/braces
12	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/fast-glob/out/types
28	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/fast-glob/out/readers
20	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/fast-glob/out/providers/matchers
12	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/fast-glob/out/providers/transformers
28	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/fast-glob/out/providers/filters
96	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/fast-glob/out/providers
72	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/fast-glob/out/utils
20	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/fast-glob/out/managers
252	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/fast-glob/out
292	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/fast-glob
28	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/queue-microtask
20	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/stream-browserify/test
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/stream-browserify/.github
64	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/stream-browserify
28	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/util-deprecate
24	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/hmac-drbg/test/fixtures
32	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/hmac-drbg/test
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/hmac-drbg/lib
60	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/hmac-drbg
20	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/merge2
36	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/elliptic/lib/elliptic/precomputed
20	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/elliptic/lib/elliptic/ec
64	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/elliptic/lib/elliptic/curve
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/elliptic/lib/elliptic/eddsa
152	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/elliptic/lib/elliptic
160	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/elliptic/lib
92	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/elliptic/node_modules/bn.js/lib
112	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/elliptic/node_modules/bn.js
116	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/elliptic/node_modules
292	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/elliptic
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/sha.js/test
76	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/sha.js
20	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/diffie-hellman/lib
92	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/diffie-hellman/node_modules/bn.js/lib
112	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/diffie-hellman/node_modules/bn.js
116	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/diffie-hellman/node_modules
164	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/diffie-hellman
12	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/buffer-xor/test
48	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/buffer-xor
36	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/to-regex-range
36	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/cipher-base
40	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/browserify-aes/modes
100	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/browserify-aes
20	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/browserify-rsa
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/minimalistic-crypto-utils/test
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/minimalistic-crypto-utils/lib
36	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/minimalistic-crypto-utils
24	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/md5.js
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/balanced-match/.github
28	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/balanced-match
16	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/hash.js/test
36	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/hash.js/lib/hash/sha
64	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/hash.js/lib/hash
76	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/hash.js/lib
112	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/hash.js
24	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/is-number
32	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/des.js/test
28	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/des.js/lib/des
36	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/des.js/lib
92	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/des.js
28	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/pbkdf2/lib
52	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/pbkdf2
48	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/safe-buffer
32	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/glob-parent
96	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/bn.js/lib
116	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/bn.js
24	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules/inherits
16932	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript/node_modules
28904	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/ms-vsintellicode-typescript
20	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/@vsintellicode/typescript-intellicode-plugin/lib
28	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/@vsintellicode/typescript-intellicode-plugin
32	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules/@vsintellicode
28940	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/node_modules
8	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30/cache
135228	./.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.30
648252	./.vscode/extensions
648264	./.vscode
4	./Public
28	./.gnome/apps
32	./.gnome
556	./programming/DSA
12	./programming/.vscode
108	./programming/C/Arrays
76	./programming/C/Lab-9
8	./programming/C/Area /GOTO
776	./programming/C/Area 
52	./programming/C/Practice
140	./programming/C/Lab-6
8	./programming/C/.vscode
4	./programming/C/Java
192	./programming/C/Pps_Assignment_2
176	./programming/C/Lab-8
4	./programming/C/lab-1
124	./programming/C/Lab-5
104	./programming/C/Lab-7
1936	./programming/C
152	./programming/Java
2660	./programming
7296	./Downloads/Playing With Characters | HackerRank_files
2400	./Downloads/mysql-connector-j_8.3.0-1ubuntu22.04_all
7220	./Downloads/program_files
750216	./Downloads
8	./.ssh
4	./.cache/ibus-table
540	./.cache/thumbnails/fail/gnome-thumbnail-factory
544	./.cache/thumbnails/fail
12360	./.cache/thumbnails/large
1080	./.cache/thumbnails/normal
13988	./.cache/thumbnails
4	./.cache/thunderbird/v6z1rb4w.default
3524	./.cache/thunderbird/h4eru2px.default-release/startupCache
4	./.cache/thunderbird/h4eru2px.default-release/cache2/doomed
752	./.cache/thunderbird/h4eru2px.default-release/cache2/entries
760	./.cache/thunderbird/h4eru2px.default-release/cache2
4	./.cache/thunderbird/h4eru2px.default-release/safebrowsing/google4
8	./.cache/thunderbird/h4eru2px.default-release/safebrowsing
4296	./.cache/thunderbird/h4eru2px.default-release
4304	./.cache/thunderbird
1104	./.cache/obexd
4	./.cache/totem/media
4	./.cache/totem/stream-buffer
12	./.cache/totem
8	./.cache/ubuntu-report
4	./.cache/remmina
20	./.cache/ibus/bus
24	./.cache/ibus
1376	./.cache/mozilla/firefox/dniunrby.default-release/personality-provider
108	./.cache/mozilla/firefox/dniunrby.default-release/thumbnails
12608	./.cache/mozilla/firefox/dniunrby.default-release/startupCache
24	./.cache/mozilla/firefox/dniunrby.default-release/cache2/doomed
422680	./.cache/mozilla/firefox/dniunrby.default-release/cache2/entries
280	./.cache/mozilla/firefox/dniunrby.default-release/cache2/trash1942731507
423392	./.cache/mozilla/firefox/dniunrby.default-release/cache2
12	./.cache/mozilla/firefox/dniunrby.default-release/settings/main/ms-language-packs/browser/newtab
16	./.cache/mozilla/firefox/dniunrby.default-release/settings/main/ms-language-packs/browser
20	./.cache/mozilla/firefox/dniunrby.default-release/settings/main/ms-language-packs
24	./.cache/mozilla/firefox/dniunrby.default-release/settings/main
28	./.cache/mozilla/firefox/dniunrby.default-release/settings
13080	./.cache/mozilla/firefox/dniunrby.default-release/safebrowsing/google4
15240	./.cache/mozilla/firefox/dniunrby.default-release/safebrowsing
452784	./.cache/mozilla/firefox/dniunrby.default-release
4	./.cache/mozilla/firefox/rxdgp9tl.default
452792	./.cache/mozilla/firefox
452796	./.cache/mozilla
512	./.cache/google-chrome/Default/Cache/Cache_Data/index-dir
344780	./.cache/google-chrome/Default/Cache/Cache_Data
344784	./.cache/google-chrome/Default/Cache
4	./.cache/google-chrome/Default/Storage/ext/nmmhkkegccagdldgiimedpiccmgmieda/def/Cache/Cache_Data
8	./.cache/google-chrome/Default/Storage/ext/nmmhkkegccagdldgiimedpiccmgmieda/def/Cache
8	./.cache/google-chrome/Default/Storage/ext/nmmhkkegccagdldgiimedpiccmgmieda/def/Code Cache/js/index-dir
16	./.cache/google-chrome/Default/Storage/ext/nmmhkkegccagdldgiimedpiccmgmieda/def/Code Cache/js
8	./.cache/google-chrome/Default/Storage/ext/nmmhkkegccagdldgiimedpiccmgmieda/def/Code Cache/wasm/index-dir
16	./.cache/google-chrome/Default/Storage/ext/nmmhkkegccagdldgiimedpiccmgmieda/def/Code Cache/wasm
36	./.cache/google-chrome/Default/Storage/ext/nmmhkkegccagdldgiimedpiccmgmieda/def/Code Cache
48	./.cache/google-chrome/Default/Storage/ext/nmmhkkegccagdldgiimedpiccmgmieda/def
52	./.cache/google-chrome/Default/Storage/ext/nmmhkkegccagdldgiimedpiccmgmieda
56	./.cache/google-chrome/Default/Storage/ext
60	./.cache/google-chrome/Default/Storage
96	./.cache/google-chrome/Default/Code Cache/js/index-dir
305624	./.cache/google-chrome/Default/Code Cache/js
8	./.cache/google-chrome/Default/Code Cache/wasm/index-dir
16	./.cache/google-chrome/Default/Code Cache/wasm
305644	./.cache/google-chrome/Default/Code Cache
650492	./.cache/google-chrome/Default
650496	./.cache/google-chrome
4	./.cache/shotwell/thumbs/thumbs360
4	./.cache/shotwell/thumbs/thumbs128
12	./.cache/shotwell/thumbs
20	./.cache/shotwell
12	./.cache/update-manager-core
2412	./.cache/fontconfig
52	./.cache/mesa_shader_cache/5a
36	./.cache/mesa_shader_cache/19
36	./.cache/mesa_shader_cache/4b
60	./.cache/mesa_shader_cache/41
60	./.cache/mesa_shader_cache/29
28	./.cache/mesa_shader_cache/8e
60	./.cache/mesa_shader_cache/4c
56	./.cache/mesa_shader_cache/60
44	./.cache/mesa_shader_cache/d6
48	./.cache/mesa_shader_cache/e6
64	./.cache/mesa_shader_cache/ac
20	./.cache/mesa_shader_cache/fd
48	./.cache/mesa_shader_cache/57
72	./.cache/mesa_shader_cache/f4
40	./.cache/mesa_shader_cache/25
40	./.cache/mesa_shader_cache/80
48	./.cache/mesa_shader_cache/10
56	./.cache/mesa_shader_cache/d2
28	./.cache/mesa_shader_cache/34
48	./.cache/mesa_shader_cache/c8
64	./.cache/mesa_shader_cache/e3
48	./.cache/mesa_shader_cache/b5
68	./.cache/mesa_shader_cache/53
48	./.cache/mesa_shader_cache/13
36	./.cache/mesa_shader_cache/05
56	./.cache/mesa_shader_cache/a8
48	./.cache/mesa_shader_cache/49
60	./.cache/mesa_shader_cache/9c
44	./.cache/mesa_shader_cache/48
60	./.cache/mesa_shader_cache/f5
32	./.cache/mesa_shader_cache/40
32	./.cache/mesa_shader_cache/de
36	./.cache/mesa_shader_cache/bb
68	./.cache/mesa_shader_cache/d4
24	./.cache/mesa_shader_cache/45
28	./.cache/mesa_shader_cache/c9
56	./.cache/mesa_shader_cache/46
44	./.cache/mesa_shader_cache/f1
52	./.cache/mesa_shader_cache/e9
52	./.cache/mesa_shader_cache/e5
40	./.cache/mesa_shader_cache/5e
32	./.cache/mesa_shader_cache/0d
44	./.cache/mesa_shader_cache/67
32	./.cache/mesa_shader_cache/92
44	./.cache/mesa_shader_cache/c7
40	./.cache/mesa_shader_cache/70
40	./.cache/mesa_shader_cache/a4
28	./.cache/mesa_shader_cache/ec
36	./.cache/mesa_shader_cache/a9
48	./.cache/mesa_shader_cache/1a
32	./.cache/mesa_shader_cache/0c
16	./.cache/mesa_shader_cache/b7
48	./.cache/mesa_shader_cache/7d
40	./.cache/mesa_shader_cache/0b
56	./.cache/mesa_shader_cache/28
52	./.cache/mesa_shader_cache/dc
36	./.cache/mesa_shader_cache/85
52	./.cache/mesa_shader_cache/f3
40	./.cache/mesa_shader_cache/cd
36	./.cache/mesa_shader_cache/01
32	./.cache/mesa_shader_cache/23
40	./.cache/mesa_shader_cache/d3
28	./.cache/mesa_shader_cache/30
40	./.cache/mesa_shader_cache/e1
48	./.cache/mesa_shader_cache/62
40	./.cache/mesa_shader_cache/0e
28	./.cache/mesa_shader_cache/76
20	./.cache/mesa_shader_cache/4d
48	./.cache/mesa_shader_cache/2b
36	./.cache/mesa_shader_cache/83
64	./.cache/mesa_shader_cache/74
36	./.cache/mesa_shader_cache/66
52	./.cache/mesa_shader_cache/61
44	./.cache/mesa_shader_cache/55
76	./.cache/mesa_shader_cache/6f
24	./.cache/mesa_shader_cache/fe
52	./.cache/mesa_shader_cache/94
36	./.cache/mesa_shader_cache/21
56	./.cache/mesa_shader_cache/93
36	./.cache/mesa_shader_cache/df
32	./.cache/mesa_shader_cache/cc
32	./.cache/mesa_shader_cache/c5
64	./.cache/mesa_shader_cache/4f
28	./.cache/mesa_shader_cache/38
36	./.cache/mesa_shader_cache/56
32	./.cache/mesa_shader_cache/1f
68	./.cache/mesa_shader_cache/7e
60	./.cache/mesa_shader_cache/6d
28	./.cache/mesa_shader_cache/b0
52	./.cache/mesa_shader_cache/84
28	./.cache/mesa_shader_cache/71
40	./.cache/mesa_shader_cache/d7
44	./.cache/mesa_shader_cache/20
48	./.cache/mesa_shader_cache/8f
28	./.cache/mesa_shader_cache/e0
36	./.cache/mesa_shader_cache/b2
68	./.cache/mesa_shader_cache/f8
32	./.cache/mesa_shader_cache/58
60	./.cache/mesa_shader_cache/59
44	./.cache/mesa_shader_cache/81
20	./.cache/mesa_shader_cache/9e
88	./.cache/mesa_shader_cache/cf
56	./.cache/mesa_shader_cache/88
28	./.cache/mesa_shader_cache/44
52	./.cache/mesa_shader_cache/79
68	./.cache/mesa_shader_cache/04
28	./.cache/mesa_shader_cache/11
40	./.cache/mesa_shader_cache/00
40	./.cache/mesa_shader_cache/9f
52	./.cache/mesa_shader_cache/15
60	./.cache/mesa_shader_cache/36
52	./.cache/mesa_shader_cache/a7
40	./.cache/mesa_shader_cache/6a
68	./.cache/mesa_shader_cache/2f
24	./.cache/mesa_shader_cache/ea
48	./.cache/mesa_shader_cache/f6
40	./.cache/mesa_shader_cache/fb
52	./.cache/mesa_shader_cache/75
52	./.cache/mesa_shader_cache/a3
24	./.cache/mesa_shader_cache/3c
20	./.cache/mesa_shader_cache/d1
28	./.cache/mesa_shader_cache/c3
56	./.cache/mesa_shader_cache/a6
68	./.cache/mesa_shader_cache/3d
72	./.cache/mesa_shader_cache/27
48	./.cache/mesa_shader_cache/16
64	./.cache/mesa_shader_cache/bc
80	./.cache/mesa_shader_cache/5b
36	./.cache/mesa_shader_cache/35
44	./.cache/mesa_shader_cache/90
24	./.cache/mesa_shader_cache/b3
20	./.cache/mesa_shader_cache/b1
76	./.cache/mesa_shader_cache/26
32	./.cache/mesa_shader_cache/37
44	./.cache/mesa_shader_cache/3f
36	./.cache/mesa_shader_cache/06
32	./.cache/mesa_shader_cache/91
44	./.cache/mesa_shader_cache/ad
28	./.cache/mesa_shader_cache/e7
64	./.cache/mesa_shader_cache/2e
24	./.cache/mesa_shader_cache/e2
24	./.cache/mesa_shader_cache/d5
64	./.cache/mesa_shader_cache/86
36	./.cache/mesa_shader_cache/dd
40	./.cache/mesa_shader_cache/17
64	./.cache/mesa_shader_cache/af
36	./.cache/mesa_shader_cache/a2
44	./.cache/mesa_shader_cache/6b
64	./.cache/mesa_shader_cache/32
48	./.cache/mesa_shader_cache/c6
32	./.cache/mesa_shader_cache/65
52	./.cache/mesa_shader_cache/c0
32	./.cache/mesa_shader_cache/bd
44	./.cache/mesa_shader_cache/9a
52	./.cache/mesa_shader_cache/ca
60	./.cache/mesa_shader_cache/b9
32	./.cache/mesa_shader_cache/aa
24	./.cache/mesa_shader_cache/9b
24	./.cache/mesa_shader_cache/77
44	./.cache/mesa_shader_cache/ae
16	./.cache/mesa_shader_cache/ed
28	./.cache/mesa_shader_cache/52
48	./.cache/mesa_shader_cache/78
56	./.cache/mesa_shader_cache/1d
56	./.cache/mesa_shader_cache/43
32	./.cache/mesa_shader_cache/5d
48	./.cache/mesa_shader_cache/2a
52	./.cache/mesa_shader_cache/f9
68	./.cache/mesa_shader_cache/6e
48	./.cache/mesa_shader_cache/f0
60	./.cache/mesa_shader_cache/da
60	./.cache/mesa_shader_cache/07
48	./.cache/mesa_shader_cache/33
36	./.cache/mesa_shader_cache/8d
28	./.cache/mesa_shader_cache/ee
28	./.cache/mesa_shader_cache/7f
36	./.cache/mesa_shader_cache/50
40	./.cache/mesa_shader_cache/12
60	./.cache/mesa_shader_cache/c2
24	./.cache/mesa_shader_cache/47
44	./.cache/mesa_shader_cache/98
36	./.cache/mesa_shader_cache/63
36	./.cache/mesa_shader_cache/09
52	./.cache/mesa_shader_cache/08
36	./.cache/mesa_shader_cache/f7
52	./.cache/mesa_shader_cache/54
56	./.cache/mesa_shader_cache/03
80	./.cache/mesa_shader_cache/8a
40	./.cache/mesa_shader_cache/39
44	./.cache/mesa_shader_cache/1e
40	./.cache/mesa_shader_cache/a0
48	./.cache/mesa_shader_cache/ce
40	./.cache/mesa_shader_cache/4e
44	./.cache/mesa_shader_cache/e4
52	./.cache/mesa_shader_cache/89
44	./.cache/mesa_shader_cache/95
52	./.cache/mesa_shader_cache/db
60	./.cache/mesa_shader_cache/b4
44	./.cache/mesa_shader_cache/8b
56	./.cache/mesa_shader_cache/d0
60	./.cache/mesa_shader_cache/cb
44	./.cache/mesa_shader_cache/97
20	./.cache/mesa_shader_cache/ef
52	./.cache/mesa_shader_cache/4a
44	./.cache/mesa_shader_cache/7c
40	./.cache/mesa_shader_cache/ab
44	./.cache/mesa_shader_cache/42
64	./.cache/mesa_shader_cache/eb
52	./.cache/mesa_shader_cache/0f
36	./.cache/mesa_shader_cache/7a
48	./.cache/mesa_shader_cache/64
36	./.cache/mesa_shader_cache/72
32	./.cache/mesa_shader_cache/be
68	./.cache/mesa_shader_cache/bf
40	./.cache/mesa_shader_cache/c1
44	./.cache/mesa_shader_cache/d9
72	./.cache/mesa_shader_cache/99
44	./.cache/mesa_shader_cache/02
68	./.cache/mesa_shader_cache/5f
28	./.cache/mesa_shader_cache/14
24	./.cache/mesa_shader_cache/51
28	./.cache/mesa_shader_cache/3e
36	./.cache/mesa_shader_cache/f2
36	./.cache/mesa_shader_cache/b6
28	./.cache/mesa_shader_cache/22
44	./.cache/mesa_shader_cache/6c
48	./.cache/mesa_shader_cache/18
48	./.cache/mesa_shader_cache/ff
32	./.cache/mesa_shader_cache/fc
44	./.cache/mesa_shader_cache/3a
52	./.cache/mesa_shader_cache/7b
44	./.cache/mesa_shader_cache/87
68	./.cache/mesa_shader_cache/8c
44	./.cache/mesa_shader_cache/c4
44	./.cache/mesa_shader_cache/5c
44	./.cache/mesa_shader_cache/3b
32	./.cache/mesa_shader_cache/a1
64	./.cache/mesa_shader_cache/1b
36	./.cache/mesa_shader_cache/a5
28	./.cache/mesa_shader_cache/69
44	./.cache/mesa_shader_cache/d8
60	./.cache/mesa_shader_cache/24
40	./.cache/mesa_shader_cache/96
60	./.cache/mesa_shader_cache/2c
56	./.cache/mesa_shader_cache/e8
36	./.cache/mesa_shader_cache/b8
56	./.cache/mesa_shader_cache/2d
48	./.cache/mesa_shader_cache/68
60	./.cache/mesa_shader_cache/9d
56	./.cache/mesa_shader_cache/31
60	./.cache/mesa_shader_cache/73
44	./.cache/mesa_shader_cache/0a
24	./.cache/mesa_shader_cache/ba
56	./.cache/mesa_shader_cache/82
64	./.cache/mesa_shader_cache/1c
44	./.cache/mesa_shader_cache/fa
12744	./.cache/mesa_shader_cache
4	./.cache/evolution/tasks/trash
8	./.cache/evolution/tasks
4	./.cache/evolution/mail/trash
8	./.cache/evolution/mail
4	./.cache/evolution/sources/trash
8	./.cache/evolution/sources
4	./.cache/evolution/calendar/trash
8	./.cache/evolution/calendar
4	./.cache/evolution/memos/trash
8	./.cache/evolution/memos
4	./.cache/evolution/addressbook/trash
8	./.cache/evolution/addressbook
52	./.cache/evolution
12	./.cache/rhythmbox/album-art
8	./.cache/rhythmbox/alternate-toolbar
24	./.cache/rhythmbox
4	./.cache/libgweather
196	./.cache/tooling/gradle
200	./.cache/tooling
4	./.cache/org.remmina.Remmina
772	./.cache/gstreamer-1.0
4	./.cache/yelp/WebKitCache/Version 16/Blobs
12	./.cache/yelp/WebKitCache/Version 16
16	./.cache/yelp/WebKitCache
8	./.cache/yelp/CacheStorage
28	./.cache/yelp
9500	./.cache/tracker
2228	./.cache/vscode-cpptools/ipch/4c9554d01f2eccbc
2484	./.cache/vscode-cpptools/ipch/73923c062e883c51
2484	./.cache/vscode-cpptools/ipch/d31fd26fef57ae17
2484	./.cache/vscode-cpptools/ipch/a818927f464642b
2484	./.cache/vscode-cpptools/ipch/ca57b067a28b0f7
2484	./.cache/vscode-cpptools/ipch/d1abcdd493ffbe30
2228	./.cache/vscode-cpptools/ipch/b7d964dc9eef2d16
2484	./.cache/vscode-cpptools/ipch/322b04f3c5f3e64d
2228	./.cache/vscode-cpptools/ipch/597badff9e54b187
2484	./.cache/vscode-cpptools/ipch/7c5c280df479228f
2740	./.cache/vscode-cpptools/ipch/70ececbb1eda03f9
2484	./.cache/vscode-cpptools/ipch/185d12391e171cd9
2484	./.cache/vscode-cpptools/ipch/73bdb7178a4b8e95
2484	./.cache/vscode-cpptools/ipch/ee37859aa8a0739
2484	./.cache/vscode-cpptools/ipch/fdb86b2d00ced9d7
2228	./.cache/vscode-cpptools/ipch/9e3255cefec45393
2484	./.cache/vscode-cpptools/ipch/c3a63bc02f02dfcc
2484	./.cache/vscode-cpptools/ipch/6a342c99b00f6901
2484	./.cache/vscode-cpptools/ipch/caeffb36a7793d32
8	./.cache/vscode-cpptools/ipch/6888e7570c3e9e53
2228	./.cache/vscode-cpptools/ipch/83b83caf2868406e
2484	./.cache/vscode-cpptools/ipch/3543c4bde059b788
2228	./.cache/vscode-cpptools/ipch/f94701b8752cb5d3
2228	./.cache/vscode-cpptools/ipch/9af00affe691dd3d
2228	./.cache/vscode-cpptools/ipch/75842dcdfc189314
2484	./.cache/vscode-cpptools/ipch/8008d8940a867bd4
2228	./.cache/vscode-cpptools/ipch/513204243034e14d
2228	./.cache/vscode-cpptools/ipch/d1120b0479869dc3
2228	./.cache/vscode-cpptools/ipch/ac51594cde363cd4
2228	./.cache/vscode-cpptools/ipch/382210cfc579d874
2228	./.cache/vscode-cpptools/ipch/87874d59bb32e2ec
71460	./.cache/vscode-cpptools/ipch
1932	./.cache/vscode-cpptools/df0a5d13dd4893edfde6a0fab2f84bde
1620	./.cache/vscode-cpptools/a7889fa068cdc7d3f4682c4d5d854413
75016	./.cache/vscode-cpptools
1235160	./.cache
17512	./Videos
4	./.gphoto
4	./.local/share/ibus-table
32	./.local/share/applications
8	./.local/share/vlc
4	./.local/share/flatpak/db
8	./.local/share/flatpak
4	./.local/share/gnome-mines/scores
8	./.local/share/gnome-mines
192	./.local/share/xorg
4	./.local/share/klavaro/ksc
20	./.local/share/klavaro
28	./.local/share/icc
4	./.local/share/totem
20	./.local/share/CMakeTools
688	./.local/share/Trash/info
4	./.local/share/Trash/expunged
4	./.local/share/Trash/files/Web Developement Course
109500	./.local/share/Trash/files
110196	./.local/share/Trash
4	./.local/share/remmina
4	./.local/share/nautilus/scripts
8	./.local/share/nautilus
12	./.local/share/keyrings
8	./.local/share/sounds/__custom
12	./.local/share/sounds
4	./.local/share/gnome-settings-daemon
4	./.local/share/webkitgtk/deviceidhashsalts/1
8	./.local/share/webkitgtk/deviceidhashsalts
8	./.local/share/webkitgtk/storage
4	./.local/share/webkitgtk/localstorage
24	./.local/share/webkitgtk
252	./.local/share/shotwell/data
256	./.local/share/shotwell
8	./.local/share/desktop-directories
8	./.local/share/evolution/tasks/system
4	./.local/share/evolution/tasks/trash
16	./.local/share/evolution/tasks
4	./.local/share/evolution/mail/trash
8	./.local/share/evolution/mail
8	./.local/share/evolution/calendar/system
4	./.local/share/evolution/calendar/trash
16	./.local/share/evolution/calendar
4	./.local/share/evolution/memos/trash
8	./.local/share/evolution/memos
4	./.local/share/evolution/addressbook/system/photos
92	./.local/share/evolution/addressbook/system
4	./.local/share/evolution/addressbook/trash
100	./.local/share/evolution/addressbook
152	./.local/share/evolution
12	./.local/share/rhythmbox
348	./.local/share/gvfs-metadata
4	./.local/share/gnome-sudoku/finished
8	./.local/share/gnome-sudoku
92	./.local/share/grilo-plugins
8	./.local/share/gnome-shell
4	./.local/share/gstreamer-1.0/presets
8	./.local/share/gstreamer-1.0
92	./.local/share/icons/hicolor/128x128/apps
96	./.local/share/icons/hicolor/128x128
28	./.local/share/icons/hicolor/32x32/apps
32	./.local/share/icons/hicolor/32x32
236	./.local/share/icons/hicolor/256x256/apps
240	./.local/share/icons/hicolor/256x256
36	./.local/share/icons/hicolor/48x48/apps
40	./.local/share/icons/hicolor/48x48
24	./.local/share/icons/hicolor/512x512/apps
28	./.local/share/icons/hicolor/512x512
20	./.local/share/icons/hicolor/16x16/apps
24	./.local/share/icons/hicolor/16x16
464	./.local/share/icons/hicolor
468	./.local/share/icons
4552	./.local/share/tracker/data
4556	./.local/share/tracker
584	./.local/share/backgrounds
117592	./.local/share
117596	./.local
4	./.mozilla/extensions
284	./.mozilla/firefox/dniunrby.default-release/saved-telemetry-pings
4	./.mozilla/firefox/dniunrby.default-release/crashes/events
12	./.mozilla/firefox/dniunrby.default-release/crashes
1376	./.mozilla/firefox/dniunrby.default-release/personality-provider
4	./.mozilla/firefox/dniunrby.default-release/minidumps
4	./.mozilla/firefox/dniunrby.default-release/storage/to-be-removed
4	./.mozilla/firefox/dniunrby.default-release/storage/permanent/chrome/idb/3561288849sdhlie.files
4	./.mozilla/firefox/dniunrby.default-release/storage/permanent/chrome/idb/1451318868ntouromlalnodry--epcr.files
4	./.mozilla/firefox/dniunrby.default-release/storage/permanent/chrome/idb/1657114595AmcateirvtiSty.files
4	./.mozilla/firefox/dniunrby.default-release/storage/permanent/chrome/idb/2918063365piupsah.files
4	./.mozilla/firefox/dniunrby.default-release/storage/permanent/chrome/idb/2823318777ntouromlalnodry--naod.files
4	./.mozilla/firefox/dniunrby.default-release/storage/permanent/chrome/idb/3870112724rsegmnoittet-es.files/journals
820	./.mozilla/firefox/dniunrby.default-release/storage/permanent/chrome/idb/3870112724rsegmnoittet-es.files
11376	./.mozilla/firefox/dniunrby.default-release/storage/permanent/chrome/idb
11384	./.mozilla/firefox/dniunrby.default-release/storage/permanent/chrome
11388	./.mozilla/firefox/dniunrby.default-release/storage/permanent
4	./.mozilla/firefox/dniunrby.default-release/storage/temporary
32	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++leetcode.com/ls
40	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++leetcode.com
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.google.com^partitionKey=%28https%2Cstackoverflow.com%29/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.google.com^partitionKey=%28https%2Cstackoverflow.com%29
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.hackerrank.com/ls
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.hackerrank.com/idb/1852210819cgen_itkrca.files
52	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.hackerrank.com/idb
80	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.hackerrank.com
132	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++chat.openai.com/ls
140	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++chat.openai.com
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.google.com^partitionKey=%28https%2Cprogramiz.com%29/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.google.com^partitionKey=%28https%2Cprogramiz.com%29
4	./.mozilla/firefox/dniunrby.default-release/storage/default/moz-extension+++d7a7951f-e77b-4324-8cd8-063ea8b6812d^userContextId=4294967295/idb/3647222921wleabcEoxlt-eengsairo.files
52	./.mozilla/firefox/dniunrby.default-release/storage/default/moz-extension+++d7a7951f-e77b-4324-8cd8-063ea8b6812d^userContextId=4294967295/idb
60	./.mozilla/firefox/dniunrby.default-release/storage/default/moz-extension+++d7a7951f-e77b-4324-8cd8-063ea8b6812d^userContextId=4294967295
32	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/ls
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/idb/3271781254seigganraolt-s.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/idb/568386319wcanwec__bd.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/idb/1119037936ptbc_edte.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/idb/315746093sw.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/idb/3713173747_s_edmban.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/idb/2181795718meogdaerlo-ts.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/idb/3166453069wcaw.files
348	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/idb
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/19
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/213
44	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/130
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/29
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/227
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/57
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/170
32	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/202
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/10
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/237
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/3
80	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/198
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/1
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/139
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/53
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/13
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/149
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/49
32	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/48
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/164
40	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/191
40	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/189
128	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/103
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/108
28	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/245
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/67
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/92
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/145
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/254
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/28
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/132
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/253
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/110
44	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/186
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/177
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/182
292	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/210
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/74
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/217
68	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/55
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/21
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/171
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/229
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/241
12	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/38
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/203
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/56
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/212
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/208
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/165
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/234
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/135
56	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/0
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/20
28	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/114
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/169
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/224
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/175
40	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/36
40	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/251
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/16
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/185
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/26
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/152
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/117
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/86
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/159
28	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/178
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/160
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/226
164	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/6
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/140
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/78
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/176
40	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/233
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/50
28	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/12
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/131
28	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/47
36	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/124
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/193
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/98
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/63
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/54
32	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/188
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/141
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/39
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/232
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/168
40	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/95
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/187
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/214
92	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/181
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/154
164	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/153
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/97
60	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/195
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/150
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/197
44	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/134
44	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/151
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/109
48	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/14
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/51
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/209
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/221
40	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/22
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/147
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/87
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/250
40	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/244
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/225
40	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/157
32	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/174
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/24
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/249
40	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/96
348	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/68
36	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/148
348	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/9
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue/82
4444	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache/morgue
4616	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com/cache
5004	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++web.whatsapp.com
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++dev.mysql.com/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++dev.mysql.com
292	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.irctc.co.in/ls
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.irctc.co.in/idb/301792106ttes.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.irctc.co.in/idb/4235617677ioztoo.files
100	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.irctc.co.in/idb
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.irctc.co.in/cache/morgue/1
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.irctc.co.in/cache/morgue/177
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.irctc.co.in/cache/morgue/26
32	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.irctc.co.in/cache/morgue/250
56	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.irctc.co.in/cache/morgue/133
128	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.irctc.co.in/cache/morgue
212	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.irctc.co.in/cache
612	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.irctc.co.in
60	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.geeksforgeeks.org/ls
68	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.geeksforgeeks.org
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++myaadhaar.uidai.gov.in/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++myaadhaar.uidai.gov.in
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com^partitionKey=%28https%2Cleetcode.com%29/ls
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com^partitionKey=%28https%2Cleetcode.com%29/idb/1002487845LCo7g%sCD7a%tcaabaa5s.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com^partitionKey=%28https%2Cleetcode.com%29/idb/2171031483YattIedMb.files
108	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com^partitionKey=%28https%2Cleetcode.com%29/idb
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com^partitionKey=%28https%2Cleetcode.com%29/cache/morgue
68	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com^partitionKey=%28https%2Cleetcode.com%29/cache
200	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com^partitionKey=%28https%2Cleetcode.com%29
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.filepicker.io^partitionKey=%28https%2Chackerrank.com%29/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.filepicker.io^partitionKey=%28https%2Chackerrank.com%29
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++auth0.openai.com/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++auth0.openai.com
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++ssup.uidai.gov.in/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++ssup.uidai.gov.in
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.holidaygiftssearch.com/ls
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.holidaygiftssearch.com/idb/1703067493_easiambtaetlalD.files
52	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.holidaygiftssearch.com/idb
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.holidaygiftssearch.com/cache/morgue/1
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.holidaygiftssearch.com/cache/morgue/137
28	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.holidaygiftssearch.com/cache/morgue
108	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.holidaygiftssearch.com/cache
184	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.holidaygiftssearch.com
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.codechef.com/ls
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.codechef.com/idb/1034307137ctonoeksineo-c.files
52	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.codechef.com/idb
80	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.codechef.com
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.teahub.io/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.teahub.io
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.ixigo.com/ls
28	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.ixigo.com/cache/morgue/113
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.ixigo.com/cache/morgue/16
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.ixigo.com/cache/morgue/89
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.ixigo.com/cache/morgue/72
64	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.ixigo.com/cache/morgue
160	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.ixigo.com/cache
184	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.ixigo.com
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.google.com^partitionKey=%28https%2Circtc.co.in%29/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.google.com^partitionKey=%28https%2Circtc.co.in%29
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++stackoverflow.com/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++stackoverflow.com
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/ls
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/idb/2057579554yatt-asdeartveimc-erw.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/idb/3094610291yCt7-%iCd7b%-6par5e4f.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/idb/3240847269yCt7-%pCl7a%y6ear5-4l.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/idb/1655913367yCt7-%iCt7-%r6eas5p4o.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/idb/2232182701SeesravbiacteaWDosrgk.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/idb/1812953755yCt7G%cCf7C%o6naf5i4g.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/idb/3211250388sbwdpsunsohintoatciif.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/idb/2171031483YattIedMb.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/idb/2831062289PCe7r%sCi7s%t6ean5t4E.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/idb/3647322525LCo7g%sCD7a%t6aab5a4s.files
572	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/idb
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/213
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/41
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/29
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/60
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/57
64	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/170
72	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/202
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/34
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/184
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/198
148	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/1
92	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/139
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/255
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/49
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/222
100	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/48
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/164
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/40
504	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/191
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/189
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/103
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/108
12	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/45
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/142
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/173
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/120
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/254
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/28
12	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/132
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/161
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/110
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/186
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/23
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/177
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/62
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/236
92	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/243
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/83
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/74
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/238
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/217
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/55
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/235
92	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/93
12	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/201
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/192
100	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/171
12	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/121
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/56
40	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/84
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/165
12	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/71
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/234
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/135
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/204
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/58
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/59
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/169
80	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/44
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/105
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/247
12	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/79
88	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/175
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/252
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/36
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/223
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/75
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/27
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/35
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/90
12	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/5
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/91
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/102
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/17
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/159
72	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/205
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/199
3024	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/8
1208	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/239
12	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/200
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/140
88	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/78
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/33
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/233
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/127
36	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/47
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/194
84	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/124
12	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/193
28	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/63
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/188
92	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/141
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/39
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/232
68	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/168
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/95
76	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/214
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/181
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/154
88	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/150
92	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/64
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/72
168	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/109
84	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/14
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/4
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/51
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/209
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/221
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/179
56	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/18
12	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/87
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/244
76	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/69
12	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/24
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/249
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/96
108	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/240
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/148
12	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/196
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/31
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/9
8	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue/104
7776	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache/morgue
8256	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com/cache
8852	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.google.com^partitionKey=%28https%2Cixigo.com%29/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.google.com^partitionKey=%28https%2Cixigo.com%29
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.google.com^partitionKey=%28https%2Cgeeksforgeeks.org%29/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.google.com^partitionKey=%28https%2Cgeeksforgeeks.org%29
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++chat.google.com/cache/morgue
68	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++chat.google.com/cache
76	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++chat.google.com
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++dialog.filepicker.io/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++dialog.filepicker.io
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++mail.google.com/cache/morgue
68	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++mail.google.com/cache
76	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++mail.google.com
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.google.com^partitionKey=%28https%2Cleetcode.com%29/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.google.com^partitionKey=%28https%2Cleetcode.com%29
20	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++auth.geeksforgeeks.org/ls
28	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++auth.geeksforgeeks.org
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++accounts.firefox.com/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++accounts.firefox.com
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++dialog.filepicker.io^partitionKey=%28https%2Chackerrank.com%29/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++dialog.filepicker.io^partitionKey=%28https%2Chackerrank.com%29
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++wallpapers.com/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++wallpapers.com
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++voters.eci.gov.in/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++voters.eci.gov.in
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com^partitionKey=%28https%2Cgoogle.com%29/ls
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com^partitionKey=%28https%2Cgoogle.com%29/idb/2555046755LCo7g%sCD7a%tfaebda7s.files
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com^partitionKey=%28https%2Cgoogle.com%29/idb/2171031483YattIedMb.files
104	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com^partitionKey=%28https%2Cgoogle.com%29/idb
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com^partitionKey=%28https%2Cgoogle.com%29/cache/morgue
68	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com^partitionKey=%28https%2Cgoogle.com%29/cache
196	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.youtube.com^partitionKey=%28https%2Cgoogle.com%29
60	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.google.com/ls
68	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.google.com
188	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.programiz.com/ls
4	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.programiz.com/idb/52296910_u_dna.files
52	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.programiz.com/idb
248	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.programiz.com
16	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.filepicker.io/ls
24	./.mozilla/firefox/dniunrby.default-release/storage/default/https+++www.filepicker.io
16656	./.mozilla/firefox/dniunrby.default-release/storage/default
28184	./.mozilla/firefox/dniunrby.default-release/storage
3220	./.mozilla/firefox/dniunrby.default-release/security_state
8	./.mozilla/firefox/dniunrby.default-release/weave/toFetch
24	./.mozilla/firefox/dniunrby.default-release/weave/logs
8	./.mozilla/firefox/dniunrby.default-release/weave/failed
44	./.mozilla/firefox/dniunrby.default-release/weave
8	./.mozilla/firefox/dniunrby.default-release/settings
24	./.mozilla/firefox/dniunrby.default-release/bookmarkbackups
1564	./.mozilla/firefox/dniunrby.default-release/gmp-gmpopenh264/2.3.2
1568	./.mozilla/firefox/dniunrby.default-release/gmp-gmpopenh264
8	./.mozilla/firefox/dniunrby.default-release/datareporting/glean/pending_pings
4	./.mozilla/firefox/dniunrby.default-release/datareporting/glean/tmp
24	./.mozilla/firefox/dniunrby.default-release/datareporting/glean/db
4	./.mozilla/firefox/dniunrby.default-release/datareporting/glean/events
44	./.mozilla/firefox/dniunrby.default-release/datareporting/glean
108	./.mozilla/firefox/dniunrby.default-release/datareporting/archived/2024-04
648	./.mozilla/firefox/dniunrby.default-release/datareporting/archived/2024-03
760	./.mozilla/firefox/dniunrby.default-release/datareporting/archived
816	./.mozilla/firefox/dniunrby.default-release/datareporting
20	./.mozilla/firefox/dniunrby.default-release/sessionstore-backups
4	./.mozilla/firefox/dniunrby.default-release/browser-extension-data/amazondotcom@search.mozilla.org
8	./.mozilla/firefox/dniunrby.default-release/browser-extension-data
47692	./.mozilla/firefox/dniunrby.default-release
4	./.mozilla/firefox/Pending Pings
4	./.mozilla/firefox/Crash Reports/events
16	./.mozilla/firefox/Crash Reports
8	./.mozilla/firefox/rxdgp9tl.default
47732	./.mozilla/firefox
47740	./.mozilla
124	./Desktop/DSA_
28	./Desktop/pps_Assignment3/week3
20	./Desktop/pps_Assignment3/week2
64	./Desktop/pps_Assignment3/week1
304	./Desktop/pps_Assignment3
192	./Desktop/coding
1044	./Desktop
16	./.texlive2019/texmf-var/fonts/pk/ljfour/jknappen/ec
20	./.texlive2019/texmf-var/fonts/pk/ljfour/jknappen
24	./.texlive2019/texmf-var/fonts/pk/ljfour
28	./.texlive2019/texmf-var/fonts/pk
32	./.texlive2019/texmf-var/fonts
36	./.texlive2019/texmf-var
40	./.texlive2019
5068676	.
user@mhg:~$ df
Filesystem     1K-blocks     Used Available Use% Mounted on
udev             3910272        0   3910272   0% /dev
tmpfs             790156     2184    787972   1% /run
/dev/nvme0n1p2 244506940 52741988 179271896  23% /
tmpfs            3950760        0   3950760   0% /dev/shm
tmpfs               5120        4      5116   1% /run/lock
tmpfs            3950760        0   3950760   0% /sys/fs/cgroup
/dev/loop0           128      128         0 100% /snap/bare/5
/dev/loop3         76032    76032         0 100% /snap/core22/1122
/dev/loop2         65536    65536         0 100% /snap/core20/2182
/dev/loop1         65536    65536         0 100% /snap/core20/2105
/dev/loop6        516352   516352         0 100% /snap/gnome-42-2204/172
/dev/loop7        358144   358144         0 100% /snap/gnome-3-38-2004/140
/dev/loop5        508928   508928         0 100% /snap/gnome-42-2204/141
/dev/loop8        358144   358144         0 100% /snap/gnome-3-38-2004/143
/dev/loop4         75904    75904         0 100% /snap/core22/1033
/dev/loop13        40064    40064         0 100% /snap/snapd/21184
/dev/loop12        41472    41472         0 100% /snap/snapd/20671
/dev/loop11        12672    12672         0 100% /snap/snap-store/959
/dev/loop14        93952    93952         0 100% /snap/gtk-common-themes/1535
/dev/loop9         66816    66816         0 100% /snap/gtk-common-themes/1519
/dev/loop10        13312    13312         0 100% /snap/snap-store/1113
/dev/nvme0n1p1    523248     6212    517036   2% /boot/efi
tmpfs             790152       36    790116   1% /run/user/1000
user@mhg:~$ df -l
Filesystem     1K-blocks     Used Available Use% Mounted on
udev             3910272        0   3910272   0% /dev
tmpfs             790156     2184    787972   1% /run
/dev/nvme0n1p2 244506940 52741988 179271896  23% /
tmpfs            3950760        0   3950760   0% /dev/shm
tmpfs               5120        4      5116   1% /run/lock
tmpfs            3950760        0   3950760   0% /sys/fs/cgroup
/dev/loop0           128      128         0 100% /snap/bare/5
/dev/loop3         76032    76032         0 100% /snap/core22/1122
/dev/loop2         65536    65536         0 100% /snap/core20/2182
/dev/loop1         65536    65536         0 100% /snap/core20/2105
/dev/loop6        516352   516352         0 100% /snap/gnome-42-2204/172
/dev/loop7        358144   358144         0 100% /snap/gnome-3-38-2004/140
/dev/loop5        508928   508928         0 100% /snap/gnome-42-2204/141
/dev/loop8        358144   358144         0 100% /snap/gnome-3-38-2004/143
/dev/loop4         75904    75904         0 100% /snap/core22/1033
/dev/loop13        40064    40064         0 100% /snap/snapd/21184
/dev/loop12        41472    41472         0 100% /snap/snapd/20671
/dev/loop11        12672    12672         0 100% /snap/snap-store/959
/dev/loop14        93952    93952         0 100% /snap/gtk-common-themes/1535
/dev/loop9         66816    66816         0 100% /snap/gtk-common-themes/1519
/dev/loop10        13312    13312         0 100% /snap/snap-store/1113
/dev/nvme0n1p1    523248     6212    517036   2% /boot/efi
tmpfs             790152       36    790116   1% /run/user/1000
                 
//#18) cal: Displays the calendar.                   
user@mhg:~$ cal 4 2024
     April 2024       
Su Mo Tu We Th Fr Sa  
    1  2  3  4  5  6  
 7  8  9 10 11 12 13  
14 15 16 17 18 19 20  
21 22 23 24 25 26 27  
28 29 30              
                      
//  #19) date: Displays the system date and time             
user@mhg:~$ date +%d%m%y
100424

//#20) who: Displays the list of users currently logged in
user@mhg:~$ who
user     :0           2024-04-10 20:18 (:0)

//#21) whoami: Displays the user id of the currently logged-in user.
user@mhg:~$ whoami
user
 



