
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateRuleAclDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateRuleAclDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/RuleAddressDto.h>
#include <huaweicloud/cfw/v1/model/TagsVO.h>
#include <string>
#include <huaweicloud/cfw/v1/model/RuleServiceDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// UpdateRuleAclDto
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  UpdateRuleAclDto
    : public ModelBase
{
public:
    UpdateRuleAclDto();
    virtual ~UpdateRuleAclDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRuleAclDto members

    /// <summary>
    /// **参数解释**： IP地址的互联网协议类型，用于指定IP地址的互联网协议，由客户指定 **约束限制**： 不涉及 **取值范围**： 0表示IPv4，1表示IPv6 **默认取值**： 不涉及
    /// </summary>

    int32_t getAddressType() const;
    bool addressTypeIsSet() const;
    void unsetaddressType();
    void setAddressType(int32_t value);

    /// <summary>
    /// **参数解释**： 规则名称，由用户定义，用于标识规则 **约束限制**： 字符串长度为0到255 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则方向，用于指定规则是从云上至云下，还是云下至云上 **约束限制**： 当规则type&#x3D;0（互联网规则）或者type&#x3D; 2（nat规则）时方向值必填 **取值范围**： 0表示外到内（云下到云上），1表示内到外（云上到云下）， **默认取值**： 不涉及
    /// </summary>

    int32_t getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(int32_t value);

    /// <summary>
    /// **参数解释**： 规则动作类型，用于区分规则对流量的动作 **约束限制**： 仅能使用数字0和1 **取值范围**： 0表示允许通行（permit），1表示拒绝通行（deny） **默认取值**： 不涉及
    /// </summary>

    int32_t getActionType() const;
    bool actionTypeIsSet() const;
    void unsetactionType();
    void setActionType(int32_t value);

    /// <summary>
    /// **参数解释**： 规则启用状态，用于区分规则是否启用 **约束限制**： 仅能使用数字0和1 **取值范围**： 0表示启用，1表示禁用 **默认取值**： 不涉及
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// **参数解释**： 规则应用协议列表 **约束限制**： 不涉及 **取值范围**： 规则应用类型包括：“HTTP”，\&quot;HTTPS\&quot;，\&quot;TLS1\&quot;，“DNS”，“SSH”，“MYSQL”，“SMTP”，“RDP”，“RDPS”，“VNC”，“POP3”，“IMAP4”，“SMTPS”，“POP3S”，“FTPS”，“ANY”，“BGP”等。 **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getApplications();
    bool applicationsIsSet() const;
    void unsetapplications();
    void setApplications(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 规则描述，用于描述规则的用途。 **约束限制**： 不涉及 **取值范围**： 长度在0-255之间 **默认取值**： 不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 长连接时长对应小时数（h）。 **约束限制**： 仅能为数字 **取值范围**： 0-24000。 **默认取值**： 不涉及
    /// </summary>

    int64_t getLongConnectTimeHour() const;
    bool longConnectTimeHourIsSet() const;
    void unsetlongConnectTimeHour();
    void setLongConnectTimeHour(int64_t value);

    /// <summary>
    /// **参数解释**： 长连接时长对应分钟数（min）。 **约束限制**： 仅能为数字 **取值范围**： 0-60。 **默认取值**： 不涉及
    /// </summary>

    int64_t getLongConnectTimeMinute() const;
    bool longConnectTimeMinuteIsSet() const;
    void unsetlongConnectTimeMinute();
    void setLongConnectTimeMinute(int64_t value);

    /// <summary>
    /// **参数解释**： 长连接时长对应秒数（s）。 **约束限制**： 仅能为数字 **取值范围**： 0-60。 **默认取值**： 不涉及
    /// </summary>

    int64_t getLongConnectTimeSecond() const;
    bool longConnectTimeSecondIsSet() const;
    void unsetlongConnectTimeSecond();
    void setLongConnectTimeSecond(int64_t value);

    /// <summary>
    /// **参数解释**： 长连接时长（s），用于表示流量产生会话保持的最大时长。 **约束限制**： 仅能为数字 **取值范围**： 1-86400000。 **默认取值**： 不涉及
    /// </summary>

    int64_t getLongConnectTime() const;
    bool longConnectTimeIsSet() const;
    void unsetlongConnectTime();
    void setLongConnectTime(int64_t value);

    /// <summary>
    /// **参数解释**： 用于表示是否支持长连接。 **约束限制**： 不涉及 **取值范围**： 0表示不支持，1表示支持 **默认取值**： 不涉及
    /// </summary>

    int32_t getLongConnectEnable() const;
    bool longConnectEnableIsSet() const;
    void unsetlongConnectEnable();
    void setLongConnectEnable(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    RuleAddressDto getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const RuleAddressDto& value);

    /// <summary>
    /// 
    /// </summary>

    RuleAddressDto getDestination() const;
    bool destinationIsSet() const;
    void unsetdestination();
    void setDestination(const RuleAddressDto& value);

    /// <summary>
    /// 
    /// </summary>

    RuleServiceDto getService() const;
    bool serviceIsSet() const;
    void unsetservice();
    void setService(const RuleServiceDto& value);

    /// <summary>
    /// **参数解释**： 规则类型，用于区分不同防护对象设置规则类型。 **约束限制**： 不涉及 **取值范围**：  0：互联网边界规则，源（source）和目的（destination）地址需要为公网IP或域名； 1：VPC间规则，源（source）和目的（destination）地址需要为私有ip； 2：NAT规则，源（source）地址需要为私网IP，目的地址为公网IP或域名。 **默认取值**： 不涉及
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    TagsVO getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const TagsVO& value);


protected:
    int32_t addressType_;
    bool addressTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t direction_;
    bool directionIsSet_;
    int32_t actionType_;
    bool actionTypeIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::vector<std::string> applications_;
    bool applicationsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int64_t longConnectTimeHour_;
    bool longConnectTimeHourIsSet_;
    int64_t longConnectTimeMinute_;
    bool longConnectTimeMinuteIsSet_;
    int64_t longConnectTimeSecond_;
    bool longConnectTimeSecondIsSet_;
    int64_t longConnectTime_;
    bool longConnectTimeIsSet_;
    int32_t longConnectEnable_;
    bool longConnectEnableIsSet_;
    RuleAddressDto source_;
    bool sourceIsSet_;
    RuleAddressDto destination_;
    bool destinationIsSet_;
    RuleServiceDto service_;
    bool serviceIsSet_;
    int32_t type_;
    bool typeIsSet_;
    TagsVO tag_;
    bool tagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateRuleAclDto_H_
