nlsdir      = @NLSDIR@

CATALOGS = @MOFILES@

CLEANFILES = $(CATALOGS)

EXTRA_DIST = cs.po de.po es.po fr.po gl.po ja.po ko.po nl.po pt.po se.po it.po \
	no.po ru.po tr.po

POTFILES  = \
	$(top_builddir)/src/appicon.c \
	$(top_builddir)/src/defaults.c \
	$(top_builddir)/src/dialog.c \
	$(top_builddir)/src/dock.c \
	$(top_builddir)/src/event.c \
	$(top_builddir)/src/framewin.c \
	$(top_builddir)/src/icon.c \
	$(top_builddir)/src/main.c \
	$(top_builddir)/src/menu.c \
	$(top_builddir)/src/misc.c \
	$(top_builddir)/src/pixmap.c \
	$(top_builddir)/src/resources.c \
	$(top_builddir)/src/rootmenu.c \
	$(top_builddir)/src/screen.c \
	$(top_builddir)/src/session.c \
	$(top_builddir)/src/stacking.c \
	$(top_builddir)/src/startup.c \
	$(top_builddir)/src/switchmenu.c \
	$(top_builddir)/src/texture.c \
	$(top_builddir)/src/wdefaults.c \
	$(top_builddir)/src/winmenu.c \
	$(top_builddir)/src/winspector.c \
	$(top_builddir)/src/workspace.c \
	$(top_builddir)/src/xutil.c

SUFFIXES = .po .mo

.po.mo: 
	msgfmt -o $@ $<


WindowMaker.pot: $(POTFILES)
	xgettext --default-domain=WindowMaker \
	--add-comments --keyword=_ $(POTFILES)
	if cmp -s WindowMaker.po WindowMaker.pot; then \
	    rm -f WindowMaker.po; \
	else \
	    mv -f WindowMaker.po WindowMaker.pot; \
	fi

install-data-local:  $(CATALOGS)
	$(mkinstalldirs) $(nlsdir) 
	chmod 755 $(nlsdir) 
	for n in $(CATALOGS) __DuMmY ; do \
		if test "$$n" -a "$$n" != "__DuMmY" ; then \
			l=`basename $$n .mo`; \
			$(INSTALL) -m 755 -d $(nlsdir)/$$l; \
			$(INSTALL) -m 755 -d $(nlsdir)/$$l/LC_MESSAGES; \
			$(INSTALL) -m 644 $$n $(nlsdir)/$$l/LC_MESSAGES/WindowMaker.mo; \
		fi; \
	done
