
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_AttachInternetBandwidthResponse_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_AttachInternetBandwidthResponse_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/AttachInternetBandwidthGlobalEip.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  AttachInternetBandwidthResponse
    : public ModelBase, public HttpResponse
{
public:
    AttachInternetBandwidthResponse();
    virtual ~AttachInternetBandwidthResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachInternetBandwidthResponse members

    /// <summary>
    /// 本次请求的编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AttachInternetBandwidthGlobalEip getGlobalEip() const;
    bool globalEipIsSet() const;
    void unsetglobalEip();
    void setGlobalEip(const AttachInternetBandwidthGlobalEip& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    AttachInternetBandwidthGlobalEip globalEip_;
    bool globalEipIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_AttachInternetBandwidthResponse_H_
