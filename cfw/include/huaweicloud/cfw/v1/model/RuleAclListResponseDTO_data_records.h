
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleAclListResponseDTO_data_records_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleAclListResponseDTO_data_records_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/TagsVO.h>
#include <huaweicloud/cfw/v1/model/RuleAddressDtoForResponse.h>
#include <string>
#include <huaweicloud/cfw/v1/model/RuleServiceDtoForResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// items
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  RuleAclListResponseDTO_data_records
    : public ModelBase
{
public:
    RuleAclListResponseDTO_data_records();
    virtual ~RuleAclListResponseDTO_data_records();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleAclListResponseDTO_data_records members

    /// <summary>
    /// **参数解释**： 规则ID **取值范围**： 不涉及
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// **参数解释**： 排序id **取值范围**： 不涉及
    /// </summary>

    int32_t getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(int32_t value);

    /// <summary>
    /// **参数解释**： 应用列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<std::string>& getApplications();
    bool applicationsIsSet() const;
    void unsetapplications();
    void setApplications(const std::vector<std::string>& value);

    /// <summary>
    /// 参数解释： IP地址的互联网协议类型，用于指定IP地址的互联网协议，由客户指定 约束限制： 不涉及 取值范围： 0：IPv4 1：IPv6 默认取值： 不涉及
    /// </summary>

    int32_t getAddressType() const;
    bool addressTypeIsSet() const;
    void unsetaddressType();
    void setAddressType(int32_t value);

    /// <summary>
    /// **参数解释**： 规则名称 **取值范围**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则方向 **取值范围**： 0：外到内1：内到外
    /// </summary>

    int32_t getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(int32_t value);

    /// <summary>
    /// **参数解释**： 规则动作类型，用于区分规则对流量的动作 **取值范围**： 0表示允许通行（permit），1表示拒绝通行（deny）
    /// </summary>

    int32_t getActionType() const;
    bool actionTypeIsSet() const;
    void unsetactionType();
    void setActionType(int32_t value);

    /// <summary>
    /// **参数解释**： 规则启用状态，用于区分规则是否启用 **取值范围**： 0表示启用，1表示禁用
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// **参数解释**： 规则描述，用于描述规则的用途。 **取值范围**： 不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 长连接时长（s）。 **取值范围**： 1-86400000。
    /// </summary>

    int64_t getLongConnectTime() const;
    bool longConnectTimeIsSet() const;
    void unsetlongConnectTime();
    void setLongConnectTime(int64_t value);

    /// <summary>
    /// **参数解释**： 用于表示是否支持长连接。 **取值范围**： 0表示不支持，1表示支持
    /// </summary>

    int32_t getLongConnectEnable() const;
    bool longConnectEnableIsSet() const;
    void unsetlongConnectEnable();
    void setLongConnectEnable(int32_t value);

    /// <summary>
    /// **参数解释**： 长连接时长对应小时数（h）。 **取值范围**： 0-24000。
    /// </summary>

    int64_t getLongConnectTimeHour() const;
    bool longConnectTimeHourIsSet() const;
    void unsetlongConnectTimeHour();
    void setLongConnectTimeHour(int64_t value);

    /// <summary>
    /// **参数解释**： 长连接时长对应分钟数（min）。 **取值范围**： 0-60。
    /// </summary>

    int64_t getLongConnectTimeMinute() const;
    bool longConnectTimeMinuteIsSet() const;
    void unsetlongConnectTimeMinute();
    void setLongConnectTimeMinute(int64_t value);

    /// <summary>
    /// **参数解释**： 长连接时长对应秒数（s）。 **取值范围**： 0-60。
    /// </summary>

    int64_t getLongConnectTimeSecond() const;
    bool longConnectTimeSecondIsSet() const;
    void unsetlongConnectTimeSecond();
    void setLongConnectTimeSecond(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    RuleAddressDtoForResponse getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const RuleAddressDtoForResponse& value);

    /// <summary>
    /// 
    /// </summary>

    RuleAddressDtoForResponse getDestination() const;
    bool destinationIsSet() const;
    void unsetdestination();
    void setDestination(const RuleAddressDtoForResponse& value);

    /// <summary>
    /// 
    /// </summary>

    RuleServiceDtoForResponse getService() const;
    bool serviceIsSet() const;
    void unsetservice();
    void setService(const RuleServiceDtoForResponse& value);

    /// <summary>
    /// **参数解释**： 规则类型，用于区分不同防护对象设置规则类型。 **取值范围**：  0：互联网边界规则，源（source）和目的（destination）地址需要为公网IP或域名； 1：VPC间规则，源（source）和目的（destination）地址需要为私有ip； 2：NAT规则，源（source）地址需要为私网IP，目的地址为公网IP或域名。
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// **参数解释**： 规则创建时间。 **取值范围**： 不涉及
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则修改时间。 **取值范围**： 不涉及
    /// </summary>

    std::string getModifiedDate() const;
    bool modifiedDateIsSet() const;
    void unsetmodifiedDate();
    void setModifiedDate(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则最后开启时间。 **取值范围**： 不涉及
    /// </summary>

    std::string getLastOpenTime() const;
    bool lastOpenTimeIsSet() const;
    void unsetlastOpenTime();
    void setLastOpenTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TagsVO getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const TagsVO& value);


protected:
    std::string ruleId_;
    bool ruleIdIsSet_;
    int32_t orderId_;
    bool orderIdIsSet_;
    std::vector<std::string> applications_;
    bool applicationsIsSet_;
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
    std::string description_;
    bool descriptionIsSet_;
    int64_t longConnectTime_;
    bool longConnectTimeIsSet_;
    int32_t longConnectEnable_;
    bool longConnectEnableIsSet_;
    int64_t longConnectTimeHour_;
    bool longConnectTimeHourIsSet_;
    int64_t longConnectTimeMinute_;
    bool longConnectTimeMinuteIsSet_;
    int64_t longConnectTimeSecond_;
    bool longConnectTimeSecondIsSet_;
    RuleAddressDtoForResponse source_;
    bool sourceIsSet_;
    RuleAddressDtoForResponse destination_;
    bool destinationIsSet_;
    RuleServiceDtoForResponse service_;
    bool serviceIsSet_;
    int32_t type_;
    bool typeIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    std::string modifiedDate_;
    bool modifiedDateIsSet_;
    std::string lastOpenTime_;
    bool lastOpenTimeIsSet_;
    TagsVO tag_;
    bool tagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleAclListResponseDTO_data_records_H_
