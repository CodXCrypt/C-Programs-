
# Contributing Guidelines

This documentation contains a set of guidelines to help you during the contribution process.

## Submitting Contributions👩‍

Below you will find the process and workflow used to review and merge your changes.

### Step 0 : Find an issue

- Take a look at the Existing Issues or create your **own** Issues!
- Wait for the Issue to be assigned to you after which you can start working on it.
- Note : Every change in this project should/must have an associated issue.

### Step 1 : Fork the Project

- Fork this Repository. This will create a Local Copy of this Repository on your Github Profile.
Keep a reference to the original project in `upstream` remote.  

```bash
git clone https://github.com/<your-username>/<repo-name>  
cd <repo-name>  
git remote add upstream https://github.com/<upstream-owner>/<repo-name>  
```  
![image](https://user-images.githubusercontent.com/74819092/119452180-ad28ce80-bd53-11eb-89bf-3b8d403008af.png)






- If you have already forked the project, update your clone repo before working.

```bash
git remote update
git checkout <branch-name>
git rebase upstream/<branch-name>
```  



### Step 2 : Branching

Create a new branch. Use its name to identify the issue your addressing.

```bash
# It will create a new branch with name Branch_Name and switch to that branch 
git checkout -b branch_name
```

### Step 3 : Work on the issue assigned

- Work on the issue(s) assigned to you.
- Add all the files/folders needed.
- After you've made changes or made your contribution to the project add changes to the branch you've just created by:

```bash  
# To add all new files to branch Branch_Name  
git add .  

# To add only a few files to Branch_Name
git add <some files>
```

### Step 4 : Making a  Commit

- To commit give a descriptive message for the convenience of reviewer by:

```bash
# This message get associated with all files you have changed  
git commit -m "message"  
```

- **NOTE**: A PR should have only one commit. Multiple commits should be squashed.

### Step 5 : Work Remotely

- Now you are ready to your work to the remote repository.
- When your work is ready and complies with the project conventions, upload your changes to your fork:

```bash  
# To push your work to your remote repository
git push -u origin Branch_Name
```

### Step 6 : Creating Pull Request
- Create a new pull request
![image](https://user-images.githubusercontent.com/74819092/119452343-dd706d00-bd53-11eb-8125-c18e10a32e21.png)


- Go to your repository in browser and click on compare and pull requests.
Then add a title and description to your pull request that explains your contribution.  
<img src="https://user-images.githubusercontent.com/74819092/117562121-3b495780-b0ba-11eb-89cc-6271746c265d.png">


- Create a Pull Request which will be reviewed and suggestions would be added to improve it.
- Add Screenshots to help us know what this enhancement/implementation is all about.

## Your Pull Request has been submitted and will be reviewed by the maintainer and merged.



### Need more help?🤔

You can refer to the following articles on basics of Git and Github and also contact the Project Mentors,
in case you are stuck:

- [Watch this video to get started, if you have no clue about open source](https://youtu.be/GaosMNyPKZc)

Happy Contributing!!😇😇
