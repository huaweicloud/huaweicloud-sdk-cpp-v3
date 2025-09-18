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
    static HttpRequestDef genRequestDefForDeleteRepository();
    static HttpRequestDef genRequestDefForListAllRepositories();
    static HttpRequestDef genRequestDefForListArtifactoryComponent();
    static HttpRequestDef genRequestDefForListArtifactoryStorageStatistic();
    static HttpRequestDef genRequestDefForListAttentions();
    static HttpRequestDef genRequestDefForModifyRepository();
    static HttpRequestDef genRequestDefForResetUserPassword();
    static HttpRequestDef genRequestDefForSearchArtifacts();
    static HttpRequestDef genRequestDefForSearchByChecksum();
    static HttpRequestDef genRequestDefForShowAudit();
    static HttpRequestDef genRequestDefForShowFileTree();
    static HttpRequestDef genRequestDefForShowMavenInfo();
    static HttpRequestDef genRequestDefForShowProjectList();
    static HttpRequestDef genRequestDefForShowProjectReleaseFiles();
    static HttpRequestDef genRequestDefForShowReleaseProjectFiles();
    static HttpRequestDef genRequestDefForShowRepository();
    static HttpRequestDef genRequestDefForShowRepositoryInfo();
    static HttpRequestDef genRequestDefForShowStorage();
    static HttpRequestDef genRequestDefForShowUserPrivileges();
    static HttpRequestDef genRequestDefForUpdateArtifactory();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_CodeArtsArtifactMeta_H_
