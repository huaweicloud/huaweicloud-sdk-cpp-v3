#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_CodeArtsArtifactMeta_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_CodeArtsArtifactMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  CodeArtsArtifactMeta {
public:
    static HttpRequestDef genRequestDefForBatchDeleteTrashes();
    static HttpRequestDef genRequestDefForBatchRestoreRepo();
    static HttpRequestDef genRequestDefForCreateArtifactory();
    static HttpRequestDef genRequestDefForCreateAttention();
    static HttpRequestDef genRequestDefForCreateDockerRepositories();
    static HttpRequestDef genRequestDefForCreateMavenRepo();
    static HttpRequestDef genRequestDefForCreateProjectRelatedRepository();
    static HttpRequestDef genRequestDefForDeleteArtifactFile();
    static HttpRequestDef genRequestDefForDeleteCompletelyUpdateFileState();
    static HttpRequestDef genRequestDefForDeleteRepository();
    static HttpRequestDef genRequestDefForListAllRepositories();
    static HttpRequestDef genRequestDefForListArtifactoryComponent();
    static HttpRequestDef genRequestDefForListArtifactoryStorageStatistic();
    static HttpRequestDef genRequestDefForListAttentions();
    static HttpRequestDef genRequestDefForListCapacityMessageSetting();
    static HttpRequestDef genRequestDefForListChildProxyRepositoriesList();
    static HttpRequestDef genRequestDefForListDomainIpConfig();
    static HttpRequestDef genRequestDefForListFileBuildArchives();
    static HttpRequestDef genRequestDefForListFiles();
    static HttpRequestDef genRequestDefForListLatestVersionFiles();
    static HttpRequestDef genRequestDefForListMavenList();
    static HttpRequestDef genRequestDefForListMavenUser();
    static HttpRequestDef genRequestDefForListNetProxy();
    static HttpRequestDef genRequestDefForListProjectRolePermissions();
    static HttpRequestDef genRequestDefForListProjectUsers();
    static HttpRequestDef genRequestDefForListSecGuardList();
    static HttpRequestDef genRequestDefForListUserPrivileges();
    static HttpRequestDef genRequestDefForModifyRepository();
    static HttpRequestDef genRequestDefForResetUserPassword();
    static HttpRequestDef genRequestDefForSearchArtifacts();
    static HttpRequestDef genRequestDefForSearchByChecksum();
    static HttpRequestDef genRequestDefForShowAudit();
    static HttpRequestDef genRequestDefForShowAutoDeleteJobSettings();
    static HttpRequestDef genRequestDefForShowDomainReleaseRepoStorage();
    static HttpRequestDef genRequestDefForShowFileDetail();
    static HttpRequestDef genRequestDefForShowFileDetailByFullName();
    static HttpRequestDef genRequestDefForShowFileTree();
    static HttpRequestDef genRequestDefForShowLatestVersionFilesCount();
    static HttpRequestDef genRequestDefForShowMavenInfo();
    static HttpRequestDef genRequestDefForShowMultiRolesUserPermissions();
    static HttpRequestDef genRequestDefForShowOpenSourceEnabled();
    static HttpRequestDef genRequestDefForShowPackageDataDetail();
    static HttpRequestDef genRequestDefForShowPackageInfo();
    static HttpRequestDef genRequestDefForShowProjectList();
    static HttpRequestDef genRequestDefForShowProjectRelatedRepository();
    static HttpRequestDef genRequestDefForShowProjectReleaseFiles();
    static HttpRequestDef genRequestDefForShowProjectStorageInfo();
    static HttpRequestDef genRequestDefForShowProjectVersionsCount();
    static HttpRequestDef genRequestDefForShowReleaseProjectFiles();
    static HttpRequestDef genRequestDefForShowRepoUserInfo();
    static HttpRequestDef genRequestDefForShowRepository();
    static HttpRequestDef genRequestDefForShowRepositoryInfo();
    static HttpRequestDef genRequestDefForShowRepositoryRolesPrivilege();
    static HttpRequestDef genRequestDefForShowStorage();
    static HttpRequestDef genRequestDefForShowUserPrivileges();
    static HttpRequestDef genRequestDefForShowUserTicket();
    static HttpRequestDef genRequestDefForShowVersionList();
    static HttpRequestDef genRequestDefForUpdateArtifactory();
    static HttpRequestDef genRequestDefForUpdateRepoRolesPrivilege();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_CodeArtsArtifactMeta_H_
