#!/bin/bash
if [ -f ~/.ssh/tbr_username ]
  then
    echo "Welcome back to Team BlueRidge Gerrit!"
    echo "You've already been through setup. Lets continue!"
  else
    echo "Welcome to Team BlueRidge Gerrit"
    echo "You need to setup your account."
    echo "If you don't have a Team BlueRidge Gerrit account, please go to http://gerrit.teamblueridge.com:8080 and create one."
    echo -n "What is your Gerrit username: "
    read un #un = Username
    echo $un > ~/.ssh/tbr_username
	echo "BE SURE YOUR SSH KEYS ARE MATCHED WITH GERRIT IN YOUR SETTINGS"
fi
un=`cat ~/.ssh/tbr_username` # Redefines $un from tbr_username file (from setup)
echo "Your username is $un to reconfigure, run this command (w/o quotes) 'rm -rf ~/.ssh/tbr_username'"
echo -n "What is the project name: "
read projectname
echo -n "What branch are you pushing to: "
read branch
git push "ssh://$un@gerrit.teamblueridge.com:29418/$projectname" "HEAD:refs/for/$branch"
