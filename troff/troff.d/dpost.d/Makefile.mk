VPATH=..
OBJ = dpost.o dpost_draw.o color.o pictures.o ps_include.o dpost_afm.o \
	dpost_makedev.o glob.o misc.o request.o dpost_version.o getopt.o \
	asciitype.o dpost_otf.o

FLAGS = -I. -I.. -DFNTDIR='"$(FNTDIR)"' -DPSTDIR='"$(PSTDIR)"' $(EUC)

.c.o:
	$(CC) $(CFLAGS) $(WARN) $(CPPFLAGS) $(FLAGS) -c $<

all: dpost

dpost: $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) $(LIBS) -o dpost

install:
	$(INSTALL) -c dpost $(ROOT)$(BINDIR)/dpost
	$(STRIP) $(ROOT)$(BINDIR)/dpost

clean:
	rm -f $(OBJ) dpost core log *~

mrproper: clean

color.o: color.c gen.h ext.h
dpost.o: dpost.c comments.h gen.h path.h ext.h ../dev.h dpost.h afm.h \
	asciitype.h
dpost_draw.o: dpost_draw.c gen.h ext.h
glob.o: glob.c gen.h
misc.o: misc.c gen.h ext.h path.h asciitype.h
pictures.o: pictures.c comments.h gen.h path.h
ps_include.o: ps_include.c ext.h gen.h asciitype.h path.h
request.o: request.c gen.h request.h path.h
dpost_afm.o: ../dev.h afm.h ../afm.c
dpost_otf.o: ../dev.h afm.h ../otf.c
dpost_makedev.o: ../dev.h ../makedev.c
asciitype.o: asciitype.h
dpost_version.o: dpost_version.c ../../version.c
