
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_AddTenantTrustedIpAddressRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_AddTenantTrustedIpAddressRequest_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/AddTrustedIpAddressRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  AddTenantTrustedIpAddressRequest
    : public ModelBase
{
public:
    AddTenantTrustedIpAddressRequest();
    virtual ~AddTenantTrustedIpAddressRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddTenantTrustedIpAddressRequest members

    /// <summary>
    /// 
    /// </summary>

    AddTrustedIpAddressRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddTrustedIpAddressRequestBody& value);


protected:
    AddTrustedIpAddressRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddTenantTrustedIpAddressRequest& dereference_from_shared_ptr(std::shared_ptr<AddTenantTrustedIpAddressRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_AddTenantTrustedIpAddressRequest_H_
