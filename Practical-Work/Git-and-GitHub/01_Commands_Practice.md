# Git and GitHub Commands — Practical Reference

## 1. Verify installation and configure identity
```bash
git --version
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
git config --global --list
```
Use the name and email you want associated with commits. Do not share credentials or access tokens.

## 2. Create or clone a repository
```bash
mkdir git-practice
cd git-practice
git init
# OR clone an existing repository:
git clone REPOSITORY_URL
```

## 3. Working tree and staging
```bash
git status
git add README.md
git add .
git status
git restore --staged README.md
```
`git add` stages a snapshot of a file. `git restore --staged` unstages it without deleting the working file.

## 4. Commit and inspect history
```bash
git commit -m "Add practical notes"
git log --oneline
git log --oneline --graph --decorate --all
git show HEAD
```

## 5. Compare changes
```bash
git diff
git diff --staged
git diff HEAD
```

## 6. Branches and merging
```bash
git branch
git switch -c feature-notes
# edit and save a file
git add .
git commit -m "Add feature notes"
git switch main
git merge feature-notes
git branch -d feature-notes
```

## 7. Remote repositories
```bash
git remote -v
git remote add origin REPOSITORY_URL
git branch -M main
git push -u origin main
git fetch origin
git pull origin main
git push origin main
```
`fetch` downloads remote objects and refs but does not merge them into the current branch. `pull` fetches and integrates remote changes.

## 8. Undo carefully — use only a disposable practice repo
```bash
git restore filename
git restore --staged filename
git revert COMMIT_ID
git reset --soft HEAD~1
git reset --mixed HEAD~1
```
Avoid `git reset --hard` unless you fully understand that it discards local changes.

## 9. Useful collaboration commands
```bash
git remote add upstream ORIGINAL_REPOSITORY_URL
git fetch upstream
git switch -c contribution
git push -u origin contribution
```
A Pull Request is opened on GitHub's website after pushing a branch to a fork.
