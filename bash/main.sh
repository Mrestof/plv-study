#!/bin/env bash

if [[ $# -lt 1 ]]; then
  echo zero arguments are passed
  exit 1
elif [[ $# -gt 1 ]]; then
  echo more than one argument is passed
  exit 1
elif [[ ! -d $1 ]]; then
  echo not a valid directory
  exit 1
fi

for file in $1/*; do
  if [[ -h $file ]]; then
    echo File ${file##*/} is soft link
  elif [[ -x $file ]]; then
    echo File ${file##*/} is executable
  fi
done
