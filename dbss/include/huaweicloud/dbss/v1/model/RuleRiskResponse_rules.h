
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleRiskResponse_rules_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleRiskResponse_rules_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  RuleRiskResponse_rules
    : public ModelBase
{
public:
    RuleRiskResponse_rules();
    virtual ~RuleRiskResponse_rules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleRiskResponse_rules members

    /// <summary>
    /// 风险规则ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 风险规则名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 风险规则类型 - LOGIN：登录  - OPERATE：操作
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 风险规则特征
    /// </summary>

    std::string getFeature() const;
    bool featureIsSet() const;
    void unsetfeature();
    void setFeature(const std::string& value);

    /// <summary>
    /// 风险规则状态。 - ON: 开启 - OFF: 关闭
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 风险规则优先级。数字越小优先级越高。
    /// </summary>

    int32_t getRank() const;
    bool rankIsSet() const;
    void unsetrank();
    void setRank(int32_t value);

    /// <summary>
    /// 风险级别 - LOW：低 - MEDIUM：中 - HIGH：高 - NO_RISK：无风险
    /// </summary>

    std::string getRiskLevel() const;
    bool riskLevelIsSet() const;
    void unsetriskLevel();
    void setRiskLevel(const std::string& value);

    /// <summary>
    /// 规则类型 - SYSTEM: 系统  - CUSTOMIZE: 自定义
    /// </summary>

    std::string getRuleType() const;
    bool ruleTypeIsSet() const;
    void unsetruleType();
    void setRuleType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string feature_;
    bool featureIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t rank_;
    bool rankIsSet_;
    std::string riskLevel_;
    bool riskLevelIsSet_;
    std::string ruleType_;
    bool ruleTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleRiskResponse_rules_H_
