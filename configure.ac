dnl Process this file with autoconf to produce a configure script.
dnl Created by Anjuta application wizard.

AC_INIT(stochkit_dgap, 0.0.1)

AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE([1.11])

AM_SILENT_RULES([no])

AC_PROG_CXX




dnl ***************************************************************************
dnl Internationalization
dnl ***************************************************************************
IT_PROG_INTLTOOL([0.35.0])

GETTEXT_PACKAGE=stochkit_dgap
AC_SUBST(GETTEXT_PACKAGE)
AC_DEFINE_UNQUOTED(GETTEXT_PACKAGE,"$GETTEXT_PACKAGE", [GETTEXT package name])
AM_GLIB_GNU_GETTEXT





LT_INIT


PKG_CHECK_MODULES(STOCHKIT_DGAP, [libxml-2.0 ])
AX_BOOST_BASE([1.53],, [AC_MSG_ERROR([stochkit needs Boost, but it was not found in your system])])
AX_BOOST_SYSTEM
AX_BOOST_FILESYSTEM
AX_BOOST_THREAD
AX_BOOST_PROGRAM_OPTIONS


AC_OUTPUT([
Makefile
src/Makefile
po/Makefile.in
drivers/Makefile
utility/Makefile
model_parser/Makefile
solvers/Makefile
output/Makefile
])
