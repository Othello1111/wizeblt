#include "tcl.h"
#include "tk.h"
#include "blt.h"
#include "bltDecls.h"

#ifndef MODULE_SCOPE
#   ifdef __cplusplus
#       define MODULE_SCOPE extern "C"
#   else
#       define MODULE_SCOPE extern
#   endif
#endif

MODULE_SCOPE BltStubs bltStubs;

/*
* WARNING: The contents of this file is automatically generated by the
* tools/genStubs.tcl script. Any modifications to the function declarations
* below should be made in the generic/tk.decls script.
*/

/* !BEGIN!: Do not edit below this line. */

BltStubs bltStubs = {
    TCL_STUB_MAGIC,
    NULL,
    Blt_TreeGetKey, /* 0 */
    Blt_TreeCreateNode, /* 1 */
    Blt_TreeCreateNodeWithId, /* 2 */
    Blt_TreeDeleteNode, /* 3 */
    Blt_TreeMoveNode, /* 4 */
    Blt_TreeGetNode, /* 5 */
    Blt_TreeFindChild, /* 6 */
    Blt_TreeFindChildRev, /* 7 */
    Blt_TreeFirstChild, /* 8 */
    Blt_TreeNextSibling, /* 9 */
    Blt_TreeLastChild, /* 10 */
    Blt_TreePrevSibling, /* 11 */
    Blt_TreeNextNode, /* 12 */
    Blt_TreePrevNode, /* 13 */
    Blt_TreeChangeRoot, /* 14 */
    Blt_TreeEndNode, /* 15 */
    Blt_TreeIsBefore, /* 16 */
    Blt_TreeIsAncestor, /* 17 */
    Blt_TreePrivateValue, /* 18 */
    Blt_TreePublicValue, /* 19 */
    Blt_TreeGetValue, /* 20 */
    Blt_TreeValueExists, /* 21 */
    Blt_TreeSetValue, /* 22 */
    Blt_TreeUnsetValue, /* 23 */
    Blt_TreeGetArrayValue, /* 24 */
    Blt_TreeSetArrayValue, /* 25 */
    Blt_TreeUnsetArrayValue, /* 26 */
    Blt_TreeArrayValueExists, /* 27 */
    Blt_TreeArrayNames, /* 28 */
    Blt_TreeGetValueByKey, /* 29 */
    Blt_TreeSetValueByKey, /* 30 */
    Blt_TreeUnsetValueByKey, /* 31 */
    Blt_TreeValueExistsByKey, /* 32 */
    Blt_TreeFirstKey, /* 33 */
    Blt_TreeNextKey, /* 34 */
    Blt_TreeApply, /* 35 */
    Blt_TreeApplyDFS, /* 36 */
    Blt_TreeApplyBFS, /* 37 */
    Blt_TreeSortNode, /* 38 */
    Blt_TreeCreate, /* 39 */
    Blt_TreeExists, /* 40 */
    Blt_TreeGetToken, /* 41 */
    Blt_TreeReleaseToken, /* 42 */
    Blt_TreeSize, /* 43 */
    Blt_TreeCreateTrace, /* 44 */
    Blt_TreeDeleteTrace, /* 45 */
    Blt_TreeCreateEventHandler, /* 46 */
    Blt_TreeDeleteEventHandler, /* 47 */
    Blt_TreeRelabelNode, /* 48 */
    Blt_TreeRelabelNode2, /* 49 */
    Blt_TreeNodePath, /* 50 */
    Blt_TreeNodePosition, /* 51 */
    Blt_TreeClearTags, /* 52 */
    Blt_TreeAddTag, /* 53 */
    Blt_TreeForgetTag, /* 54 */
    Blt_TreeTagTableIsShared, /* 55 */
    Blt_TreeShareTagTable, /* 56 */
    Blt_TreeFirstTag, /* 57 */
    Blt_TreeHasTag, /* 58 */
    Blt_TreeTagHashTable, /* 59 */
    Blt_VecMin, /* 60 */
    Blt_VecMax, /* 61 */
    Blt_AllocVectorId, /* 62 */
    Blt_SetVectorChangedProc, /* 63 */
    Blt_FreeVectorId, /* 64 */
    Blt_GetVectorById, /* 65 */
    Blt_NameOfVectorId, /* 66 */
    Blt_NameOfVector, /* 67 */
    Blt_VectorNotifyPending, /* 68 */
    Blt_CreateVector, /* 69 */
    Blt_GetVector, /* 70 */
    Blt_VectorExists, /* 71 */
    Blt_ResetVector, /* 72 */
    Blt_ResizeVector, /* 73 */
    Blt_DeleteVectorByName, /* 74 */
    Blt_DeleteVector, /* 75 */
    Blt_ExprVector, /* 76 */
    Blt_InstallIndexProc, /* 77 */
    Blt_CreateVector2, /* 78 */
};

/* !END!: Do not edit above this line. */

#undef UNIX_TK
#undef MAC_OSX_TK
