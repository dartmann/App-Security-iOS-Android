/* Perform the fork */
int result = fork();
if (!result)
	/* If failed, we exit */
	exit(0);
if (result >= 0)
	/* If the fork succeeded, we're jailbroken */
	{ sandbox_is_compromised = 1; }
