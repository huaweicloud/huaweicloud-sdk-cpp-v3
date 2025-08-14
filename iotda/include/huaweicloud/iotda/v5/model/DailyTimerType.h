
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DailyTimerType_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DailyTimerType_H_


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
/// 条件中每日定时类型的信息，自定义结构。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  DailyTimerType
    : public ModelBase
{
public:
    DailyTimerType();
    virtual ~DailyTimerType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DailyTimerType members

    /// <summary>
    /// **参数说明**：规则触发的时间，格式：HH:MM。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// **参数说明**：星期列表，以逗号分隔。1代表周日，2代表周一，依次类推，默认为每天。
    /// </summary>

    std::string getDaysOfWeek() const;
    bool daysOfWeekIsSet() const;
    void unsetdaysOfWeek();
    void setDaysOfWeek(const std::string& value);


protected:
    std::string time_;
    bool timeIsSet_;
    std::string daysOfWeek_;
    bool daysOfWeekIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DailyTimerType_H_
