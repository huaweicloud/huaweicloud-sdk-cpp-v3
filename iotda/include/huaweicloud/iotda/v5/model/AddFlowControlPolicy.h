
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddFlowControlPolicy_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddFlowControlPolicy_H_


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
/// 新增数据流转流控策略请求结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  AddFlowControlPolicy
    : public ModelBase
{
public:
    AddFlowControlPolicy();
    virtual ~AddFlowControlPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddFlowControlPolicy members

    /// <summary>
    /// **参数说明**：数据流转流控策略名称。 **取值范围**：长度不超过256，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getPolicyName() const;
    bool policyNameIsSet() const;
    void unsetpolicyName();
    void setPolicyName(const std::string& value);

    /// <summary>
    /// **参数说明**：用户自定义的数据流转流控策略描述。 **取值范围**：长度不超过256，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数说明**：流控策略作用域. **取值范围**： - USER：租户级流控策略。 - CHANNEL：转发通道级流控策略。 - RULE：转发规则级流控策略。 - ACTION：转发动作级流控策略。
    /// </summary>

    std::string getScope() const;
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(const std::string& value);

    /// <summary>
    /// **参数说明**：流控策略作用域附加值。 scope取值为USER时，可不携带该字段，表示租户级流控。 scope取值为CHANNEL时，**取值范围**：HTTP_FORWARDING、DIS_FORWARDING、OBS_FORWARDING、AMQP_FORWARDING、DMS_KAFKA_FORWARDING。 scope取值为RULE时，该字段为对应的ruleId。 scope取值为ACTION时，该字段为对应的actionId。
    /// </summary>

    std::string getScopeValue() const;
    bool scopeValueIsSet() const;
    void unsetscopeValue();
    void setScopeValue(const std::string& value);

    /// <summary>
    /// **参数说明**：数据转发流控大小。单位为tps，取值范围为1~1000的整数，默认为1000.
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string policyName_;
    bool policyNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string scope_;
    bool scopeIsSet_;
    std::string scopeValue_;
    bool scopeValueIsSet_;
    int32_t limit_;
    bool limitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddFlowControlPolicy_H_
