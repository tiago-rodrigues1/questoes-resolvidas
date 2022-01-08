#!/usr/bin/env bash

echo "Nome do dir da questão: "
read DIR_NAME

echo ""

mkdir "$DIR_NAME"
touch "$DIR_NAME/index.cpp"
touch "$DIR_NAME/readme.md"

echo "# Nome da questão" >> "$DIR_NAME/readme.md"
echo "### Link da questão 🔗" >> "$DIR_NAME/readme.md"
echo "" >> "$DIR_NAME/readme.md"