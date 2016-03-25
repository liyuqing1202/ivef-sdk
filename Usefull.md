### Getting the code ###
If you plan to make changes, use this command to check out the code as yourself using HTTPS (for the trunk):

> svn checkout https://ivef-sdk.googlecode.com/svn/trunk/ ivef-sdk

or for a patch release

> svn checkout https://ivef-sdk.googlecode.com/svn/branches/IVEF_0_1_RELEASE ivef-sdk

if you only want to build a stable version, get a tagged version:

> svn checkout http://ivef-sdk.googlecode.com/svn/tags/IVEF_0_1_0 ivef-sdk-read-only

### Creating a tag ###
Tags are created to freeze development at a certain point. One can create tags for a new version or a release candidate or a beta. Over time, release candidates and betas may be removed. Other tags will never be removed.

Note that major and minor tagging als requires the making of a branch

> svn copy https://ivef-sdk.googlecode.com/svn/trunk https://ivef-sdk.googlecode.com/svn/tags/IVEF_0_1_0_RC3

or (for a patch in the 0\_1 branch)

> svn copy https://ivef-sdk.googlecode.com/svn/branches/IVEF_0_1_RELEASE https://ivef-sdk.googlecode.com/svn/tags/IVEF_0_1_3

### Creating a branch ###
When a major or minor version is finished (e.g. x.y.0) a release branch is created. This branch is used to fix any problems that may occur in that release branch. This branch can also be tagged (e.g. x.y.n+1)

> svn copy https://ivef-sdk.googlecode.com/svn/tags/IVEF_0_1_0 https://ivef-sdk.googlecode.com/svn/branches/IVEF_0_1_RELEASE


---

[Home](http://code.google.com/p/ivef-sdk/) [Contents](Contents.md)