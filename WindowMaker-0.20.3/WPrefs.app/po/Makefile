# Generated automatically from Makefile.in by configure.
# Makefile.in generated automatically by automake 1.3 from Makefile.am

# Copyright (C) 1994, 1995, 1996, 1997, 1998 Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.


SHELL = /bin/sh

srcdir = .
top_srcdir = ../..
prefix = /usr/local
exec_prefix = $(prefix)

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = ${prefix}/include
oldincludedir = /usr/include

DISTDIR =

pkgdatadir = $(datadir)/WindowMaker
pkglibdir = $(libdir)/WindowMaker
pkgincludedir = $(includedir)/WindowMaker

top_builddir = ../..

ACLOCAL = aclocal
AUTOCONF = autoconf
AUTOMAKE = automake
AUTOHEADER = autoheader

INSTALL = /usr/bin/ginstall -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL_PROGRAM}
transform = s,x,x,

NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
host_alias = i686-pc-linux-gnu
host_triplet = i686-pc-linux-gnu
CC = gcc
CPP_PATH = /usr/bin/cpp
DFLAGS = 
GFXFLAGS =  -DUSE_XPM -DUSE_PNG -DUSE_JPEG -DUSE_GIF -DUSE_TIFF
GFXLFLAGS = 
GFXLIBS = -ltiff  -lXpm -lpng -lz -ljpeg -lungif
I18N = 
I18N_MB = #undef I18N_MB
ICONEXT = tiff
INTLIBS = 
LN_S = ln -s
MAKEINFO = makeinfo
MOFILES = 
NLSDIR = $(prefix)/lib/locale
PACKAGE = WindowMaker
RANLIB = ranlib
REDUCE_APPICONS = #undef REDUCE_APPICONS
SHAPE = -DSHAPE
SOUND = #define WMSOUND
VERSION = 0.20.3
WPMOFILES = 
XCFLAGS = 
XGETTEXT = xgettext
XLFLAGS = 
XLIBS = -lXext  -lX11
XSHM = -DXSHM
X_EXTRA_LIBS = 
X_LOCALE = 
pixmapdir = $(datadir)/pixmaps
wprefsdir = $(prefix)/GNUstep/Apps/WPrefs.app

nlsdir      = $(prefix)/lib/locale

CATALOGS = 

CLEANFILES = $(CATALOGS)

EXTRA_DIST = pt.po hr.po fr.po ko.po cs.po ja.po

POTFILES  = \
	$(top_builddir)/WPrefs/Configurations.c \
	$(top_builddir)/WPrefs/Expert.c \
	$(top_builddir)/WPrefs/Focus.c \
	$(top_builddir)/WPrefs/KeyboardSettings.c \
	$(top_builddir)/WPrefs/KeyboardShortcuts.c \
	$(top_builddir)/WPrefs/Menu.c \
	$(top_builddir)/WPrefs/MenuGuru.c \
	$(top_builddir)/WPrefs/MenuPreferences.c \
	$(top_builddir)/WPrefs/MouseSettings.c \
	$(top_builddir)/WPrefs/Paths.c \
	$(top_builddir)/WPrefs/Preferences.c \
	$(top_builddir)/WPrefs/Text.c \
	$(top_builddir)/WPrefs/TextureAndColor.c \
	$(top_builddir)/WPrefs/WPrefs.c \
	$(top_builddir)/WPrefs/WindowHandling.c \
	$(top_builddir)/WPrefs/Workspace.c \
	$(top_builddir)/WPrefs/main.c \
	$(top_builddir)/WPrefs/xmodifier.c	

SUFFIXES = .po .mo
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = ../../src/config.h
CONFIG_CLEAN_FILES = 
DIST_COMMON =  README Makefile.am Makefile.in


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = tar
GZIP = --best
all: Makefile

.SUFFIXES:
.SUFFIXES: .mo .po
$(srcdir)/Makefile.in: Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4)
	cd $(top_srcdir) && $(AUTOMAKE) --gnu --include-deps WPrefs.app/po/Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status

tags: TAGS
TAGS:


distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)

subdir = WPrefs.app/po

distdir: $(DISTFILES)
	@for file in $(DISTFILES); do \
	  d=$(srcdir); \
	  test -f $(distdir)/$$file \
	  || ln $$d/$$file $(distdir)/$$file 2> /dev/null \
	  || cp -p $$d/$$file $(distdir)/$$file; \
	done
info:
dvi:
check: all
	$(MAKE)
installcheck:
install-exec: 
	@$(NORMAL_INSTALL)

install-data: install-data-local
	@$(NORMAL_INSTALL)

install: install-exec install-data all
	@:

uninstall: 

install-strip:
	$(MAKE) INSTALL_PROGRAM='$(INSTALL_PROGRAM) -s' INSTALL_SCRIPT='$(INSTALL_PROGRAM)' install
installdirs:


mostlyclean-generic:
	-test -z "$(MOSTLYCLEANFILES)" || rm -f $(MOSTLYCLEANFILES)

clean-generic:
	-test -z "$(CLEANFILES)" || rm -f $(CLEANFILES)

distclean-generic:
	-rm -f Makefile $(DISTCLEANFILES)
	-rm -f config.cache config.log stamp-h stamp-h[0-9]*
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)

maintainer-clean-generic:
	-test -z "$(MAINTAINERCLEANFILES)" || rm -f $(MAINTAINERCLEANFILES)
	-test -z "$(BUILT_SOURCES)" || rm -f $(BUILT_SOURCES)
mostlyclean:  mostlyclean-generic

clean:  clean-generic mostlyclean

distclean:  distclean-generic clean
	-rm -f config.status

maintainer-clean:  maintainer-clean-generic distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

.PHONY: tags distdir info dvi installcheck install-exec install-data \
install uninstall all installdirs mostlyclean-generic distclean-generic \
clean-generic maintainer-clean-generic clean mostlyclean distclean \
maintainer-clean


.po.mo: 
	msgfmt -o $@ $<

WPrefs.pot: $(POTFILES)
	xgettext --default-domain=WPrefs \
	--add-comments --keyword=_ $(POTFILES)
	if cmp -s WPrefs.po WPrefs.pot; then \
	    rm -f WPrefs.po; \
	else \
	    mv -f WPrefs.po WPrefs.pot; \
	fi

install-data-local:  $(CATALOGS)
	$(mkinstalldirs) $(nlsdir) 
	chmod 755 $(nlsdir) 
	for n in $(CATALOGS) __DuMmY ; do \
		if test "$$n" -a "$$n" != "__DuMmY" ; then \
			l=`basename $$n .mo`; \
			$(mkinstalldirs) $(nlsdir)/$$l/LC_MESSAGES; \
			chmod 755 $(nlsdir)/$$l; \
			chmod 755 $(nlsdir)/$$l/LC_MESSAGES; \
			$(INSTALL) -m 644 $$n $(nlsdir)/$$l/LC_MESSAGES/WPrefs.mo; \
		fi; \
	done

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
