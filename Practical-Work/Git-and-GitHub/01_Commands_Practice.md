# Git commands in documentation order

## Installation and configuration
```bash
git --version
git config --global user.name "Your Name"
git config --global user.email "your-email@example.com"
git config --global --list
```

## Basic commands
```bash
git init
git status
git add README.md
git commit -m "Initial commit"
git log --oneline
```

## Inspecting changes
```bash
git diff
git diff --staged
git status
```

## Branching and merging
```bash
git branch
git switch -c feature-notes
git switch main
git merge feature-notes
```

## Remote repository
```bash
git remote add origin YOUR_REPOSITORY_URL
git remote -v
git push -u origin main
git pull
```

## Undoing changes (only in a practice repo)
```bash
git restore filename
git restore --staged filename
git reset --soft HEAD~1
```
Do not run reset/restore commands in your important portfolio repository unless you understand exactly what they will change.
