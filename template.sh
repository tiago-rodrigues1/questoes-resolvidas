#!/usr/bin/env bash

echo "Nome do dir da questão: "
read DIR_NAME

echo ""

mkdir "$DIR_NAME"
touch "$DIR_NAME/index.cpp"
touch "$DIR_NAME/readme.md"

echo "# Nome da questão" >> "$DIR_NAME/readme.md"
echo "### Link da questão 🔗" >> "$DIR_NAME/readme.md"
echo "- " >> "$DIR_NAME/readme.md"

echo "#include <bits/stdc++.h>" >> "$DIR_NAME/index.cpp"
echo "" >> "$DIR_NAME/index.cpp"
echo "using namespace std;" >> "$DIR_NAME/index.cpp"
echo "" >> "$DIR_NAME/index.cpp"
echo "int main() {" >> "$DIR_NAME/index.cpp"
echo "return 0;" >> "$DIR_NAME/index.cpp"
echo "}" >> "$DIR_NAME/index.cpp"