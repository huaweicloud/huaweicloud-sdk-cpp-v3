
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaDisassociateSecurityGroupRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaDisassociateSecurityGroupRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaRemoveSecurityGroupOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaDisassociateSecurityGroupRequestBody
    : public ModelBase
{
public:
    NovaDisassociateSecurityGroupRequestBody();
    virtual ~NovaDisassociateSecurityGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaDisassociateSecurityGroupRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NovaRemoveSecurityGroupOption getRemoveSecurityGroup() const;
    bool removeSecurityGroupIsSet() const;
    void unsetremoveSecurityGroup();
    void setRemoveSecurityGroup(const NovaRemoveSecurityGroupOption& value);


protected:
    NovaRemoveSecurityGroupOption removeSecurityGroup_;
    bool removeSecurityGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaDisassociateSecurityGroupRequestBody_H_
