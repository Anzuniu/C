## Preliminary tests

- Defense can only happen if the student being evaluated or groups is present. This way everybody learns by sharing knowledge with each other.
- Uf no work has been submited (or wrong files, wrong directory, or wrong filenames), the grade is 0, and the evaluation process ends.
- For this project, you have to clone theus Git repository on their station.

## General instructions

- During the defense, as soon as you need help to verify a point, the student evaluated must help you.
- Ensure that the "signature.txt" file is present at the root of the cloned repository.
- Check that the signature contained in "signature.txt" is identical to that of the ".vdi" file of the virtual machine to be evaluated. A simple "diff" should allow you to compare the two signatures. If necessary, ask the student being evaluated where theris ".vdi" file is located.
- As a precaution, you can duplicate the initial virtual machine in order to keep a copy.
- Start the virtual machine to be evaluated.
- If something doesn't work as expected or the two signatures differ, the evaluation stops here.

## Mandatory part

The student being evaluated should explain to you simply:
  - How a virtual machine works.
  - Their choice of operating system.
  - The basic differences between Rocky and Debian.
  - The purpose of virtual machine.
  - If the evaluated student chose Rocky: what SELinux and DNF are.
  - If the evaluated student chose Debian: the difference between aptitude and apt, and what APPPArmir is. During the defense, a script must display information all every 10 minutes. Its operation will be checked in detail later. If the explanations are not clear, the evaluation stops here.

## Simple setup
- Ensure that the machine does not have a graphical environment at launch. A password will be requested before attempting to connect to this machine. Finally, connect with a user with the help of the student beiing evaluated. This user must not be root. Pay attention to the password chosen. it must folloow the rules imposed in the subject.
- Check that the UFW service is started with the help of the evaluator.
- Check that the SSH service is started with the help of the evaluator.
- Check that the chosen operating system is Debian or Rocky with the help of the evaluator. If something does not work as expected or is not clearly explained, the evaluation stops here.

## User
Remember: Whenever you need help checking something, the student being evaluated shoyld be able to help you.
The subject requests that a user with the login of the student being evaluated is present on the virtual machine. Check that it has been added and that it belongs to the "sudo" and "user42" group.
Make sure the rules imposed in the subject concerning the password policy have been put in the place following the following steps.
Firstm create a new user. Assign it a password of your choice, respeting the subject rules. The student being evaluated must now explain to you how they were able to set up the rules requested in the subject on their virtual machine.
Normally there should be one or two modified files. If there is any problem, the evaluation stops here.
- Now that you have a new user, ask the student being evaluated to create a group named "evaluation" in front of you and assign it to this user. Finally, check that this user belongs to the "evaluating" group.
- Finally, ask the student being evaluated to explain the advantages of this password policy, as well as the advantages and disvantages of its implementation. Of course, answering that it is because the subject asks for it does not count.

##Hostname and partitions
Remember: Whenever you need help checking something, the student being evaluated should be able to help you.
- Check that the hostname of the machine is correctly formatted as follows: login42 (login of the student being evaluted).
- Modify this hostname by replacing the login with yours, then restart the machine. If on restart, the hostname has not been updated, the evaluation stops here.
- You can now restore the machine to the original hostname.
- Ask the student being evaluated how to view the partitions for this virtual machine.
- Compare the output with the example given in the subject. Please note: if the student evaluated makes the bonuses, it will be necessary to refer to the bonus example.
  This part is an opportunity to discuss the scores! The student being evaluated should give you a brief explanation of how LVM works and what it is all about.

## SUDO
- Check that
- Modify this hostname by replacing the login with yours, then restart the machine. If on restart, the hostna,e has not been updated, the evaluation stops here.
- You can now restore the machine to the original hostname. 
