
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaDisassociateSecurityGroupResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaDisassociateSecurityGroupResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaDisassociateSecurityGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    NovaDisassociateSecurityGroupResponse();
    virtual ~NovaDisassociateSecurityGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaDisassociateSecurityGroupResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaDisassociateSecurityGroupResponse_H_
