
Debian
====================
This directory contains files used to package opencashd/opencash-qt
for Debian-based Linux systems. If you compile opencashd/opencash-qt yourself, there are some useful files here.

## opencash: URI support ##


opencash-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install opencash-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your opencashqt binary to `/usr/bin`
and the `../../share/pixmaps/opencash128.png` to `/usr/share/pixmaps`

opencash-qt.protocol (KDE)

