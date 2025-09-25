
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeleteTenantTrustedIpAddressRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeleteTenantTrustedIpAddressRequest_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  DeleteTenantTrustedIpAddressRequest
    : public ModelBase
{
public:
    DeleteTenantTrustedIpAddressRequest();
    virtual ~DeleteTenantTrustedIpAddressRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTenantTrustedIpAddressRequest members

    /// <summary>
    /// **参数解释：** ip白名单id。
    /// </summary>

    int32_t getIpId() const;
    bool ipIdIsSet() const;
    void unsetipId();
    void setIpId(int32_t value);


protected:
    int32_t ipId_;
    bool ipIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTenantTrustedIpAddressRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTenantTrustedIpAddressRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeleteTenantTrustedIpAddressRequest_H_
