#!/usr/bin/env bash
for file in *.hpp ; do
    echo "#include \"$file\""
done
