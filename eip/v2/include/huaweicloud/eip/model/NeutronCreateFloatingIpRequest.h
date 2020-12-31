
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronCreateFloatingIpRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronCreateFloatingIpRequest_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/eip/model/NeutronCreateFloatingIpRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_EXPORT  NeutronCreateFloatingIpRequest
    : public ModelBase
{
public:
    NeutronCreateFloatingIpRequest();
    virtual ~NeutronCreateFloatingIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronCreateFloatingIpRequest members

    /// <summary>
    /// 
    /// </summary>

    NeutronCreateFloatingIpRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronCreateFloatingIpRequestBody& value);


protected:
    NeutronCreateFloatingIpRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronCreateFloatingIpRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronCreateFloatingIpRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronCreateFloatingIpRequest_H_
