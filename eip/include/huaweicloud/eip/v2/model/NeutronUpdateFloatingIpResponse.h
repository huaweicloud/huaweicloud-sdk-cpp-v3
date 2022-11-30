
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronUpdateFloatingIpResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronUpdateFloatingIpResponse_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/PostAndPutFloatingIpResp.h>

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
class HUAWEICLOUD_EIP_V2_EXPORT  NeutronUpdateFloatingIpResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronUpdateFloatingIpResponse();
    virtual ~NeutronUpdateFloatingIpResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronUpdateFloatingIpResponse members

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

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronUpdateFloatingIpResponse_H_
