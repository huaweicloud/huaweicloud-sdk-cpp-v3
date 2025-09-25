#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_CodeHubMeta_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_CodeHubMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/codehub/v3/CodeHubExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_CODEHUB_V3_EXPORT  CodeHubMeta {
public:
    static HttpRequestDef genRequestDefForCreateCommit();
    static HttpRequestDef genRequestDefForListCommits();
    static HttpRequestDef genRequestDefForShowDiffCommit();
    static HttpRequestDef genRequestDefForShowSingleCommit();
    static HttpRequestDef genRequestDefForCreateMergeRequestDiscussion();
    static HttpRequestDef genRequestDefForCreateMergeRequestDiscussionNote();
    static HttpRequestDef genRequestDefForShowReviewSetting();
    static HttpRequestDef genRequestDefForListFilesByQuery();
    static HttpRequestDef genRequestDefForShowFile();
    static HttpRequestDef genRequestDefForGetAllRepositoryByProjectId();
    static HttpRequestDef genRequestDefForGetProductTemplates();
    static HttpRequestDef genRequestDefForListProductTwoTemplates();
    static HttpRequestDef genRequestDefForShowRepositoryNameExist();
    static HttpRequestDef genRequestDefForAddRepoMembers();
    static HttpRequestDef genRequestDefForDeleteRepoMember();
    static HttpRequestDef genRequestDefForListRepoMembers();
    static HttpRequestDef genRequestDefForSetRepoRole();
    static HttpRequestDef genRequestDefForAddDeployKey();
    static HttpRequestDef genRequestDefForAddDeployKeyV2();
    static HttpRequestDef genRequestDefForAddProtectBranchV2();
    static HttpRequestDef genRequestDefForAddTagV2();
    static HttpRequestDef genRequestDefForCreateRepository();
    static HttpRequestDef genRequestDefForDeleteDeployKey();
    static HttpRequestDef genRequestDefForDeleteDeployKeyV2();
    static HttpRequestDef genRequestDefForDeleteRepository();
    static HttpRequestDef genRequestDefForGetRepositoryByProjectId();
    static HttpRequestDef genRequestDefForGetTemplates();
    static HttpRequestDef genRequestDefForListBranchesByRepositoryId();
    static HttpRequestDef genRequestDefForListCommitStatistics();
    static HttpRequestDef genRequestDefForListFiles();
    static HttpRequestDef genRequestDefForListMergeChanges();
    static HttpRequestDef genRequestDefForListMergeChangesTrees();
    static HttpRequestDef genRequestDefForListMergeRequest();
    static HttpRequestDef genRequestDefForListMergeRequestReviewers();
    static HttpRequestDef genRequestDefForListRelatedCommits();
    static HttpRequestDef genRequestDefForListRepositoryStatus();
    static HttpRequestDef genRequestDefForListSubfiles();
    static HttpRequestDef genRequestDefForListTemplatesTwo();
    static HttpRequestDef genRequestDefForListTwoTemplates();
    static HttpRequestDef genRequestDefForShareTemplates();
    static HttpRequestDef genRequestDefForShowBranchesByRepositoryId();
    static HttpRequestDef genRequestDefForShowBranchesByTwoRepositoryId();
    static HttpRequestDef genRequestDefForShowCommitsByBranch();
    static HttpRequestDef genRequestDefForShowCommitsByRepoId();
    static HttpRequestDef genRequestDefForShowHasPipeline();
    static HttpRequestDef genRequestDefForShowImageBlob();
    static HttpRequestDef genRequestDefForShowMaster();
    static HttpRequestDef genRequestDefForShowMergeRequest();
    static HttpRequestDef genRequestDefForShowRepoId();
    static HttpRequestDef genRequestDefForShowRepositoryArchive();
    static HttpRequestDef genRequestDefForShowRepositoryByUuid();
    static HttpRequestDef genRequestDefForShowRepositoryStatistics();
    static HttpRequestDef genRequestDefForShowStatisticCommit();
    static HttpRequestDef genRequestDefForShowStatisticCommitV3();
    static HttpRequestDef genRequestDefForShowStatisticalData();
    static HttpRequestDef genRequestDefForUpdateMergeRequestApprovalState();
    static HttpRequestDef genRequestDefForAddSshKey();
    static HttpRequestDef genRequestDefForDeleteSShkey();
    static HttpRequestDef genRequestDefForListSshKeys();
    static HttpRequestDef genRequestDefForShowPrivateKeyVerify();
    static HttpRequestDef genRequestDefForValidateHttpsInfo();
    static HttpRequestDef genRequestDefForValidateHttpsInfoV2();
    static HttpRequestDef genRequestDefForCreateNewBranch();
    static HttpRequestDef genRequestDefForAssociateIssues();
    static HttpRequestDef genRequestDefForCreateProjectAndRepositories();
    static HttpRequestDef genRequestDefForCreateProjectAndforkRepositories();
    static HttpRequestDef genRequestDefForListUserAllRepositories();
    static HttpRequestDef genRequestDefForShowAllRepositoryByTwoProjectId();
    static HttpRequestDef genRequestDefForAddHooks();
    static HttpRequestDef genRequestDefForDeleteHooks();
    static HttpRequestDef genRequestDefForListHooks();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_CodeHubMeta_H_
