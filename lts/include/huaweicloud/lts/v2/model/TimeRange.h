
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_TimeRange_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_TimeRange_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 此参数在请求实体中，采用json字符串格式。
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  TimeRange
    : public ModelBase
{
public:
    TimeRange();
    virtual ~TimeRange();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TimeRange members

    /// <summary>
    /// 时区信息，默认为“UTC”。
    /// </summary>

    std::string getSqlTimeZone() const;
    bool sqlTimeZoneIsSet() const;
    void unsetsqlTimeZone();
    void setSqlTimeZone(const std::string& value);

    /// <summary>
    /// 搜索起始时间（UTC时间，毫秒级）。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 搜索起始时间（UTC时间，毫秒级）。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 搜索是否包含起始时间点，默认为false。
    /// </summary>

    bool isStartTimeGt() const;
    bool startTimeGtIsSet() const;
    void unsetstartTimeGt();
    void setStartTimeGt(bool value);

    /// <summary>
    /// 搜索是否包含结束时间点，默认为false。
    /// </summary>

    bool isEndTimeLt() const;
    bool endTimeLtIsSet() const;
    void unsetendTimeLt();
    void setEndTimeLt(bool value);


protected:
    std::string sqlTimeZone_;
    bool sqlTimeZoneIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    bool startTimeGt_;
    bool startTimeGtIsSet_;
    bool endTimeLt_;
    bool endTimeLtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_TimeRange_H_
