
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_UpdateRepoRolesPrivilegeRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_UpdateRepoRolesPrivilegeRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsartifact/v2/model/RolePrivilegeV5.h>

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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  UpdateRepoRolesPrivilegeRequest
    : public ModelBase
{
public:
    UpdateRepoRolesPrivilegeRequest();
    virtual ~UpdateRepoRolesPrivilegeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRepoRolesPrivilegeRequest members

    /// <summary>
    /// **参数解释**: 角色id。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 无。
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RolePrivilegeV5 getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RolePrivilegeV5& value);


protected:
    std::string roleId_;
    bool roleIdIsSet_;
    RolePrivilegeV5 body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateRepoRolesPrivilegeRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateRepoRolesPrivilegeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_UpdateRepoRolesPrivilegeRequest_H_
