
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleAddSqlRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleAddSqlRequest_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  RuleAddSqlRequest
    : public ModelBase
{
public:
    RuleAddSqlRequest();
    virtual ~RuleAddSqlRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleAddSqlRequest members

    /// <summary>
    /// 风险等级  - LOW：低  - MEDIUM：中  - HIGH：高 - NO_RISK：无
    /// </summary>

    std::string getRiskLevel() const;
    bool riskLevelIsSet() const;
    void unsetriskLevel();
    void setRiskLevel(const std::string& value);

    /// <summary>
    /// 规则名称
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 正则表达式
    /// </summary>

    std::string getSqlRegex() const;
    bool sqlRegexIsSet() const;
    void unsetsqlRegex();
    void setSqlRegex(const std::string& value);

    /// <summary>
    /// 状态  - ON：开启  - OFF：关闭
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string riskLevel_;
    bool riskLevelIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string sqlRegex_;
    bool sqlRegexIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleAddSqlRequest_H_
