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
top_srcdir = ..
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

top_builddir = ..

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

SUBDIRS = xpm tiff po

nlsdir = $(prefix)/lib/locale

AUTOMAKE_OPTIONS = no-dependencies

wpexecbindir = $(prefix)/GNUstep/Apps/WPrefs.app

wpexecbin_PROGRAMS = WPrefs 

wpdatadir = $(prefix)/GNUstep/Apps/WPrefs.app

wpdata_DATA = WPrefs.tiff WPrefs.xpm

EXTRA_DIST = $(wpdata_DATA) TexturePanel.icons 

WPrefs_SOURCES = \
	main.c \
	WPrefs.c \
	WPrefs.h \
	Configurations.c \
	Expert.c \
	Focus.c \
	Icons.c \
	KeyboardSettings.c \
	KeyboardShortcuts.c \
	Menu.c \
	MenuPreferences.c \
	MouseSettings.c \
	Paths.c \
	Preferences.c \
	Text.c \
	TextureAndColor.c \
	TexturePanel.c \
	TexturePanel.h \
	WindowHandling.c \
	Workspace.c \
	double.c \
	double.h \
	MenuGuru.c \
	xmodifier.c

CPPFLAGS = \
	 \
	-DSHAPE   \
	-DNLSDIR="\"$(nlsdir)\"" 

INCLUDES = \
	-I$(top_srcdir)/wrlib \
	-I$(top_srcdir)/WINGs \
	-I$(top_srcdir)/libPropList \
	 

WPrefs_DEPENDENCIES = $(top_builddir)/WINGs/libWINGs.a

WPrefs_LDADD = \
	$(top_builddir)/WINGs/libWINGs.a\
	$(top_builddir)/wrlib/libwraster.a \
        $(top_builddir)/libPropList/libPropList.a \
	 \
	 \
	-ltiff  -lXpm -lpng -lz -ljpeg -lungif \
	-lXext  -lX11 \
	 \
	 \
	-lm 
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = ../src/config.h
CONFIG_CLEAN_FILES = 
PROGRAMS =  $(wpexecbin_PROGRAMS)


DEFS = -DHAVE_CONFIG_H -I. -I$(srcdir) -I../src
LDFLAGS = 
LIBS = 
X_CFLAGS = 
X_LIBS = 
X_PRE_LIBS =  -lSM -lICE
WPrefs_OBJECTS =  main.o WPrefs.o Configurations.o Expert.o Focus.o \
Icons.o KeyboardSettings.o KeyboardShortcuts.o Menu.o MenuPreferences.o \
MouseSettings.o Paths.o Preferences.o Text.o TextureAndColor.o \
TexturePanel.o WindowHandling.o Workspace.o double.o MenuGuru.o \
xmodifier.o
WPrefs_LDFLAGS = 
CFLAGS = -g -O2
COMPILE = $(CC) $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS)
LINK = $(CC) $(CFLAGS) $(LDFLAGS) -o $@
DATA =  $(wpdata_DATA)

DIST_COMMON =  README Makefile.am Makefile.in


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = tar
GZIP = --best
SOURCES = $(WPrefs_SOURCES)
OBJECTS = $(WPrefs_OBJECTS)

all: all-recursive all-am

.SUFFIXES:
.SUFFIXES: .S .c .o .s
$(srcdir)/Makefile.in: Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4)
	cd $(top_srcdir) && $(AUTOMAKE) --gnu WPrefs.app/Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status


mostlyclean-wpexecbinPROGRAMS:

clean-wpexecbinPROGRAMS:
	-test -z "$(wpexecbin_PROGRAMS)" || rm -f $(wpexecbin_PROGRAMS)

distclean-wpexecbinPROGRAMS:

maintainer-clean-wpexecbinPROGRAMS:

install-wpexecbinPROGRAMS: $(wpexecbin_PROGRAMS)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(wpexecbindir)
	@list='$(wpexecbin_PROGRAMS)'; for p in $$list; do \
	  if test -f $$p; then \
	    echo "  $(INSTALL_PROGRAM) $$p $(DESTDIR)$(wpexecbindir)/`echo $$p|sed '$(transform)'`"; \
	     $(INSTALL_PROGRAM) $$p $(DESTDIR)$(wpexecbindir)/`echo $$p|sed '$(transform)'`; \
	  else :; fi; \
	done

