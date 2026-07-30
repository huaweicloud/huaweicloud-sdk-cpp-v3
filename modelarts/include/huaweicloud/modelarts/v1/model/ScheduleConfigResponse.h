
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ScheduleConfigResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ScheduleConfigResponse_H_


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
/// **参数解释：** 定时停止配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ScheduleConfigResponse
    : public ModelBase
{
public:
    ScheduleConfigResponse();
    virtual ~ScheduleConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScheduleConfigResponse members

    /// <summary>
    /// **参数解释：** 触发时间，UTC毫秒，13位时间戳。 **取值范围：** 不涉及。
    /// </summary>

    int64_t getDueTime() const;
    bool dueTimeIsSet() const;
    void unsetdueTime();
    void setDueTime(int64_t value);

    /// <summary>
    /// **参数解释：** 对应的时间单位的数值。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// **参数解释：** 调度时间单位。 **取值范围：** - MINUTES：分钟。 - HOURS：小时。 - DAYS：天。
    /// </summary>

    std::string getTimeUnit() const;
    bool timeUnitIsSet() const;
    void unsettimeUnit();
    void setTimeUnit(const std::string& value);

    /// <summary>
    /// **参数解释：** 调度类型，当前仅支持取值为STOP。 **取值范围：** - STOP：停止。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 表示是否处理完成。 **取值范围：** - true：该定时任务已经执行过。 - false：该定时任务尚未执行。
    /// </summary>

    bool isProcessed() const;
    bool processedIsSet() const;
    void unsetprocessed();
    void setProcessed(bool value);


protected:
    int64_t dueTime_;
    bool dueTimeIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    std::string timeUnit_;
    bool timeUnitIsSet_;
    std::string type_;
    bool typeIsSet_;
    bool processed_;
    bool processedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ScheduleConfigResponse_H_
