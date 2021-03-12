all: README.html FOOTER.html
	../../../Scripts/index-new-html -t ../../../Style/trailer.html -l
index: README.html FOOTER.html
	index-html

README.html : ../Ubuntu/README0.html
	rm -f $@
	sed 's/Ubuntu/Debian/g' <$^ >$@
	chmod a-w $@

FOOTER.html : ../Ubuntu/FOOTER0.html
	rm -f $@
	sed 's/Ubuntu/Debian/g' <$^ | egrep -v '<!--[^D]-->' >$@
	chmod a-w $@
