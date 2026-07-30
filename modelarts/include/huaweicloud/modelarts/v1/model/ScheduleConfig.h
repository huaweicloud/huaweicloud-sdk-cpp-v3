
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ScheduleConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ScheduleConfig_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 创建服务请求体。 **取值范围：** 不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ScheduleConfig
    : public ModelBase
{
public:
    ScheduleConfig();
    virtual ~ScheduleConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScheduleConfig members

    /// <summary>
    /// **参数解释：** 对应的时间单位的数值。 **约束限制：** 与time_unit共同确认时间设置的范围是1分钟~7天之间。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// **参数解释：** 时间的单位。 **约束限制：** 与duration共同确认时间设置的范围是1分钟~7天之间。 **取值范围：** - MINUTES：分钟。 - HOURS：小时。 - DAYS：天。 **默认取值：** 不涉及。
    /// </summary>

    std::string getTimeUnit() const;
    bool timeUnitIsSet() const;
    void unsettimeUnit();
    void setTimeUnit(const std::string& value);

    /// <summary>
    /// **参数解释：** 调度类型，当前仅支持取值为STOP。 **约束限制：** 不涉及。 **取值范围：** - STOP：停止。 **默认取值：** 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    int32_t duration_;
    bool durationIsSet_;
    std::string timeUnit_;
    bool timeUnitIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ScheduleConfig_H_
