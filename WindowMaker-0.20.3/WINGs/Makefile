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

AUTOMAKE_OPTIONS = no-dependencies

SUBDIRS = Resources

LIBLIST= -L$(top_builddir)/wrlib -lwraster\
	   -ltiff  -lXpm -lpng -lz -ljpeg -lungif -lXext  -lX11 \
	-lm -L$(top_builddir)/libPropList -lPropList

lib_LIBRARIES = libWINGs.a

include_HEADERS = WINGs.h WUtil.h WINGsP.h

noinst_PROGRAMS = wtest wmquery wmfile fontl testmywidget

testmywidget_SOURCES = testmywidget.c mywidget.c mywidget.h

testmywidget_LDADD = -L. -lWINGs $(LIBLIST)

fontl_SOURCES = fontl.c

fontl_LDADD = -L. -lWINGs $(LIBLIST)

wtest_SOURCES = wtest.c

wtest_LDADD = -L. -lWINGs $(LIBLIST)

wtest_DEPENDENCIES = libWINGs.a

wmfile_SOURCES = wmfile.c 

wmfile_LDADD = -L. -lWINGs $(LIBLIST)

wmquery_SOURCES = wmquery.c 

wmquery_LDADD = -L. -lWINGs $(LIBLIST)

EXTRA_DIST = logo.xpm 

# wbutton.c 
libWINGs_a_SOURCES = 	\
	WINGs.h \
	WINGsP.h \
	configuration.c \
	international.c \
	notification.c \
	selection.c \
	userdefaults.c \
	wapplication.c \
	wbrowser.c \
	wbutton.c \
	wcolor.c \
	wcolorwell.c \
	wevent.c \
	wfilepanel.c \
	wframe.c \
	wfont.c \
	wfontpanel.c \
	widgets.c \
	wlabel.c \
	wlist.c \
	wmisc.c \
	wpanel.c \
	wpixmap.c \
	wpopupbutton.c \
	wscroller.c \
	wscrollview.c \
	wslider.c \
	wsplitview.c \
	wtextfield.c \
	wwindow.c \
	wview.c \
	error.c \
	findfile.c \
	hashtable.c \
	memory.c \
	usleep.c

INCLUDES = -I$(top_srcdir)/wrlib -I$(top_srcdir)/src \
	-DRESOURCE_PATH=\"$(datadir)/WINGs\" $(GFXFLAGS) -DDEBUG \
	-I$(top_srcdir)/libPropList 
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = ../src/config.h
CONFIG_CLEAN_FILES = 
LIBRARIES =  $(lib_LIBRARIES)


DEFS = -DHAVE_CONFIG_H -I. -I$(srcdir) -I../src
CPPFLAGS = 
LDFLAGS = 
LIBS = 
X_CFLAGS = 
X_LIBS = 
X_PRE_LIBS =  -lSM -lICE
libWINGs_a_LIBADD = 
libWINGs_a_OBJECTS =  configuration.o international.o notification.o \
selection.o userdefaults.o wapplication.o wbrowser.o wbutton.o wcolor.o \
wcolorwell.o wevent.o wfilepanel.o wframe.o wfont.o wfontpanel.o \
widgets.o wlabel.o wlist.o wmisc.o wpanel.o wpixmap.o wpopupbutton.o \
wscroller.o wscrollview.o wslider.o wsplitview.o wtextfield.o wwindow.o \
wview.o error.o findfile.o hashtable.o memory.o usleep.o
AR = ar
PROGRAMS =  $(noinst_PROGRAMS)

wtest_OBJECTS =  wtest.o
wtest_LDFLAGS = 
wmquery_OBJECTS =  wmquery.o
wmquery_DEPENDENCIES = 
wmquery_LDFLAGS = 
wmfile_OBJECTS =  wmfile.o
wmfile_DEPENDENCIES = 
wmfile_LDFLAGS = 
fontl_OBJECTS =  fontl.o
fontl_DEPENDENCIES = 
fontl_LDFLAGS = 
testmywidget_OBJECTS =  testmywidget.o mywidget.o
testmywidget_DEPENDENCIES = 
testmywidget_LDFLAGS = 
CFLAGS = -g -O2
COMPILE = $(CC) $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS)
LINK = $(CC) $(CFLAGS) $(LDFLAGS) -o $@
HEADERS =  $(include_HEADERS)

DIST_COMMON =  README ChangeLog Makefile.am Makefile.in TODO


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = tar
GZIP = --best
SOURCES = $(libWINGs_a_SOURCES) $(wtest_SOURCES) $(wmquery_SOURCES) $(wmfile_SOURCES) $(fontl_SOURCES) $(testmywidget_SOURCES)
OBJECTS = $(libWINGs_a_OBJECTS) $(wtest_OBJECTS) $(wmquery_OBJECTS) $(wmfile_OBJECTS) $(fontl_OBJECTS) $(testmywidget_OBJECTS)

all: all-recursive all-am

.SUFFIXES:
.SUFFIXES: .S .c .o .s
$(srcdir)/Makefile.in: Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4)
	cd $(top_srcdir) && $(AUTOMAKE) --gnu WINGs/Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status


mostlyclean-libLIBRARIES:

clean-libLIBRARIES:
	-test -z "$(lib_LIBRARIES)" || rm -f $(lib_LIBRARIES)

distclean-libLIBRARIES:

maintainer-clean-libLIBRARIES:

