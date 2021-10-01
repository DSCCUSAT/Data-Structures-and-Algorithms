![GDSC Cusat](./assets/gdsc-logo.png)

<h1 align="center">Data-Structures-and-Algorithms</h1></center>
<h4 align="center">GDSC CUSAT</h4>

## Content

1. [Forking](#1-forking)
2. [Cloning](#2-cloning)
3. [Syncing](#3-syncing-it)
4. [Let's Contribute](#4-lets-contribute)
5. [Creating a New Branch](#5-creating-a-new-branch)
6. [Help Contributing Guides](#help-contributing-guides)
7. [References](#references)

## Steps to follow

### 1. Forking

You can get your own fork/copy of [DS-Algo Notes](https://github.com/DSCCUSAT/Data-Structures-and-Algorithms) by using the <a href="https://github.com/DSCCUSAT/Data-Structures-and-Algorithms.git"><kbd><b>Fork</b></kbd></a> button.

![Fork SS](./assets/fork.png)

### 2. Cloning

You need to clone (download) it to local machine using

```sh
$ git clone https://github.com/Your_Username/Data-Structures-and-Algorithms.git
```

> This makes a local copy of repository in your machine.
Once you have cloned the `Data-Structures-and-Algorithms` repository in Github, move to that folder first using change directory command on linux and Mac.

```sh
# This will change directory to a folder Data-Structures-and-Algorithms
$ cd Data-Structures-and-Algorithms
```

Move to this folder for all other commands.

### 3. Syncing it

Always keep your local copy of repository updated with the original repository.
Before making any changes and/or in an appropriate interval, run the following commands *carefully* to update your local repository.

```sh
# Fetch all remote repositories and delete any deleted remote branches
$ git fetch --all --prune
# Switch to `master` branch
$ git checkout master
# Reset local `master` branch to match `upstream` repository's `master` branch
$ git reset --hard upstream/master
# Push changes to your forked `Data-Structures-and-Algorithms` repo
$ git push origin master
```

### 4. Let's Contribute

Once you have completed these steps, you are ready to start contributing by checking our `Help Wanted` Issues and creating [pull requests](https://github.com/DSCCUSAT/Data-Structures-and-Algorithms/pulls).

### 5. Creating a new branch

Whenever you are going to make contribution. Please create separate branch using command and keep your `master` branch clean (i.e. synced with remote branch).

```sh
# It will create a new branch with name Branch_Name and switch to branch Branch_Name
$ git checkout -b Branch_Name
```

To switch to desired branch

```sh
# To switch from one branch to other
$ git checkout Branch_Name
```

To add the changes to the branch. Use

```sh
# To add all files to branch Branch_Name
$ git add .
```

Type in a message relevant for the code reveiwer using

```sh
# This message get associated with all files you have changed
$ git commit -m 'relevant message'
```

Now, Push your awesome work to your remote repository using

```sh
# To push your work to your remote repository
$ git push -u origin Branch_Name
```

Finally, go to your repository in browser and click on `compare and pull requests`.
Then add a title and description to your pull request that explains your precious effort.

## Help Contributing Guides

We love to have `articles` and `codes` in different languages and `betterment` of existing ones.

Please discuss it with us first by creating new issue.

## References

- Books 
    - Data Structures and Algorithms Made Easy: Data Structures and Algorithmic Puzzles by Narasimha Karumanchi
    - Data Structures with C by Schaum Series
    - Data Structures: A Pseudocode Approach with C by Richard F. Gilberg
    - Fundamentals Of Data Structures in C by Horowitz
    - Introduction To Algorithms By Thomas H. Cormen
    - Java: The Complete Reference By Herbert Schildt
    - Object Oriented Programming with C++ by E Balaguruswamy
    - Computer Oriented Numerical Methods By V. Rajaraman 
    - Grokking Algorithms: An illustrated guide for programmers and other curious people by Aditya Bhargava
- Websites and Repos
    - [GeeksforGeeks](http://www.geeksforgeeks.org)
    - [HackerEarth](https://www.hackerearth.com/notes)
    - [topcoder](https://www.topcoder.com/community/data-science/data-science-tutorials)
    - [Competetive Programming](https://github.com/AhmadElsagheer/Competitive-programming-library/tree/master/curriculum)
    - [CSES Problems](https://github.com/thcy/CSES-Solutions)

- Courses
    - [Data Structures and Algorithms: Deep Dive using Java](https://www.udemy.com/course/data-structures-and-algorithms-deep-dive-using-java/?LSNPUBID=JVFxdTr9V80&ranEAID=JVFxdTr9V80&ranMID=39197&ranSiteID=JVFxdTr9V80-EBXOsqIOZxpJADn80hEUxA&utm_medium=udemyads&utm_source=aff-campaign)
    - [Learning Data Structure and Algorithms in Python from Scratch](https://click.linksynergy.com/deeplink?id=JVFxdTr9V80&mid=39197&murl=https%3A%2F%2Fwww.udemy.com%2Fcourse%2Flearning-data-structures-algorithms-in-python-from-scratch%2F)
    - [Algorithms and Data Structures — Part 1 and 2](https://pluralsight.pxf.io/c/1193463/424552/7490?u=https%3A%2F%2Fwww.pluralsight.com%2Fcourses%2Fads-part1)
    - [Master the Coding Interview: Data Structures + Algorithms](https://click.linksynergy.com/deeplink?id=JVFxdTr9V80&mid=39197&murl=https%3A%2F%2Fwww.udemy.com%2Fcourse%2Fmaster-the-coding-interview-data-structures-algorithms%2F)