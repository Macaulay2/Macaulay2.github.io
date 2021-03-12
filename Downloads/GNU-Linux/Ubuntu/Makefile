all: FOOTER.html README.html
	../../../Scripts/index-new-html -t ../../../Style/trailer.html -l
README.html : README0.html README1.html
	rm -f $@
	cat $^ >$@
	chmod a-w $@
FOOTER.html : FOOTER0.html Makefile
	rm -f $@
	<$< egrep -v '<!--[^U]-->' >$@
	chmod a-w $@
