
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_DisassociateServerVirtualIpResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_DisassociateServerVirtualIpResponse_H_

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
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  DisassociateServerVirtualIpResponse
    : public ModelBase, public HttpResponse
{
public:
    DisassociateServerVirtualIpResponse();
    virtual ~DisassociateServerVirtualIpResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DisassociateServerVirtualIpResponse members

    /// <summary>
    /// 云服务器网卡ID
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);


protected:
    std::string portId_;
    bool portIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_DisassociateServerVirtualIpResponse_H_
