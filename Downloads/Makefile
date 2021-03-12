OPTIONS := -t "$(shell echo `pwd`/../Style/trailer.html)"
include ../Makefile.include
index:
debian:
	$(MAKE) -C GNU-Linux/Debian
index-local:
	../Scripts/index-new-html -l $(OPTIONS)
index: debian index-local
	cd Common && `pwd`/../../Scripts/index-new-html $(OPTIONS)
	cd FreeBSD && `pwd`/../../Scripts/index-new-html $(OPTIONS)
	cd GNU-Linux && `pwd`/../../Scripts/index-new-html $(OPTIONS)
	cd MacOSX && `pwd`/../../Scripts/index-new-html $(OPTIONS)
	cd Microsoft-Windows && `pwd`/../../Scripts/index-new-html $(OPTIONS)
	cd Copyright && make && `pwd`/../../Scripts/index-new-html $(OPTIONS)
	cd OtherSourceCode && `pwd`/../../Scripts/index-new-html $(OPTIONS)
	cd SourceCode && `pwd`/../../Scripts/index-new-html $(OPTIONS)

