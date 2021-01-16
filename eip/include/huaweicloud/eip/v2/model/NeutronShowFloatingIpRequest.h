
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronShowFloatingIpRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronShowFloatingIpRequest_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_EIP_V2_EXPORT  NeutronShowFloatingIpRequest
    : public ModelBase
{
public:
    NeutronShowFloatingIpRequest();
    virtual ~NeutronShowFloatingIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronShowFloatingIpRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getFloatingipId() const;
    bool floatingipIdIsSet() const;
    void unsetfloatingipId();
    void setFloatingipId(const std::string& value);


protected:
    std::string floatingipId_;
    bool floatingipIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronShowFloatingIpRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronShowFloatingIpRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronShowFloatingIpRequest_H_
