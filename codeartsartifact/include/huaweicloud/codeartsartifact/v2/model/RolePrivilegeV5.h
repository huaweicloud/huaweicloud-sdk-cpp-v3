
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RolePrivilegeV5_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RolePrivilegeV5_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/PrivilegeParam.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  RolePrivilegeV5
    : public ModelBase
{
public:
    RolePrivilegeV5();
    virtual ~RolePrivilegeV5();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RolePrivilegeV5 members

    /// <summary>
    /// **参数解释**: 权限信息。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    std::vector<PrivilegeParam>& getPrivileges();
    bool privilegesIsSet() const;
    void unsetprivileges();
    void setPrivileges(const std::vector<PrivilegeParam>& value);


protected:
    std::vector<PrivilegeParam> privileges_;
    bool privilegesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RolePrivilegeV5_H_
