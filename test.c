#include <linux/init.h>
#include <linux/syscalls.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sched.h>


SYSCALL_DEFINE1(test, int, cmd)
{
        struct task_struct *current_task = current;
        pid_t pid = current_task->pid;
        uid_t uid = current_uid().val;

        pr_err("[X] Linux Kernel Assignment1\n");
        pr_err("[+] Current Pid : %d, UID : %d\n",pid,uid);
        return 0;
}