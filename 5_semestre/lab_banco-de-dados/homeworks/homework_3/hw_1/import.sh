#!/bin/bash

mongoimport --drop -d school -c students students.json
