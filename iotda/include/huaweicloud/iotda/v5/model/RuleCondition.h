
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_RuleCondition_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_RuleCondition_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/DeviceDataCondition.h>
#include <huaweicloud/iotda/v5/model/DailyTimerType.h>
#include <string>
#include <huaweicloud/iotda/v5/model/DeviceLinkageStatusCondition.h>
#include <huaweicloud/iotda/v5/model/SimpleTimerType.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 规则条件结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  RuleCondition
    : public ModelBase
{
public:
    RuleCondition();
    virtual ~RuleCondition();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleCondition members

    /// <summary>
    /// **参数说明**：规则条件的类型。 **取值范围**： - DEVICE_DATA：设备属性数据类型条件。 - SIMPLE_TIMER：简单定时类型条件。 - DAILY_TIMER：每日定时类型条件。 - DEVICE_LINKAGE_STATUS：设备状态类型条件。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeviceDataCondition getDevicePropertyCondition() const;
    bool devicePropertyConditionIsSet() const;
    void unsetdevicePropertyCondition();
    void setDevicePropertyCondition(const DeviceDataCondition& value);

    /// <summary>
    /// 
    /// </summary>

    SimpleTimerType getSimpleTimerCondition() const;
    bool simpleTimerConditionIsSet() const;
    void unsetsimpleTimerCondition();
    void setSimpleTimerCondition(const SimpleTimerType& value);

    /// <summary>
    /// 
    /// </summary>

    DailyTimerType getDailyTimerCondition() const;
    bool dailyTimerConditionIsSet() const;
    void unsetdailyTimerCondition();
    void setDailyTimerCondition(const DailyTimerType& value);

    /// <summary>
    /// 
    /// </summary>

    DeviceLinkageStatusCondition getDeviceLinkageStatusCondition() const;
    bool deviceLinkageStatusConditionIsSet() const;
    void unsetdeviceLinkageStatusCondition();
    void setDeviceLinkageStatusCondition(const DeviceLinkageStatusCondition& value);


protected:
    std::string type_;
    bool typeIsSet_;
    DeviceDataCondition devicePropertyCondition_;
    bool devicePropertyConditionIsSet_;
    SimpleTimerType simpleTimerCondition_;
    bool simpleTimerConditionIsSet_;
    DailyTimerType dailyTimerCondition_;
    bool dailyTimerConditionIsSet_;
    DeviceLinkageStatusCondition deviceLinkageStatusCondition_;
    bool deviceLinkageStatusConditionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_RuleCondition_H_
