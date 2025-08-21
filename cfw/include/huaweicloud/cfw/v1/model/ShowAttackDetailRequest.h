
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowAttackDetailRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowAttackDetailRequest_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  ShowAttackDetailRequest
    : public ModelBase
{
public:
    ShowAttackDetailRequest();
    virtual ~ShowAttackDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAttackDetailRequest members

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
    /// **参数解释**： 日志类型 **约束限制**： 不涉及 **取值范围**： internet为南北向日志、nat为nat场景日志，vpc为东西向日志，vgw为vgw场景日志 **默认取值**： 不涉及
    /// </summary>

    std::string getLogType() const;
    bool logTypeIsSet() const;
    void unsetlogType();
    void setLogType(const std::string& value);

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
    /// **参数解释**： 动作 **约束限制**： 不涉及 **取值范围**： 0 全部 1 拦截 **默认取值**： 不涉及
    /// </summary>

    int32_t getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(int32_t value);

    /// <summary>
    /// **参数解释**： 聚合类型 **约束限制**： 不涉及 **取值范围**： src_region_id TOP外部攻击来源地区 attack_type 攻击类型 in_src_ip TOP内部攻击来源IP out_src_ip TOP外部攻击来源IP dst_port TOP被攻击端口 dst_ip TOP攻击目的IP attack_rule TOP攻击规则 src_ip TOP攻击来源IP **默认取值**： 不涉及
    /// </summary>

    std::string getItem() const;
    bool itemIsSet() const;
    void unsetitem();
    void setItem(const std::string& value);

    /// <summary>
    /// **参数解释**： 统计对象 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    int32_t range_;
    bool rangeIsSet_;
    std::string logType_;
    bool logTypeIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::vector<std::string> vgwId_;
    bool vgwIdIsSet_;
    int32_t action_;
    bool actionIsSet_;
    std::string item_;
    bool itemIsSet_;
    std::string value_;
    bool valueIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAttackDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAttackDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowAttackDetailRequest_H_
