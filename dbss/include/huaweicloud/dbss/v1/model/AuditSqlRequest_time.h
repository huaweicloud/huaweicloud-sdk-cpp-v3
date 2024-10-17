
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSqlRequest_time_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSqlRequest_time_H_


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
/// 查询时间范围
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AuditSqlRequest_time
    : public ModelBase
{
public:
    AuditSqlRequest_time();
    virtual ~AuditSqlRequest_time();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditSqlRequest_time members

    /// <summary>
    /// 时间范围。和start_time，end_time不能同时使用，同时传该参数优先级更高。 - HALF_HOUR - HOUR - THREE_HOUR - TWELVE_HOUR - DAY - WEEK - MONTH
    /// </summary>

    std::string getTimeRange() const;
    bool timeRangeIsSet() const;
    void unsettimeRange();
    void setTimeRange(const std::string& value);

    /// <summary>
    /// 开始时间，必须和end_time成对出现。格式必须为yyyy-MM-dd HH:mm:ss。UTC时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间，必须和start_time成对出现。格式必须为yyyy-MM-dd HH:mm:ss。UTC时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string timeRange_;
    bool timeRangeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSqlRequest_time_H_
