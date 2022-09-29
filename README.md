# Codeql training

## Install codeqlcli

```
wget https://github.com/github/codeql-action/releases/download/codeql-bundle-20220923/codeql-bundle-linux64.tar.gz
tar -xvzf ./codeql-bundle-linux64.tar.gz
```

then

Add `/<extraction-root>/codeql` to the PATH

Follow instructions [here](https://docs.github.com/en/enterprise-server@3.6/code-security/code-scanning/using-codeql-code-scanning-with-your-existing-ci-system/installing-codeql-cli-in-your-ci-system#setting-up-the-codeql-cli-in-your-ci-system)

## Install VSCode extension
Follow instructions [here](https://codeql.github.com/docs/codeql-for-visual-studio-code/setting-up-codeql-in-visual-studio-code/#installing-the-extension)

(You mat have to chnage the path of codeql to the one you extracted: refer [here](https://codeql.github.com/docs/codeql-for-visual-studio-code/setting-up-codeql-in-visual-studio-code/#configuring-access-to-the-codeql-cli))

## Creating CodeQL DB
```
codeql database create <database_dir> --overwrite --language=cpp
```

## Download CodeQL packs
```
codeql pack download codeql/cpp-queries
```