uninstall-wpexecbinPROGRAMS:
	@$(NORMAL_UNINSTALL)
	list='$(wpexecbin_PROGRAMS)'; for p in $$list; do \
	  rm -f $(DESTDIR)$(wpexecbindir)/`echo $$p|sed '$(transform)'`; \
	done

.c.o:
	$(COMPILE) -c $<

.s.o:
	$(COMPILE) -c $<

.S.o:
	$(COMPILE) -c $<

mostlyclean-compile:
	-rm -f *.o core *.core

clean-compile:

distclean-compile:
	-rm -f *.tab.c

maintainer-clean-compile:

WPrefs: $(WPrefs_OBJECTS) $(WPrefs_DEPENDENCIES)
	@rm -f WPrefs
	$(LINK) $(WPrefs_LDFLAGS) $(WPrefs_OBJECTS) $(WPrefs_LDADD) $(LIBS)

install-wpdataDATA: $(wpdata_DATA)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(wpdatadir)
	@list='$(wpdata_DATA)'; for p in $$list; do \
	  if test -f $(srcdir)/$$p; then \
	    echo " $(INSTALL_DATA) $(srcdir)/$$p $(DESTDIR)$(wpdatadir)/$$p"; \
	    $(INSTALL_DATA) $(srcdir)/$$p $(DESTDIR)$(wpdatadir)/$$p; \
	  else if test -f $$p; then \
	    echo " $(INSTALL_DATA) $$p $(DESTDIR)$(wpdatadir)/$$p"; \
	    $(INSTALL_DATA) $$p $(DESTDIR)$(wpdatadir)/$$p; \
	  fi; fi; \
	done

uninstall-wpdataDATA:
	@$(NORMAL_UNINSTALL)
	list='$(wpdata_DATA)'; for p in $$list; do \
	  rm -f $(DESTDIR)$(wpdatadir)/$$p; \
	done

# This directory's subdirectories are mostly independent; you can cd
# into them and run `make' without going through this Makefile.
# To change the values of `make' variables: instead of editing Makefiles,
# (1) if the variable is set in `config.status', edit `config.status'
#     (which will cause the Makefiles to be regenerated when you run `make');
# (2) otherwise, pass the desired values on the `make' command line.



all-recursive install-data-recursive install-exec-recursive \
installdirs-recursive install-recursive uninstall-recursive  \
check-recursive installcheck-recursive info-recursive dvi-recursive:
	@set fnord $(MAKEFLAGS); amf=$$2; \
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  target=`echo $@ | sed s/-recursive//`; \
	  echo "Making $$target in $$subdir"; \
	  (cd $$subdir && $(MAKE) $$target) \
	   || case "$$amf" in *=*) exit 1;; *k*) fail=yes;; *) exit 1;; esac; \
	done && test -z "$$fail"

mostlyclean-recursive clean-recursive distclean-recursive \
maintainer-clean-recursive:
	@set fnord $(MAKEFLAGS); amf=$$2; \
	rev=''; list='$(SUBDIRS)'; for subdir in $$list; do \
	  rev="$$subdir $$rev"; \
	done; \
	for subdir in $$rev; do \
	  target=`echo $@ | sed s/-recursive//`; \
	  echo "Making $$target in $$subdir"; \
	  (cd $$subdir && $(MAKE) $$target) \
	   || case "$$amf" in *=*) exit 1;; *k*) fail=yes;; *) exit 1;; esac; \
	done && test -z "$$fail"
tags-recursive:
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  (cd $$subdir && $(MAKE) tags); \
	done

tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP)
	here=`pwd` && cd $(srcdir) \
	  && mkid -f$$here/ID $(SOURCES) $(HEADERS) $(LISP)

