# About
 This Repository is created to learn and test git commands.

## Initialize, add and commit
 ```
 git init
 git add .
 git commit -m "Initial Commit" 
 ```

## Commit to an earlier date. 
 ```
 git commit -m "message" --date "Day Month date hh:mm:ss yyyy +0530"
 ```

## Create and switch to branch
 ```
 git branch branch_name
 git checkout branch_name
 
       OR
 
 git checkout -b branch_name
 ```

## add and commit together all tracked files
 ```
 git commit -am "message"
 git commit -a -m "message"
 ```
 
## show log file with detailed stats and graph
 ```
 git log --stat --graph
 ```
 
## change the most recent commit messages
 ```
 git commit --amend -m "message"
 ```

## amend the message for multiple commits or older commit
 ```
 git rebase -i HEAD~n
 ``` 
## Reset current HEAD to the specified state 
 ```
 git reset #hashCode
 git reset --soft|hard #hashCode
 
 git reset HEAD@{1}					//To undo reset if reset was used one time
 git reset HEAD@{N}					//undo reset if reset was used n times
 
 git reset #hashCode				//We can also undo reset using hashCode
 ```
# working with remotes
## cloning or downloading git file to local
 ```
 git clone <url>
 ```
## list of remote repository with urls
 ```
 git remote -v
 ```
 
## adding multiple remotes
 ```
 git remote add <alias> <url>
 ```
 
## fetch data from remote
 ```
 git fetch <remote>
 ```

## more information about a particular remote
 ``` 
 git remote show <remote>
 ```

## to change a remote’s shortname
 ``` 
 git remote rename <oldname> <newName>
 ```

## remove a remote
 ``` 
 git remote remove/rm <remote>
 ```

## push to remote origin master
 ```
 git push -u origin master
 ```

## force a git push
 ``` 
 git push --force
 ```



