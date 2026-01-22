
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ScheduleInfoDTO_periodic_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ScheduleInfoDTO_periodic_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ScheduleInfoDTO_periodic
    : public ModelBase
{
public:
    ScheduleInfoDTO_periodic();
    virtual ~ScheduleInfoDTO_periodic();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScheduleInfoDTO_periodic members

    /// <summary>
    /// **参数解释**： 周期计划类型 **约束限制**： 不涉及 **取值范围**： 0：每天 1：每周的某几天 2：每周的一段时间 **默认取值**： 不涉及
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// **参数解释**： 周期计划开始时间 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 周期计划结束时间 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 每周的某几天 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<int32_t>& getWeekMask();
    bool weekMaskIsSet() const;
    void unsetweekMask();
    void setWeekMask(std::vector<int32_t> value);

    /// <summary>
    /// **参数解释**： 每周周期计划开始日 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    int32_t getStartWeek() const;
    bool startWeekIsSet() const;
    void unsetstartWeek();
    void setStartWeek(int32_t value);

    /// <summary>
    /// **参数解释**： 每周周期计划结束日 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    int32_t getEndWeek() const;
    bool endWeekIsSet() const;
    void unsetendWeek();
    void setEndWeek(int32_t value);


protected:
    int32_t type_;
    bool typeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::vector<int32_t> weekMask_;
    bool weekMaskIsSet_;
    int32_t startWeek_;
    bool startWeekIsSet_;
    int32_t endWeek_;
    bool endWeekIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ScheduleInfoDTO_periodic_H_
