# Introduction to Git and Version Control

## 1. What is Version Control?

Version Control is a system that records changes made to files over time. It allows developers to track modifications, restore previous versions, and collaborate with others.

It is particularly useful when multiple developers work on the same project.

### Why is Version Control Important?

- Tracks changes made to files.
- Maintains a history of modifications.
- Allows recovery of previous versions.
- Supports collaboration among developers.
- Helps identify when and why a change was introduced.

## 2. Types of Version Control Systems

There are three major types of version control systems.

### 2.1 Local Version Control System

In this system, version history is maintained on the local computer.

**Limitation:** Collaboration and sharing become difficult because the history is stored locally.

### 2.2 Centralized Version Control System (CVCS)

A centralized system maintains a central server containing the project and its version history.

Developers connect to this server to access and modify files.

**Examples:** SVN and Perforce.

**Limitation:** The central server becomes a single point of failure.

### 2.3 Distributed Version Control System (DVCS)

In a distributed system, every developer has a complete copy of the repository, including its history.

This allows developers to work independently and synchronize their changes later.

**Example:** Git.

## 3. What is Git?

Git is a free, open-source, distributed version control system used to track changes in source code and other files.

It was originally created by Linus Torvalds in 2005.

### Features of Git

- Distributed architecture.
- Fast performance.
- Branching and merging support.
- Data integrity.
- Offline operations.
- Support for collaboration.

## 4. What is GitHub?

GitHub is a cloud-based platform that hosts Git repositories.

It provides additional features for collaboration, project management, code review, and sharing projects.

### Git vs GitHub

| Git | GitHub |
|---|---|
| Version control system | Hosting and collaboration platform |
| Works locally | Primarily cloud-based |
| Tracks file changes | Hosts Git repositories |
| Developed by Linus Torvalds | Owned by Microsoft |
| Can work without internet | Internet generally required for remote operations |

## 5. Important Git Terminology

| Term | Meaning |
|---|---|
| Repository | A project directory tracked by Git |
| Commit | A snapshot of recorded changes |
| Branch | An independent line of development |
| Working Directory | Files currently being modified |
| Staging Area | Area where changes are prepared for commit |
| Remote | A version of the repository hosted elsewhere |
| Clone | Creating a local copy of a remote repository |
| Merge | Combining changes from different branches |

## 6. How Git Works

Git generally follows three important stages:

1. Working Directory – Modify or create files.
2. Staging Area – Select changes to include in the next commit.
3. Repository – Permanently record staged changes through a commit.

### Basic Workflow

```text
Working Directory
       |
       | git add
       v
Staging Area
       |
       | git commit
       v
Local Repository
       |
       | git push
       v
Remote Repository (GitHub)
```

## 7. Conclusion

Git helps developers manage project history, track changes, and collaborate efficiently. GitHub extends these capabilities by providing a platform for hosting and sharing repositories.

Understanding these fundamentals is the first step toward using Git effectively.