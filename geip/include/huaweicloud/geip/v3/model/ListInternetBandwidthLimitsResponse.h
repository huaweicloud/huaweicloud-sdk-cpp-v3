
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListInternetBandwidthLimitsResponse_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListInternetBandwidthLimitsResponse_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/geip/v3/model/ListInternetBandwidthLimits.h>
#include <vector>

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
class HUAWEICLOUD_GEIP_V3_EXPORT  ListInternetBandwidthLimitsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInternetBandwidthLimitsResponse();
    virtual ~ListInternetBandwidthLimitsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInternetBandwidthLimitsResponse members

    /// <summary>
    /// 本次请求的编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 全域公网带宽限制列表
    /// </summary>

    std::vector<ListInternetBandwidthLimits>& getInternetBandwidthLimits();
    bool internetBandwidthLimitsIsSet() const;
    void unsetinternetBandwidthLimits();
    void setInternetBandwidthLimits(const std::vector<ListInternetBandwidthLimits>& value);

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
    std::vector<ListInternetBandwidthLimits> internetBandwidthLimits_;
    bool internetBandwidthLimitsIsSet_;
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

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListInternetBandwidthLimitsResponse_H_
