
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_TimeRangeBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_TimeRangeBean_H_


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
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  TimeRangeBean
    : public ModelBase
{
public:
    TimeRangeBean();
    virtual ~TimeRangeBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TimeRangeBean members

    /// <summary>
    /// 开始时间，必须和end_time成对出现。格式必须为yyyy-MM-dd HH:mm:ss。UTC时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 结束时间，必须和start_time成对出现。格式必须为yyyy-MM-dd HH:mm:ss。UTC时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 请求查询的时间段，值为： • HALF_HOUR • HOUR • THREE_HOUR • TWELVE_HOUR • DAY（24小时） • WEEK（7天） • MONTH（30天） 枚举值：  HALF_HOUR  HOUR  THREE_HOUR  TWELVE_HOUR  DAY  WEEK  MONTH
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

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_TimeRangeBean_H_
