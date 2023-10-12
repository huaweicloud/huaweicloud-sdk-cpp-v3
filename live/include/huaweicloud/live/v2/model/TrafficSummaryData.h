
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_TrafficSummaryData_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_TrafficSummaryData_H_


#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  TrafficSummaryData
    : public ModelBase
{
public:
    TrafficSummaryData();
    virtual ~TrafficSummaryData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrafficSummaryData members

    /// <summary>
    /// 流量，单位为byte。
    /// </summary>

    int64_t getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(int64_t value);

    /// <summary>
    /// 域名。
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);


protected:
    int64_t value_;
    bool valueIsSet_;
    std::string domain_;
    bool domainIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_TrafficSummaryData_H_
