
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAssociateSecurityGroupRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAssociateSecurityGroupRequestBody_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaAddSecurityGroupOption.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  NovaAssociateSecurityGroupRequestBody
    : public ModelBase
{
public:
    NovaAssociateSecurityGroupRequestBody();
    virtual ~NovaAssociateSecurityGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaAssociateSecurityGroupRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NovaAddSecurityGroupOption getAddSecurityGroup() const;
    bool addSecurityGroupIsSet() const;
    void unsetaddSecurityGroup();
    void setAddSecurityGroup(const NovaAddSecurityGroupOption& value);


protected:
    NovaAddSecurityGroupOption addSecurityGroup_;
    bool addSecurityGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAssociateSecurityGroupRequestBody_H_
