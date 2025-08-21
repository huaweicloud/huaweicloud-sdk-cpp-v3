
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowAccessTopRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowAccessTopRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ShowAccessTopRequest
    : public ModelBase
{
public:
    ShowAccessTopRequest();
    virtual ~ShowAccessTopRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAccessTopRequest members

    /// <summary>
    /// **参数解释**： 防火墙ID，用户创建防火墙实例后产生的唯一ID，配置后可区分不同防火墙，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 时间范围  **约束限制**： 不涉及 **取值范围**： 0为近一时 1近一天 2近七天   **默认取值**： 不涉及
    /// </summary>

    int32_t getRange() const;
    bool rangeIsSet() const;
    void unsetrange();
    void setRange(int32_t value);

    /// <summary>
    /// **参数解释**： 会话方向 **约束限制**： 不涉及 **取值范围**： in2out为出云方向 out2in为入云方向 **默认取值**： 不涉及
    /// </summary>

    std::string getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(const std::string& value);

    /// <summary>
    /// **参数解释**： 开始时间 **约束限制**： 不涉及 **取值范围**： 毫秒级时间戳 **默认取值**： 不涉及
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**： 结束时间 **约束限制**： 不涉及 **取值范围**： 毫秒级时间戳 **默认取值**： 不涉及
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释**： VGW ID **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getVgwId();
    bool vgwIdIsSet() const;
    void unsetvgwId();
    void setVgwId(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 日志类型 **约束限制**： 不涉及 **取值范围**： internet为南北向日志、nat为nat场景日志，vpc为东西向日志，vgw为vgw场景日志 **默认取值**： 不涉及
    /// </summary>

    std::string getLogType() const;
    bool logTypeIsSet() const;
    void unsetlogType();
    void setLogType(const std::string& value);

    /// <summary>
    /// **参数解释**： 聚合类型 **约束限制**： 不涉及 **取值范围**： strategy_hit_info 策略的命中趋势 strategy_dashboard 策略命中概览 top_deny_rule TOP命中拦截策略 dst_ip TOP拦截目的IP src_ip TOP拦截源IP dst_port TOP拦截端口 dst_region TOP拦截目的地区 src_region TOP拦截源地区 **默认取值**： 不涉及
    /// </summary>

    std::string getItem() const;
    bool itemIsSet() const;
    void unsetitem();
    void setItem(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则ID列表 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getRuleId();
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::vector<std::string>& value);


protected:
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    int32_t range_;
    bool rangeIsSet_;
    std::string direction_;
    bool directionIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::vector<std::string> vgwId_;
    bool vgwIdIsSet_;
    std::string logType_;
    bool logTypeIsSet_;
    std::string item_;
    bool itemIsSet_;
    std::vector<std::string> ruleId_;
    bool ruleIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAccessTopRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAccessTopRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowAccessTopRequest_H_
