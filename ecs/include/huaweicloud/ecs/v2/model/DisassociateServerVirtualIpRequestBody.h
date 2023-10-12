
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_DisassociateServerVirtualIpRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_DisassociateServerVirtualIpRequestBody_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/DisassociateServerVirtualIpOption.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  DisassociateServerVirtualIpRequestBody
    : public ModelBase
{
public:
    DisassociateServerVirtualIpRequestBody();
    virtual ~DisassociateServerVirtualIpRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisassociateServerVirtualIpRequestBody members

    /// <summary>
    /// 
    /// </summary>

    DisassociateServerVirtualIpOption getNic() const;
    bool nicIsSet() const;
    void unsetnic();
    void setNic(const DisassociateServerVirtualIpOption& value);


protected:
    DisassociateServerVirtualIpOption nic_;
    bool nicIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_DisassociateServerVirtualIpRequestBody_H_
