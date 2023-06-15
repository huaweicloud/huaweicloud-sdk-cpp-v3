
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListDomainTrafficSummaryResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListDomainTrafficSummaryResponse_H_

#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v2/model/TrafficSummaryData.h>
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
class HUAWEICLOUD_LIVE_V2_EXPORT  ListDomainTrafficSummaryResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDomainTrafficSummaryResponse();
    virtual ~ListDomainTrafficSummaryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListDomainTrafficSummaryResponse members

    /// <summary>
    /// 域名对应的流量汇总列表。
    /// </summary>

    std::vector<TrafficSummaryData>& getTrafficList();
    bool trafficListIsSet() const;
    void unsettrafficList();
    void setTrafficList(const std::vector<TrafficSummaryData>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<TrafficSummaryData> trafficList_;
    bool trafficListIsSet_;
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

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListDomainTrafficSummaryResponse_H_
