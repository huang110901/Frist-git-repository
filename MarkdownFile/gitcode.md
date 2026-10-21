# git learning

快捷打开git bash :按shift再单击右键

### 命令学习

- cd  改变目录
- cd ..  回退上级目录
- pwd 显示当前所在目录路径
- ls（ll）  列出当前目录所有文件
- touch 新建一个文件
- rm 删除一个文件
- mkdir 新建一个目录（文件夹）
- rm -r 删除一个文件夹
- mv 移动文件
- reset 清屏
- history 查看命令设定
- help 帮助
- exit 退出
- #表示注释

### 配置

- 查看配置命令  git config -l

1. 系统全局配置 git config --system -l
2. 用户全局 git config --global -l
3. 当前仓库 git config --global -l
4. 

- 设置配置

1. git config --global user.name "名称"

> --global 表示所有Git仓库使用该邮箱和用户名
> 在特定项目目录下 使用--local 可设置不同用户名和邮箱

2. 邮箱

### 基本理论

- 工作目录 git add files 提交暂存区
- 暂存区 git commit 提交本地仓库
- 工作区 git commit -a 提交本地仓库
- git push 提交远程仓库

#### 反向

- git pull
- git clone
- git checkout

## 常用git命令

- git log 查看提交历史

> git log -n20 查看近20条
> git log -n20 --online 一行输出
> git log -n20 --graph 显示分支
> git log --follow [file]显示文件版本历史

- git status 查看当前文件状态
- git diff 查看文件修改差异
