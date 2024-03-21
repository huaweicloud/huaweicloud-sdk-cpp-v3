
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_DetachInternetBandwidthRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_DetachInternetBandwidthRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  DetachInternetBandwidthRequest
    : public ModelBase
{
public:
    DetachInternetBandwidthRequest();
    virtual ~DetachInternetBandwidthRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetachInternetBandwidthRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getGlobalEipId() const;
    bool globalEipIdIsSet() const;
    void unsetglobalEipId();
    void setGlobalEipId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    bool isForceUnbind() const;
    bool forceUnbindIsSet() const;
    void unsetforceUnbind();
    void setForceUnbind(bool value);


protected:
    std::string globalEipId_;
    bool globalEipIdIsSet_;
    bool forceUnbind_;
    bool forceUnbindIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DetachInternetBandwidthRequest& dereference_from_shared_ptr(std::shared_ptr<DetachInternetBandwidthRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_DetachInternetBandwidthRequest_H_
