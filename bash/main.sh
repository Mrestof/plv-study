#!/bin/env bash

# check for possible argument passing variations
if [[ $# -lt 1 ]]; then
  echo zero arguments are passed, setting current directory as default
  dir='.'
elif [[ $# -gt 1 ]]; then
  echo more than one argument is passed
  exit 1
elif [[ ! -d $1 ]]; then
  echo not a valid directory
  exit 1
else
  dir=$1
fi

# func that checks all needed criterias of an object and tells the user on hit
function 2print_or_not_2print() {
  if [[ -f $1 ]]; then
    if [[ -h $1 ]]; then
      echo File ${1##*/} is soft link
    elif [[ -x $1 ]]; then
      echo File ${1##*/} is executable
    fi
  fi
}

# call the main func on every member of the working directory
for file in $dir/*; do
  2print_or_not_2print $file
done
