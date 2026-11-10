# Git and GitHub Troubleshooting

## `fatal: not a git repository`
You are outside a Git repository. Use `cd` to enter the project folder, then check `git status`.

## `remote origin already exists`
Inspect it with `git remote -v`. If the URL is wrong, update it with:
```bash
git remote set-url origin REPOSITORY_URL
```

## `rejected (fetch first)`
The remote has commits you do not have locally. Inspect status, then usually run:
```bash
git pull --rebase origin main
```
Resolve any conflicts, continue the rebase as instructed, then push.

## `nothing to commit, working tree clean`
There are no uncommitted changes. This is normally a good state.

## `Your branch is ahead of origin/main`
You have local commits not yet uploaded:
```bash
git push origin main
```

## Merge conflict
1. Run `git status` to identify conflicted files.
2. Open each file and resolve `<<<<<<<`, `=======`, and `>>>>>>>` markers.
3. Save the file.
4. Run `git add filename`.
5. Complete the merge with `git commit` if Git asks for it.

## Authentication failure
Use GitHub's supported browser/device authentication or a configured SSH key. Never paste passwords or tokens into chat or commit them to the repository.
