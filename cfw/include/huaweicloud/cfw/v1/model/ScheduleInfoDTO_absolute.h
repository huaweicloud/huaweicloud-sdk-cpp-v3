
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ScheduleInfoDTO_absolute_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ScheduleInfoDTO_absolute_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 绝对时间计划 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ScheduleInfoDTO_absolute
    : public ModelBase
{
public:
    ScheduleInfoDTO_absolute();
    virtual ~ScheduleInfoDTO_absolute();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScheduleInfoDTO_absolute members

    /// <summary>
    /// **参数解释**： 绝对计划开始时间 **约束限制**： 不涉及 **取值范围**： 时间戳（毫秒级） **默认取值**： 不涉及
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**： 绝对计划结束时间 **约束限制**： 不涉及 **取值范围**： 时间戳（毫秒级） **默认取值**： 不涉及
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);


protected:
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ScheduleInfoDTO_absolute_H_
