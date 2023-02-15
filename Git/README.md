# Git

Git 是一个开源的分布式版本控制系统，用于敏捷高效地处理任何或小或大的项目。
分布式相比于集中式的最大区别在于开发者可以提交到本地，每个开发者可以通过克隆(`git clone`)，在本地机器上拷贝一个完整的Git仓库。<br>

git下载地址：<https://git-scm.com/downloads>

## Git学习网站

- Git简明指南：<https://rogerdudler.github.io/git-guide/index.zh.html>
- Git教程-廖雪峰的官方网站：<https://www.liaoxuefeng.com/wiki/896043488029600>
- Git教程|菜鸟教程：<https://www.runoob.com/git/git-tutorial.html>

## 快速导航

- [git init](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-init "git init")
- [git clone](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-clone-url "git clone")
- [git add](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-add "git add")
- [git commit](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-commit-files--m-message "git commit")
- [git status](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-status "git status")
- [git log](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-log "git log")
- [git blame](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-blame "git blame")
- [git diff](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-diff "git diff")
- [git reset](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-reset---soft----mixed----hard-head- "git reset")
- [git rm](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-rm "git rm")
- [git mv](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-mv "git mv")
- [git remote](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-remote "git remote")
- [git fetch](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-remote "git fetch")
- [git push](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-push "git push")
- [git merge](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-merge "git merge")
- [git pull](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-pull "git pull")
- [git branch](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-branch "git branch")
- [git checkout](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-checkout "git branch")
- [git tag](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-tag "git tag")
- [git reflog](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git-reflog "git reflog")

## git init

在当前目录初始化git仓库

## git clone [url]

将一个Git仓库从url拷贝到本地

## git add

`git add [file1] [file2] ...`<br>
将选中文件添加到暂存区<br>

`git add [dir]`<br>
将选中目录添加到缓存区<br>

`git add .`<br>
将当前目录所有文件和目录添加到缓存区<br>

## git commit [files...] -m [message]

提交暂存区的文件到仓库区<br>
`[message]`为备注信息

注：在提交之前应先设置提交的用户信息<br>
`git config <--global> user.name [name]`<br>
`git config <--global> user.email [email]`<br>

## git status

查看当前仓库状态<br>
可用`-s`参数获取简短的输出

## git log

查看提交历史记录

可用`--oneline`参数查看历史记录的简洁版本<br>
可用`--graph`参数查看<br>
可用`--reverse`参数逆向显示日志<br>

`git log [--author=name]`<br>
可用于查找指定用户的提交日志

`git log [--before={3.weeks.ago} --after={2010-04-18}]`<br>
查找三周前到2010年4月18日之后的提交日志

`git log --no-merges`<br>
隐藏合并提交记录

`git log [-n]`<br>
显示前n条提交记录

## git blame

`git blame [file]`
以列表形式查看文件的历史修改记录

## git diff

`git diff [file]`<br>
显示缓存区和工作区的差异

`git diff --cached [file]`<br>
显示缓存区与上一次提交的差异

`git diff [first-branch]...[second-branch]`<br>
显示两次提交之间的差异

## git reset [--soft | --mixed | --hard] [HEAD] <file>

`--mixed`(默认)<br>
将分支HEAD指向给定版本，将缓存区文件重置为上次提交文件，工作区文件保持不变<br>
`--soft`<br>
将分支HEAD指向给定版本，不修改缓存区和工作区文件<br>
`--hard`<br>
将分支HEAD指向给定版本，将缓存区和工作区都回退到上一版本，并删除之前的所有信息提交<br>

## git rm

git rm命令用于删除文件

`git rm <-f> [file]`<br>
将文件从工作区和暂存区删除<br>
若文件已经被修改，则需要加上`-f`参数强制删除

`git rm --cached [file]`<br>
将文件从暂存区删除，但工作区保留

`git rm -r *`<br>
可以递归删除，如果后面跟着一个目录做参数，则会递归删除所有子目录和文件

## git mv

`git mv [file] [newfile]`<br>
用于移动或重命名一个文件、目录或软连接

`git mv -f [file] [newfile]`<br>
如果新文件已存在，但仍要重命名，可使用`-f`参数，但这会覆盖源文件

## git remote

`git remote -v`<br>
显示所有远程仓库

`git remove show [remote]`<br>
显示某个远程仓库的信息

`git remote add [shortname] [url]`<br>
添加远程版本库，其中`[shortname]`是本地版本库

`git remote rm [shortname]`<br>
删除远程仓库

`git remote rename [old_name] [new_name]`<br>
重命名

## git fetch

`git fetch [alias]`<br>
从远程仓库下载新分支与数据

## git merge

  
`git merge [branch]`<br>
合并`branch`到当前分支

`git merge [alias]/[branch]`<br>
将远程仓库`[alias]`的`[branch]`分支合并到当前分支

## git pull

`git pull [origin] [remote-branch]:[local-branch]`<br>
将远程主机`origin`的`remote-branch`分支合并到本地`local-branch`分支

## git push

`git push [origin] --delete [branch]`<br>
删除远程主机`origin`的`branch`分支

`git push [origin] [remote-branch]:[local-branch]`<br>
将本地`local-branch`分支推送到远程主机`origin`的`remote-branch`分支

使用`--force`参数可以在远程版本与本地版本有差异的时候强制推送<br>

## git branch

`git branch`<br>
列出本地分支

`git branch [branch-name]`<br>
创建一个叫做`branch-name`的分支
  
`git branch -d [branch-name]`<br>
删除`branch-name`分支

## git checkout

`git checkout <-b> [branch-name]`<br>
切换到`branch-name`分支<br>
添加`-b`参数时将自动创建该分支

## git tag

`git tag`<br>
查看当前所有标签

`git tag <-a> [tag-name]`<br>
给当前快照打上名为`tag-name`的标签<br>
可用`-a`参数表示提交一个带注解的标签

`git tag <-a> [tag-name] -m [message]`<br>
指定标签信息命名
  
`git tag -s [tag-name] -m [message]`<br>
PGP签名标签命名
  
## git reflog

查看历史命令

[点我返回页首](https://github.com/simpleClover/LearningNotes/blob/main/Git/README.md#git "点我返回页首")