TAGS: tags-recursive $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  test -f $$subdir/TAGS && tags="$$tags -i $$here/$$subdir/TAGS"; \
	done; \
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(ETAGS_ARGS)$$unique$(LISP)$$tags" \
	  || (cd $(srcdir) && etags $(ETAGS_ARGS) $$tags  $$unique $(LISP) -o $$here/TAGS)

mostlyclean-tags:

clean-tags:

distclean-tags:
	-rm -f TAGS ID

maintainer-clean-tags:

distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)

subdir = WPrefs.app

distdir: $(DISTFILES)
	@for file in $(DISTFILES); do \
	  d=$(srcdir); \
	  test -f $(distdir)/$$file \
	  || ln $$d/$$file $(distdir)/$$file 2> /dev/null \
	  || cp -p $$d/$$file $(distdir)/$$file; \
	done
	for subdir in $(SUBDIRS); do \
	  test -d $(distdir)/$$subdir \
	  || mkdir $(distdir)/$$subdir \
	  || exit 1; \
	  chmod 777 $(distdir)/$$subdir; \
	  (cd $$subdir && $(MAKE) top_distdir=../$(top_distdir) distdir=../$(distdir)/$$subdir distdir) \
	    || exit 1; \
	done
info: info-recursive
dvi: dvi-recursive
check: all-am
	$(MAKE) check-recursive
installcheck: installcheck-recursive
all-am: Makefile $(PROGRAMS) $(DATA)

install-exec-am: install-wpexecbinPROGRAMS

install-data-am: install-wpdataDATA

uninstall-am: uninstall-wpexecbinPROGRAMS uninstall-wpdataDATA

install-exec: install-exec-recursive install-exec-am
	@$(NORMAL_INSTALL)

install-data: install-data-recursive install-data-am
	@$(NORMAL_INSTALL)

install: install-recursive install-exec-am install-data-am
	@:

uninstall: uninstall-recursive uninstall-am

install-strip:
	$(MAKE) INSTALL_PROGRAM='$(INSTALL_PROGRAM) -s' INSTALL_SCRIPT='$(INSTALL_PROGRAM)' install
installdirs: installdirs-recursive
	$(mkinstalldirs)  $(DATADIR)$(wpexecbindir) $(DATADIR)$(wpdatadir)


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
mostlyclean-am:  mostlyclean-wpexecbinPROGRAMS mostlyclean-compile \
		mostlyclean-tags mostlyclean-generic

clean-am:  clean-wpexecbinPROGRAMS clean-compile clean-tags \
		clean-generic mostlyclean-am

distclean-am:  distclean-wpexecbinPROGRAMS distclean-compile \
		distclean-tags distclean-generic clean-am

maintainer-clean-am:  maintainer-clean-wpexecbinPROGRAMS \
		maintainer-clean-compile maintainer-clean-tags \
		maintainer-clean-generic distclean-am

mostlyclean:  mostlyclean-recursive mostlyclean-am

clean:  clean-recursive clean-am

distclean:  distclean-recursive distclean-am
	-rm -f config.status

maintainer-clean:  maintainer-clean-recursive maintainer-clean-am
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

.PHONY: mostlyclean-wpexecbinPROGRAMS distclean-wpexecbinPROGRAMS \
clean-wpexecbinPROGRAMS maintainer-clean-wpexecbinPROGRAMS \
uninstall-wpexecbinPROGRAMS install-wpexecbinPROGRAMS \
mostlyclean-compile distclean-compile clean-compile \
maintainer-clean-compile uninstall-wpdataDATA install-wpdataDATA \
install-data-recursive uninstall-data-recursive install-exec-recursive \
uninstall-exec-recursive installdirs-recursive uninstalldirs-recursive \
all-recursive check-recursive installcheck-recursive info-recursive \
dvi-recursive mostlyclean-recursive distclean-recursive clean-recursive \
maintainer-clean-recursive tags tags-recursive mostlyclean-tags \
distclean-tags clean-tags maintainer-clean-tags distdir info dvi \
installcheck all-am install-exec-am install-data-am uninstall-am \
install-exec install-data install uninstall all installdirs \
mostlyclean-generic distclean-generic clean-generic \
maintainer-clean-generic clean mostlyclean distclean maintainer-clean


# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
