
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListDomainBandwidthPeakResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListDomainBandwidthPeakResponse_H_

#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v2/model/PeakBandwidthData.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  ListDomainBandwidthPeakResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDomainBandwidthPeakResponse();
    virtual ~ListDomainBandwidthPeakResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListDomainBandwidthPeakResponse members

    /// <summary>
    /// 域名对应的带宽峰值列表。
    /// </summary>

    std::vector<PeakBandwidthData>& getBandwidthList();
    bool bandwidthListIsSet() const;
    void unsetbandwidthList();
    void setBandwidthList(const std::vector<PeakBandwidthData>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<PeakBandwidthData> bandwidthList_;
    bool bandwidthListIsSet_;
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

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListDomainBandwidthPeakResponse_H_
