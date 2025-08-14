
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TimeRange_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TimeRange_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 规则有效时间段
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  TimeRange
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
    /// **参数说明**：规则条件触发的开始时间，格式：HH:mm。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数说明**：规则条件触发的结束时间，格式：HH:mm。若结束时间与开始时间一致，则时间为全天。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数说明**：星期列表，以逗号分隔。1代表周日，2代表周一，依次类推，默认为每天。星期列表中的日期为开始时间的日期。
    /// </summary>

    std::string getDaysOfWeek() const;
    bool daysOfWeekIsSet() const;
    void unsetdaysOfWeek();
    void setDaysOfWeek(const std::string& value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string daysOfWeek_;
    bool daysOfWeekIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TimeRange_H_
