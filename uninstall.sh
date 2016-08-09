#!/bin/bash

set -e

if [ $UID != "0" ]; then
    echo "Must be run as root" >&2
    exit 1
fi

set -x
PLIST="/Library/LaunchDaemons/org.icecream.iceccd.plist"

launchctl unload "$PLIST"
rm "$PLIST"
{ set +x; } 2> /dev/null

echo "done"
