
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroupCommonGroup_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroupCommonGroup_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaSecurityGroupCommonGroup
    : public ModelBase
{
public:
    NovaSecurityGroupCommonGroup();
    virtual ~NovaSecurityGroupCommonGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaSecurityGroupCommonGroup members

    /// <summary>
    /// 对端安全组的名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 对端安全组所属租户的租户ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroupCommonGroup_H_
