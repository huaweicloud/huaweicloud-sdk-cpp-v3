
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_FlowLimitStrategy_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_FlowLimitStrategy_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 用量封顶配置 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  FlowLimitStrategy
    : public ModelBase
{
public:
    FlowLimitStrategy();
    virtual ~FlowLimitStrategy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlowLimitStrategy members

    /// <summary>
    /// **参数解释：**  用量统计类型 **约束限制：** 不涉及 **取值范围：** - instant: 瞬时用量 - hour: 累计用量（小时） - day: 累计用量（天） **默认取值：** 不涉及
    /// </summary>

    std::string getStrategyType() const;
    bool strategyTypeIsSet() const;
    void unsetstrategyType();
    void setStrategyType(const std::string& value);

    /// <summary>
    /// **参数解释：**  用量封顶类型 **约束限制：** 不涉及 **取值范围：** - bandwidth: 带宽封顶，单位: bit/s - traffic: 流量封顶，单位: bit **默认取值：** 不涉及
    /// </summary>

    std::string getItemType() const;
    bool itemTypeIsSet() const;
    void unsetitemType();
    void setItemType(const std::string& value);

    /// <summary>
    /// **参数解释：** 用量封顶阈值，域名用量达到该阈值后，将会停用域名 **约束限制：** 不涉及 **取值范围：** 必须为正整数 **默认取值：** 不涉及
    /// </summary>

    std::string getLimitValue() const;
    bool limitValueIsSet() const;
    void unsetlimitValue();
    void setLimitValue(const std::string& value);

    /// <summary>
    /// **参数解释：** 用量告警阈值，域名用量达到该阈值后，将会发送告警 **约束限制：** 不涉及 **取值范围：** 1-90 **默认取值：** 不涉及
    /// </summary>

    std::string getAlarmPercentThreshold() const;
    bool alarmPercentThresholdIsSet() const;
    void unsetalarmPercentThreshold();
    void setAlarmPercentThreshold(const std::string& value);

    /// <summary>
    /// **参数解释：** 域名封禁周期 **约束限制：** ban_time设置为0时，表示不自动解封，需要客户手动解封域名 **取值范围：** - 0: 不自动解封 - 60: 60分钟，即1个小时 - 720: 720分钟，即12个小时 - 1440: 1440分钟，即24个小时 - 4320: 4320分钟，即3天 **默认取值：** 不涉及
    /// </summary>

    std::string getBanTime() const;
    bool banTimeIsSet() const;
    void unsetbanTime();
    void setBanTime(const std::string& value);


protected:
    std::string strategyType_;
    bool strategyTypeIsSet_;
    std::string itemType_;
    bool itemTypeIsSet_;
    std::string limitValue_;
    bool limitValueIsSet_;
    std::string alarmPercentThreshold_;
    bool alarmPercentThresholdIsSet_;
    std::string banTime_;
    bool banTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_FlowLimitStrategy_H_
