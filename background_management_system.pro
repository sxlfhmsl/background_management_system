TEMPLATE = subdirs

SUBDIRS += \
    bms_mw \
    common_widgets \
    log4qt/log4qt

common_widgets.depends = log4qt/log4qt
bms_mw.depends = log4qt/log4qt common_widgets
