# makefile to create the man files for Iron Spring PL/I

ALL: plic.xml ispp.xml
all: ALL

plic.1: plic.xml
	xsltproc /usr/share/sgml/docbook/xsl-stylesheets/manpages/docbook.xsl plic.xml

ispp.1: ispp.xml
	xsltproc /usr/share/sgml/docbook/xsl-stylesheets/manpages/docbook.xsl ispp.xml

