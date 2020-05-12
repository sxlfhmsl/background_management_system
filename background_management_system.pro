TEMPLATE = subdirs

SUBDIRS += \
    bms_mw \
    log4qt/log4qt

bms_mw.depends = log4qt/log4qt
