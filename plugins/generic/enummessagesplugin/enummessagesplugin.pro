isEmpty(PSISDK) {
    include(../../psiplugin.pri)
} else {
    include($$PSISDK/plugins/psiplugin.pri)
}

SOURCES += \
    enummessagesplugin.cpp

HEADERS += \
    defines.h \
    enummessagesplugin.h



OTHER_FILES += \
    changelog.txt

FORMS += \
    options.ui
