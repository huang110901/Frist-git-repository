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
  >git rm -r --cashed 文件夹名（仅从git中删除某文件夹）
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

- 设置配置

1. git config --global user.name "名称"

> --global 表示所有Git仓库使用该邮箱和用户名
> 在特定项目目录下 使用--local 可设置不同用户名和邮箱

2. 邮箱

### 基本理论

- 工作目录`git add <文件名> `提交暂存区

> `git add . `添加所有文件

- 暂存区 `git commit `提交本地仓库

**需要按==i键==切换编写注释，然后==按 : 键==切换命令按==w==保存再==q==退出**

> `git commit -m "描述本次修改内容" ` （**要用英文符号**）
> `git commit filename` 提交指定仓库区

- 工作区 `git commit -m "描述" -a `提交本地仓库
- 本地仓 `git push `提交远程仓库

> `git push -u origin  "master" `全部推送

#### 反向

- 拉取远程更新` git pull/git fetch`
- 克隆远程仓库 `git clone <仓库地址>`
- `git checkout -- <文件名>`撤销工作区修改，恢复到上次提交状态（==慎用==）
- 
  - `git reset --<文件名>` 撤销提交(会改变提交历史，==适用未推送远程的本地修改==)
    >加后缀 
  --soft HEAD~1/标签/commit id
   仅撤销提交，代码保留暂存区
  --mixed(可省) 撤销提交及暂存
  --hard 撤销提交及所有修改(含工作目录)    
  - `git revert`回退提交，建立一个新的撤销后的提交历史（==适用于团队合作==）



#### 关于分支
- 创建分支`git branch 分支名`
- 切换分支`git checkout 分支名`
- 创建并切换分支` git switch -c <新分支名>/git checkout -b 新分支名`
>在分支创建并切换分支 `git checkout -b 新分支名 本地已有分支`
- `git branch  `查看所有分支
- `git merge <要合并的分支名>`合并分支
- `git branch -d <分支名>` 删除空分支
>`git branch -D 分支名` 强制删除非空分支

### 常用git命令

- `git log `查看提交历史

> git log -n20 查看近20条
> git log -n20 --online 一行输出
> git log -n20 --graph 显示分支
> git log --follow [file]显示文件版本历史

- `git status` 查看当前文件状态
- `git diff `查看文件修改差异
- `git init `初始化新仓库，会生成.git文件夹

### 标签`git tag`
##### （例：v1.0、beta(测试版)
- 轻量标签，指向最新的commit`git tag 标签名`
- 附注标签 `git tag -a <标签名> -m 标签说明`
  >-a 表⽰创建带注释的标签。
  >-m ⽤来填写具体的标签描述。
- 对过去记录打标签`git tag -a <标签名> <commit的哈希值> -m "标签说明"`
  >用git log查看commit id 用前六位为哈希值
- 查标签列表`git tag`
- 查看标签说明`git show 标签名`
- 推送标签到远程仓库`git push origin <标签名>`
  
## GitFlow 工作流
![1794401114481](image/gitcode/1794401114481.png)