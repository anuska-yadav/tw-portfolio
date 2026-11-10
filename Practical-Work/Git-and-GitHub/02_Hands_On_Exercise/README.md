# Hands-on Git Exercise (Disposable Repository)

Run this in a new practice folder, **not inside your portfolio repository**.

## A. Create the repository
```bash
mkdir git-branch-lab
cd git-branch-lab
git init
```
Create `notes.txt` with:
```text
Git practical: first version
```
Then:
```bash
git add notes.txt
git commit -m "Add first version of notes"
```

## B. Create a branch and merge
```bash
git switch -c feature-notes
```
Change `notes.txt` to add a second line, then:
```bash
git add notes.txt
git commit -m "Update notes on feature branch"
git switch main
git merge feature-notes
git log --oneline --graph --all
```

## C. Simulate a merge conflict
```bash
git switch -c conflict-a
```
Change the first line of `notes.txt` to `Version from branch A`, then commit.
```bash
git add notes.txt
git commit -m "Change note from branch A"
git switch main
```
Change the same first line to `Version from main`, then commit.
```bash
git add notes.txt
git commit -m "Change note from main"
git merge conflict-a
```
Git should report a conflict. Open `notes.txt`, choose the final content and remove all conflict markers. Then:
```bash
git add notes.txt
git commit -m "Resolve merge conflict"
git status
```

## D. Connect a remote (optional)
Create an empty repository on GitHub, then:
```bash
git remote add origin YOUR_REPOSITORY_URL
git push -u origin main
```
Do not include a password or token in the remote URL.
