
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchAttachInternetBandwidthRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchAttachInternetBandwidthRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/BatchAttachInternetBandwidthsGlobalEipRequestBody.h>

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
class HUAWEICLOUD_GEIP_V3_EXPORT  BatchAttachInternetBandwidthRequest
    : public ModelBase
{
public:
    BatchAttachInternetBandwidthRequest();
    virtual ~BatchAttachInternetBandwidthRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAttachInternetBandwidthRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchAttachInternetBandwidthsGlobalEipRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchAttachInternetBandwidthsGlobalEipRequestBody& value);


protected:
    BatchAttachInternetBandwidthsGlobalEipRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchAttachInternetBandwidthRequest& dereference_from_shared_ptr(std::shared_ptr<BatchAttachInternetBandwidthRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchAttachInternetBandwidthRequest_H_
