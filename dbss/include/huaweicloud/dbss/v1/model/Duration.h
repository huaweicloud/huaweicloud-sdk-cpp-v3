
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_Duration_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_Duration_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询时间范围，time_range属性优先于start_time/end_time
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  Duration
    : public ModelBase
{
public:
    Duration();
    virtual ~Duration();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Duration members

    /// <summary>
    /// 结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 时间范围 - HALF_HOUR: 半小时 - HOUR: 1小时 - THREE_HOUR: 3小时 - TWELVE_HOUR: 12小时 - DAY: 1天 - WEEK: 1周 - MONTH: 1个月
    /// </summary>

    std::string getTimeRange() const;
    bool timeRangeIsSet() const;
    void unsettimeRange();
    void setTimeRange(const std::string& value);


protected:
    std::string endTime_;
    bool endTimeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string timeRange_;
    bool timeRangeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_Duration_H_
