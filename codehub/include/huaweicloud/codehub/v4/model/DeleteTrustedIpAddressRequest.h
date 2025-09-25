
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeleteTrustedIpAddressRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeleteTrustedIpAddressRequest_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  DeleteTrustedIpAddressRequest
    : public ModelBase
{
public:
    DeleteTrustedIpAddressRequest();
    virtual ~DeleteTrustedIpAddressRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTrustedIpAddressRequest members

    /// <summary>
    /// **参数解释：** 仓库id，代码仓首页，Repository ID后的数字Id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** ip白名单id。
    /// </summary>

    int32_t getIpId() const;
    bool ipIdIsSet() const;
    void unsetipId();
    void setIpId(int32_t value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t ipId_;
    bool ipIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTrustedIpAddressRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTrustedIpAddressRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeleteTrustedIpAddressRequest_H_
