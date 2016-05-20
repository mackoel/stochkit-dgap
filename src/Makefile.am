## Process this file with automake to produce Makefile.in

## Created by Anjuta

stochkit_dgapdir = $(datadir)/stochkit-dgap
stochkit_dgap_DATA = model.xml

EXTRA_DIST = $(stochkit_dgap_DATA)

AM_CPPFLAGS = \
	$(BOOST_CPPFLAGS) \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
	-I../calibrator \
	-I../drivers \
	-I../model_parser \
	-I../output \
	-I../solvers \
	-I../utility \
	-std=c++11 \
	-DMATRIX_STOICHIOMETRY \
	-DMIXED \
	$(STOCHKIT_DGAP_CFLAGS)

AM_CFLAGS =\
	-I../calibrator \
	-I../drivers \
	-I../model_parser \
	-I../output \
	-I../solvers \
	-I../utility \
	-DMATRIX_STOICHIOMETRY \
	-DMIXED \
	 -Wall\
	 -g

bin_PROGRAMS = stochkit_dgap

stochkit_dgap_SOURCES = \
	../drivers/ParallelIntervalSimulation.cpp \
	../drivers/tau_leaping_exp_adapt_mixed_serial.cpp \
	../model_parser/Parameter.cpp \
	../model_parser/StringCalculator.cpp \
	../utility/CommandLineInterface.cpp \
	../utility/Random.cpp \
	../utility/StandardDriverUtilities.cpp

stochkit_dgap_LDFLAGS = $(BOOST_LDFLAGS)

stochkit_dgap_LDADD = $(STOCHKIT_DGAP_LIBS) \
	$(BOOST_FILESYSTEM_LIB) \
	$(BOOST_SYSTEM_LIB) \
	$(BOOST_THREAD_LIB) \
	$(BOOST_PROGRAM_OPTIONS_LIB)
