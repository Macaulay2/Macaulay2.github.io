include ../../Makefile.include
BODYFILES = $(wildcard *-body.html)
HTMLFILES = $(subst -body,,$(BODYFILES))
index: $(HTMLFILES)
%.html: %-body.html always
	../../Scripts/index-new-html -f "Question $*"  -t ../../Style/trailer.html <$< >$@
always:
