#!/usr/bin/env bash

echo "Nome do dir da questão: "
read DIR_NAME

echo ""

echo "ID da questão: "
read ID

mkdir "$DIR_NAME"
touch "$DIR_NAME/index.cpp"
touch "$DIR_NAME/readme.md"

LINK=$"https://www.beecrowd.com.br/judge/pt/problems/view/$ID"

echo "# Nome da questão" >> "$DIR_NAME/readme.md"
echo "### Link da questão 🔗" >> "$DIR_NAME/readme.md"
echo "" >> "$DIR_NAME/readme.md"
echo "- $LINK" >> "$DIR_NAME/readme.md"