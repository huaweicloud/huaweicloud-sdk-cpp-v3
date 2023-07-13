
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronShowFloatingIpResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronShowFloatingIpResponse_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/FloatingIpResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  NeutronShowFloatingIpResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronShowFloatingIpResponse();
    virtual ~NeutronShowFloatingIpResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronShowFloatingIpResponse members

    /// <summary>
    /// 
    /// </summary>

    FloatingIpResp getFloatingip() const;
    bool floatingipIsSet() const;
    void unsetfloatingip();
    void setFloatingip(const FloatingIpResp& value);


protected:
    FloatingIpResp floatingip_;
    bool floatingipIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronShowFloatingIpResponse_H_
