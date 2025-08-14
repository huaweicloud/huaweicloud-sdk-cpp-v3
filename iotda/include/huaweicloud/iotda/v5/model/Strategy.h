
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_Strategy_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_Strategy_H_


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
/// 配置条件处理策略，用于确定规则是否判断上次数据是否满足条件。当rule_type类型为 “DEVICE_LINKAGE”时，为必选参数。默认为pulse触发类型，事件有效性为永久有效
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  Strategy
    : public ModelBase
{
public:
    Strategy();
    virtual ~Strategy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Strategy members

    /// <summary>
    /// **参数说明**：规则条件触发的判断策略，默认为pulse。 **取值范围**： - pulse：设备上报的数据满足条件则触发，不判断上一次上报的数据。 - reverse：设备上一次上报的数据不满足条件，本次上报的数据满足条件则触发。
    /// </summary>

    std::string getTrigger() const;
    bool triggerIsSet() const;
    void unsettrigger();
    void setTrigger(const std::string& value);

    /// <summary>
    /// **参数说明**：设备数据的有效时间，单位为秒，设备数据的产生时间以上报数据中的eventTime为基准。
    /// </summary>

    int32_t getEventValidTime() const;
    bool eventValidTimeIsSet() const;
    void unseteventValidTime();
    void setEventValidTime(int32_t value);


protected:
    std::string trigger_;
    bool triggerIsSet_;
    int32_t eventValidTime_;
    bool eventValidTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_Strategy_H_
