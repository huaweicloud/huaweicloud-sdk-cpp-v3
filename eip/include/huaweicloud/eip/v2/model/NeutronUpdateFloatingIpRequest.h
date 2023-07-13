
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronUpdateFloatingIpRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronUpdateFloatingIpRequest_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v2/model/NeutronUpdateFloatingIpRequestBody.h>

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
class HUAWEICLOUD_EIP_V2_EXPORT  NeutronUpdateFloatingIpRequest
    : public ModelBase
{
public:
    NeutronUpdateFloatingIpRequest();
    virtual ~NeutronUpdateFloatingIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronUpdateFloatingIpRequest members

    /// <summary>
    /// floatingip的ID
    /// </summary>

    std::string getFloatingipId() const;
    bool floatingipIdIsSet() const;
    void unsetfloatingipId();
    void setFloatingipId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NeutronUpdateFloatingIpRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronUpdateFloatingIpRequestBody& value);


protected:
    std::string floatingipId_;
    bool floatingipIdIsSet_;
    NeutronUpdateFloatingIpRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronUpdateFloatingIpRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronUpdateFloatingIpRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronUpdateFloatingIpRequest_H_
