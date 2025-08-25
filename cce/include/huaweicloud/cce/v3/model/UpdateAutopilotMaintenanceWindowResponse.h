
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateAutopilotMaintenanceWindowResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateAutopilotMaintenanceWindowResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpdateAutopilotMaintenanceWindowResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateAutopilotMaintenanceWindowResponse();
    virtual ~UpdateAutopilotMaintenanceWindowResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAutopilotMaintenanceWindowResponse members

    /// <summary>
    /// 升级周期，从\&quot;Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday\&quot;中进行选择，以英文逗号分隔 如：\&quot;Friday,Saturday\&quot; 
    /// </summary>

    std::string getWeeklyPeriod() const;
    bool weeklyPeriodIsSet() const;
    void unsetweeklyPeriod();
    void setWeeklyPeriod(const std::string& value);

    /// <summary>
    /// 升级起始时间（UTC时间）
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 升级时长
    /// </summary>

    int32_t getDurationHours() const;
    bool durationHoursIsSet() const;
    void unsetdurationHours();
    void setDurationHours(int32_t value);

    /// <summary>
    /// 升级版本范围，当前只支持小版本自动升级
    /// </summary>

    std::string getUpgradeScope() const;
    bool upgradeScopeIsSet() const;
    void unsetupgradeScope();
    void setUpgradeScope(const std::string& value);


protected:
    std::string weeklyPeriod_;
    bool weeklyPeriodIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    int32_t durationHours_;
    bool durationHoursIsSet_;
    std::string upgradeScope_;
    bool upgradeScopeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateAutopilotMaintenanceWindowResponse_H_
