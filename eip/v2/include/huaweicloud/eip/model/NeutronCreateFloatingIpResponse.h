
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronCreateFloatingIpResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronCreateFloatingIpResponse_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/eip/model/PostAndPutFloatingIpResp.h"

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
class HUAWEICLOUD_EIP_EXPORT  NeutronCreateFloatingIpResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronCreateFloatingIpResponse();
    virtual ~NeutronCreateFloatingIpResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronCreateFloatingIpResponse members

    /// <summary>
    /// 
    /// </summary>

    PostAndPutFloatingIpResp getFloatingip() const;
    bool floatingipIsSet() const;
    void unsetfloatingip();
    void setFloatingip(const PostAndPutFloatingIpResp& value);


protected:
    PostAndPutFloatingIpResp floatingip_;
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

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronCreateFloatingIpResponse_H_
