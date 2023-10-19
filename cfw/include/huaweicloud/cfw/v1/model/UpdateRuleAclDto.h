
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
#include <huaweicloud/cfw/v1/model/OrderRuleAclDto.h>

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
    /// 地址类型，0 ipv4,1 ipv6
    /// </summary>

    int32_t getAddressType() const;
    bool addressTypeIsSet() const;
    void unsetaddressType();
    void setAddressType(int32_t value);

    /// <summary>
    /// 规则名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OrderRuleAclDto getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(const OrderRuleAclDto& value);

    /// <summary>
    /// 规则方向
    /// </summary>

    int32_t getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(int32_t value);

    /// <summary>
    /// 动作0：permit,1：deny
    /// </summary>

    int32_t getActionType() const;
    bool actionTypeIsSet() const;
    void unsetactionType();
    void setActionType(int32_t value);

    /// <summary>
    /// 规则下发状态 0：禁用,1：启用
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 长连接时长小时
    /// </summary>

    int64_t getLongConnectTimeHour() const;
    bool longConnectTimeHourIsSet() const;
    void unsetlongConnectTimeHour();
    void setLongConnectTimeHour(int64_t value);

    /// <summary>
    /// 长连接时长分钟
    /// </summary>

    int64_t getLongConnectTimeMinute() const;
    bool longConnectTimeMinuteIsSet() const;
    void unsetlongConnectTimeMinute();
    void setLongConnectTimeMinute(int64_t value);

    /// <summary>
    /// 长连接时长秒
    /// </summary>

    int64_t getLongConnectTimeSecond() const;
    bool longConnectTimeSecondIsSet() const;
    void unsetlongConnectTimeSecond();
    void setLongConnectTimeSecond(int64_t value);

    /// <summary>
    /// 长连接时长
    /// </summary>

    int64_t getLongConnectTime() const;
    bool longConnectTimeIsSet() const;
    void unsetlongConnectTime();
    void setLongConnectTime(int64_t value);

    /// <summary>
    /// 是否支持长连接，0表示不支持，1表示支持
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
    /// 规则type，0：互联网规则，1:vpc规则，2：nat规则
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
    OrderRuleAclDto sequence_;
    bool sequenceIsSet_;
    int32_t direction_;
    bool directionIsSet_;
    int32_t actionType_;
    bool actionTypeIsSet_;
    int32_t status_;
    bool statusIsSet_;
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
