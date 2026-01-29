
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowRepositoryRolesPrivilegeRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowRepositoryRolesPrivilegeRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ShowRepositoryRolesPrivilegeRequest
    : public ModelBase
{
public:
    ShowRepositoryRolesPrivilegeRequest();
    virtual ~ShowRepositoryRolesPrivilegeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepositoryRolesPrivilegeRequest members

    /// <summary>
    /// **参数解释**: 仓库id。可在私有库仓库**概览**界面查看。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 无。
    /// </summary>

    std::string getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(const std::string& value);

    /// <summary>
    /// **参数解释**: 语言类型。 **约束限制**: 不涉及。 **取值范围**: 可选值：zh-cn,en-us。 **默认取值**: zh-cn。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);


protected:
    std::string repoId_;
    bool repoIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowRepositoryRolesPrivilegeRequest& dereference_from_shared_ptr(std::shared_ptr<ShowRepositoryRolesPrivilegeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowRepositoryRolesPrivilegeRequest_H_
