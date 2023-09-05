include ../../base.mk 

SRCS = stdout.c stdin.c
OBJS = $(SRCS:.c=.o)

MOD = stdinout
ACV = lib$(MOD).a

.PHONY: install clean distclean

install:
	$(MAKE) -C ./ $(OBJS)
	$(AR) -crs $(ACV) $(OBJS)
	$(MKDIR) $(LIBDIR)
	$(MV) $(ACV) $(LIBDIR)
clean:
	$(RM) $(OBJS)
distclean: clean
	$(RM) $(LIBDIR)/$(ACV)

stdout.o: stdout.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCDIR)
stdin.o: stdin.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCDIR)