install-libLIBRARIES: $(lib_LIBRARIES)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(libdir)
	list='$(lib_LIBRARIES)'; for p in $$list; do \
	  if test -f $$p; then \
	    echo " $(INSTALL_DATA) $$p $(DESTDIR)$(libdir)/$$p"; \
	    $(INSTALL_DATA) $$p $(DESTDIR)$(libdir)/$$p; \
	  else :; fi; \
	done
	@$(POST_INSTALL)
	@list='$(lib_LIBRARIES)'; for p in $$list; do \
	  if test -f $$p; then \
	    echo " $(RANLIB) $(DESTDIR)$(libdir)/$$p"; \
	    $(RANLIB) $(DESTDIR)$(libdir)/$$p; \
	  else :; fi; \
	done

uninstall-libLIBRARIES:
	@$(NORMAL_UNINSTALL)
	list='$(lib_LIBRARIES)'; for p in $$list; do \
	  rm -f $(DESTDIR)$(libdir)/$$p; \
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

libWINGs.a: $(libWINGs_a_OBJECTS) $(libWINGs_a_DEPENDENCIES)
	-rm -f libWINGs.a
	$(AR) cru libWINGs.a $(libWINGs_a_OBJECTS) $(libWINGs_a_LIBADD)
	$(RANLIB) libWINGs.a

mostlyclean-noinstPROGRAMS:

clean-noinstPROGRAMS:
	-test -z "$(noinst_PROGRAMS)" || rm -f $(noinst_PROGRAMS)

distclean-noinstPROGRAMS:

maintainer-clean-noinstPROGRAMS:

wtest: $(wtest_OBJECTS) $(wtest_DEPENDENCIES)
	@rm -f wtest
	$(LINK) $(wtest_LDFLAGS) $(wtest_OBJECTS) $(wtest_LDADD) $(LIBS)

wmquery: $(wmquery_OBJECTS) $(wmquery_DEPENDENCIES)
	@rm -f wmquery
	$(LINK) $(wmquery_LDFLAGS) $(wmquery_OBJECTS) $(wmquery_LDADD) $(LIBS)

wmfile: $(wmfile_OBJECTS) $(wmfile_DEPENDENCIES)
	@rm -f wmfile
	$(LINK) $(wmfile_LDFLAGS) $(wmfile_OBJECTS) $(wmfile_LDADD) $(LIBS)

fontl: $(fontl_OBJECTS) $(fontl_DEPENDENCIES)
	@rm -f fontl
	$(LINK) $(fontl_LDFLAGS) $(fontl_OBJECTS) $(fontl_LDADD) $(LIBS)

testmywidget: $(testmywidget_OBJECTS) $(testmywidget_DEPENDENCIES)
	@rm -f testmywidget
	$(LINK) $(testmywidget_LDFLAGS) $(testmywidget_OBJECTS) $(testmywidget_LDADD) $(LIBS)

install-includeHEADERS: $(include_HEADERS)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(includedir)
	@list='$(include_HEADERS)'; for p in $$list; do \
	  if test -f "$$p"; then d= ; else d="$(srcdir)/"; fi; \
	  echo " $(INSTALL_DATA) $$d$$p $(DESTDIR)$(includedir)/$$p"; \
	  $(INSTALL_DATA) $$d$$p $(DESTDIR)$(includedir)/$$p; \
	done

uninstall-includeHEADERS:
	@$(NORMAL_UNINSTALL)
	list='$(include_HEADERS)'; for p in $$list; do \
	  rm -f $(DESTDIR)$(includedir)/$$p; \
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

subdir = WINGs

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
all-am: Makefile $(LIBRARIES) $(PROGRAMS) $(HEADERS)

install-exec-am: install-libLIBRARIES

install-data-am: install-includeHEADERS

uninstall-am: uninstall-libLIBRARIES uninstall-includeHEADERS

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
	$(mkinstalldirs)  $(DATADIR)$(libdir) $(DATADIR)$(includedir)


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
mostlyclean-am:  mostlyclean-libLIBRARIES mostlyclean-compile \
		mostlyclean-noinstPROGRAMS mostlyclean-tags \
		mostlyclean-generic

clean-am:  clean-libLIBRARIES clean-compile clean-noinstPROGRAMS \
		clean-tags clean-generic mostlyclean-am

distclean-am:  distclean-libLIBRARIES distclean-compile \
		distclean-noinstPROGRAMS distclean-tags \
		distclean-generic clean-am

maintainer-clean-am:  maintainer-clean-libLIBRARIES \
		maintainer-clean-compile \
		maintainer-clean-noinstPROGRAMS maintainer-clean-tags \
		maintainer-clean-generic distclean-am

mostlyclean:  mostlyclean-recursive mostlyclean-am

clean:  clean-recursive clean-am

distclean:  distclean-recursive distclean-am
	-rm -f config.status

maintainer-clean:  maintainer-clean-recursive maintainer-clean-am
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

.PHONY: mostlyclean-libLIBRARIES distclean-libLIBRARIES \
clean-libLIBRARIES maintainer-clean-libLIBRARIES uninstall-libLIBRARIES \
install-libLIBRARIES mostlyclean-compile distclean-compile \
clean-compile maintainer-clean-compile mostlyclean-noinstPROGRAMS \
distclean-noinstPROGRAMS clean-noinstPROGRAMS \
maintainer-clean-noinstPROGRAMS uninstall-includeHEADERS \
install-includeHEADERS install-data-recursive uninstall-data-recursive \
install-exec-recursive uninstall-exec-recursive installdirs-recursive \
uninstalldirs-recursive all-recursive check-recursive \
installcheck-recursive info-recursive dvi-recursive \
mostlyclean-recursive distclean-recursive clean-recursive \
maintainer-clean-recursive tags tags-recursive mostlyclean-tags \
distclean-tags clean-tags maintainer-clean-tags distdir info dvi \
installcheck all-am install-exec-am install-data-am uninstall-am \
install-exec install-data install uninstall all installdirs \
mostlyclean-generic distclean-generic clean-generic \
maintainer-clean-generic clean mostlyclean distclean maintainer-clean


# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
