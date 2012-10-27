#!/bin/bash
project=MSM7X30_KERNEL
echo "WELCOME TO TBR GERRIT. Please have an account created"
if [ -f ~/.ssh/tbr_username ]
  then
    echo "You've already been through setup. Lets continue!"
  else
    echo -n "what is your Gerrit username: "
    read un
    cat $un > ~/.ssh/tbr_username
	echo "BE SURE YOUR SSH KEYS ARE MATCHED WITH GERRIT IN YOUR SETTINGS"
fi
un=`cat ~/.ssh/tbr_username`
echo "Your username is $un to reconfigure, run this command (w/o quotes) 'rm -rf ~/.ssh/tbr_username'"
echo -n "What branch are you pushing to: "
read branch
git push "ssh://$un@gerrit.teamblueridge.com:29418/$project" "HEAD:refs/for/$branch"
