
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_AssociateServerVirtualIpRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_AssociateServerVirtualIpRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/AssociateServerVirtualIpOption.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  AssociateServerVirtualIpRequestBody
    : public ModelBase
{
public:
    AssociateServerVirtualIpRequestBody();
    virtual ~AssociateServerVirtualIpRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AssociateServerVirtualIpRequestBody members

    /// <summary>
    /// 
    /// </summary>

    AssociateServerVirtualIpOption getNic() const;
    bool nicIsSet() const;
    void unsetnic();
    void setNic(const AssociateServerVirtualIpOption& value);


protected:
    AssociateServerVirtualIpOption nic_;
    bool nicIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_AssociateServerVirtualIpRequestBody_H_
