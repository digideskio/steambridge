#!/bin/bash

. ./common/settings.sh

echo "#ifndef ___STEAM_BRIDGE_CONFIG_H___
#define ___STEAM_BRIDGE_CONFIG_H___

// NOTICE: This file is automatically generated by make config
//         (common/config.sh).  See common/settings.sh for instructions
//         on how to modify it.

#define _STEAM_BRIDGE_APPNAME \"$APP_NAME\"
#define _STEAM_BRIDGE_WEBPAGE \"$WEBPAGE\"

#define _STEAM_BRIDGE_VERSION_MAJOR $VERSION_MAJOR
#define _STEAM_BRIDGE_VERSION_MINOR $VERSION_MINOR
#define _STEAM_BRIDGE_VERSION_PATCH $VERSION_PATCH

#define _STEAM_BRIDGE_VERSION_SHORT \"$VERSION_SHORT\"
#define _STEAM_BRIDGE_VERSION_LONG \"$VERSION_LONG\"

#define _STEAM_BRIDGE_ROOT \"$STEAM_BRIDGE_ROOT\"
#define _STEAM_BRIDGE_CONFIG \"$CONFIG_FILENAME\"
#define _STEAM_BRIDGE_API_LIB \"$STEAM_API_LIB\"
#define _STEAM_BRIDGE_APPDB_ROOT \"$APPDB_ROOT\"
#define _STEAM_BRIDGE_APPDB_CONFIG \"$APPDB_CONFIG\"

#endif //___STEAM_BRIDGE_CONFIG_H___
" > common/include/config.h

echo "# NOTICE: This file is automatically generated by make config
#         (common/config.sh).  See common/settings.sh for instructions
#         on how to modify it.

# Root directory of the local steam installation
STEAM_ROOT=\"$STEAM_ROOT\"

# Location of appmanifest_*.acf files
STEAM_APPMANIFESTS=\"$STEAM_APPMANIFESTS\"

# Common root of installed Steam games
STEAM_APPS=\"$STEAM_APPS\"

# Root directory of the SteamBridge deployment
STEAM_BRIDGE_ROOT=\"$STEAM_BRIDGE_ROOT\"

# Configuration filename, used by the C++ library
CONFIG_FILENAME=\"$CONFIG_FILENAME\"

# Location of the Win32 native steam_api proxy DLL
# This is the location when it's deployed
PROXY_DLL=\"$PROXY_DLL\"

# Location of the Winelib bridge library
BRIDGE_LIB=\"$BRIDGE_LIB\"

# Location of Winelib DLLs, used as WINEDLLPATH
WINELIB_PATH=\"$WINELIB_PATH\"

# Location of the native Linux steam_api library
STEAM_API_LIB=\"$STEAM_API_LIB\"

# Root directory of the internal AppDB
APPDB_ROOT=\"$APPDB_ROOT\"

# AppDB configuration filename
APPDB_CONFIG=\"$APPDB_CONFIG\"

# Directory storing the SteamBridge tools
TOOLS_DIR=\"$TOOLS_DIR\"

# Directory storing the Python Runtime library
PYRUNTIME_DIR=\"$PYRUNTIME_DIR\"

# Location of the execute tool script
EXECUTE_TOOL=\"$EXECUTE_TOOL\"

# The official, formal name of the library
APP_NAME=\"$APP_NAME\"

# Version string information
VERSION_MAJOR=$VERSION_MAJOR
VERSION_MINOR=$VERSION_MINOR
VERSION_PATCH=$VERSION_PATCH

VERSION_SHORT=\"$VERSION_SHORT\"
VERSION_LONG=\"$VERSION_LONG\"
" > common/pyruntime/config.py