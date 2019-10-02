#############################################################################
# 
# Makefile that
#    - defers commands to the subdirectories
#
# (c) Wouter van Ooijen (www.voti.nl) 2019
#
# Distributed under the Boost Software License, Version 1.0.
# (See accompanying file LICENSE_1_0.txt or copy at 
# http://www.boost.org/LICENSE_1_0.txt)
# 
#############################################################################

ifeq ($(OS),Windows_NT)
   REMOVE := $(BMPTK)/tools/bmptk-rm 
   MAKE := bmptk-make
else
   REMOVE := rm -rf
   MAKE := make
endif

.PHONY: renumber clean build run error notab

renumber:
	$(MAKE) -f Makefile.link renumber-subdirs

build:
	$(MAKE) -f Makefile.link build-subdirs
   
clean:
	$(MAKE) -f Makefile.link clean-subdirs
   
notab:
	$(MAKE) -f Makefile.link notab-subdirs
   
 
# user error handling   

run: error

MSG  = You are trying to run in a library directory.
MSG += Make one of the project source files your current editor file.

error:
	$(error $(MSG) )     
	
		