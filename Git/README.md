# Git

Git 是一个开源的分布式版本控制系统，用于敏捷高效地处理任何或小或大的项目。
分布式相比于集中式的最大区别在于开发者可以提交到本地，每个开发者可以通过克隆(`git clone`)，在本地机器上拷贝一个完整的Git仓库。<br>

git下载地址：<https://git-scm.com/downloads>

## Git学习网站

- Git简明指南：<https://rogerdudler.github.io/git-guide/index.zh.html>
- Git教程-廖雪峰的官方网站：<https://www.liaoxuefeng.com/wiki/896043488029600>
- Git教程|菜鸟教程：<https://www.runoob.com/git/git-tutorial.html>

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
如果新文件已存在，但还是要重命名，可以使用`-f`参数<br>
注：这会覆盖源文件
