
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TaskPolicy_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TaskPolicy_H_


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
/// 
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  TaskPolicy
    : public ModelBase
{
public:
    TaskPolicy();
    virtual ~TaskPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskPolicy members

    /// <summary>
    /// **参数说明**：批量任务指定执行时间。 **取值范围**：7天内，不传入此参数表示立即执行，格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getScheduleTime() const;
    bool scheduleTimeIsSet() const;
    void unsetscheduleTime();
    void setScheduleTime(const std::string& value);

    /// <summary>
    /// **参数说明**：批量任务子任务自动重试次数。 **取值范围**：如果传入retry_interval参数，则需传入该参数，最大支持重试5次。
    /// </summary>

    int32_t getRetryCount() const;
    bool retryCountIsSet() const;
    void unsetretryCount();
    void setRetryCount(int32_t value);

    /// <summary>
    /// **参数说明**：批量任务子任务失败后，自动重试时间间隔，单位：分钟。 **取值范围**：最大1440(24小时)，不传入此参数表示不重试，如果传入retry_count参数则需要传入该参数。
    /// </summary>

    int32_t getRetryInterval() const;
    bool retryIntervalIsSet() const;
    void unsetretryInterval();
    void setRetryInterval(int32_t value);


protected:
    std::string scheduleTime_;
    bool scheduleTimeIsSet_;
    int32_t retryCount_;
    bool retryCountIsSet_;
    int32_t retryInterval_;
    bool retryIntervalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TaskPolicy_H_
