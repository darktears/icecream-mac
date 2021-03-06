# Icecream Setup for macOS to build Chromium

This instructions shows how to use icecream on macOS to distribute build jobs on Linux nodes in the network. It has been tested on macOS Sierra.

## Instructions on macOS

Install the prerequisites (I recommend using homebrew)

```bash
$ xcode-select --install
$ brew install lzo
```

Clone this repository, this will take a while because it contains a binary copy
of a clang toolchain (which is a gross thing to keep in git, I know)

```bash
$ git clone https://github.com/darktears/icecream-mac.git /path/to/chromium/src/icecream
```

Install the daemon. This will create a launchd plist which will be run on startup.
The argument passed to the `install.sh` script is the scheduler to connect to.

```bash
$ sudo /path/to/chromium/src/icecream/install.sh HOSTNAME_OF_SCHEDULER
```
You can uninstall it with :
```bash
$ sudo /path/to/chromium/src/icecream/uninstall.sh
```
With this the icecream daemon is launched when macOS starts or if it stops.

You now need to setup some environment variable. In your .bashrc add :

```bash
$ export ICECC_VERSION=Darwin18_x86_64:/path/to/chromium/src/icecream/clang_darwin_on_darwin.tar.gz,x86_64:/path/to/chromium/src/icecream/clang_darwin_on_linux.tar.gz
$ export ICECC_CLANG_REMOTE_CPP=1
$ export PATH=path/to/chromium/src/icecream/icecc/:$PATH
```

Setup your args.gn

gn args gen /my/build

and add :
```bash
disable_precompiled_headers = true
clang_base_path = "//icecream"
clang_use_chrome_plugins = false
cc_wrapper="icecc"
```

You may want to disable NaCl if you build the chrome target as it's not working with icecream. Just add in your GN args :

```bash
enable_nacl = false
```
## Enabling your macOS machine to be a build node.
You will need to create an icecc account on your mac so that the icecream scheduler can send jobs over.
Go into "System Preferences" then "Users and Groups" then create a new account by clicking the "+" icon (You may need to unlock first).
Type "icecc" as the full name and account name. Type any password (we will remove the password after).

Open a terminal then type :
```bash
sudo dscl . -passwd /Users/icecc ""
```
This will remove the password so that icecream can log in to execute the build jobs. Make sure you keep the Account as "standard".

## Using icemon to monitor the cluster.

Install the prerequisites (I recommend using homebrew)
```bash
$ brew install qt5
```

Then run the icemon to monitor the cluser :

Make sure you set the scheduler hostname in your .bashrc :
```bash
USE_SCHEDULER=HOSTNAME_OR_IP_OF_SCHEDULER
```

Copy the Icemon.app into your /Applications folder. Then just run it.

## Setup the Linux nodes

At the moment you need a custom version of icecream to be able to build the jobs sent from macOS. This is so that icecream
can handle compiling with clang.

```bash
$ sudo apt-get install libcap-ng-dev liblzo2-dev
$ git clone https://github.com/darktears/icecream.git
$ cd icecream
$ ./autogen.sh
$ ./configure --prefix=/where/you/want/to/install --without-man
$ make && make install
```

If you're using a Debian-based distro, or basically any distro that uses sysv rc files to start iceccd and reads icecc.conf to configure the daemon, you can tell it to use your iceccd binary instead of the system-wide one. As root:

Stop iceccd if it's running.
```bash
$ sudo service iceccd stop
```
Edit icecc.conf and add a line like this: DAEMON="/path/to/your/new/iceccd"
Restart iceccd.
```bash
$ sudo service iceccd start
```

That's it.

![alt tag](https://raw.githubusercontent.com/darktears/icecream-mac/master/Screen%20Shot%202016-08-19%20at%203.24.27%20PM.png)
