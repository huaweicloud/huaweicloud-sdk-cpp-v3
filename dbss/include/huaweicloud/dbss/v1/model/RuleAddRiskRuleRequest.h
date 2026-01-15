
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleAddRiskRuleRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleAddRiskRuleRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/SchemaBean.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  RuleAddRiskRuleRequest
    : public ModelBase
{
public:
    RuleAddRiskRuleRequest();
    virtual ~RuleAddRiskRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleAddRiskRuleRequest members

    /// <summary>
    /// 操作类型，多个用英文&#39;,&#39;分隔
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 影响行数
    /// </summary>

    int32_t getAffectRows() const;
    bool affectRowsIsSet() const;
    void unsetaffectRows();
    void setAffectRows(int32_t value);

    /// <summary>
    /// 影响行数操作符 - GREATER：大于 - EQUAL：等于 - LESS：小于 - GREATER_EQUAL：大于等于 - LESS_EQUAL：小于等于 - NO_MATCH：不等于
    /// </summary>

    std::string getAffectSymbol() const;
    bool affectSymbolIsSet() const;
    void unsetaffectSymbol();
    void setAffectSymbol(const std::string& value);

    /// <summary>
    /// 客户端IP，多个用英文&#39;,&#39;分隔
    /// </summary>

    std::string getClientIps() const;
    bool clientIpsIsSet() const;
    void unsetclientIps();
    void setClientIps(const std::string& value);

    /// <summary>
    /// 数据库ID，多个用英文&#39;,&#39;分隔
    /// </summary>

    std::string getDbIds() const;
    bool dbIdsIsSet() const;
    void unsetdbIds();
    void setDbIds(const std::string& value);

    /// <summary>
    /// 例外IP，IP内不做匹配，多个用英文&#39;,&#39;分隔
    /// </summary>

    std::string getExceptionIps() const;
    bool exceptionIpsIsSet() const;
    void unsetexceptionIps();
    void setExceptionIps(const std::string& value);

    /// <summary>
    /// 执行时长操作符 - GREATER：大于 - EQUAL：等于 - LESS：小于 - GREATER_EQUAL：大于等于 - LESS_EQUAL：小于等于 - NO_MATCH：不等于
    /// </summary>

    std::string getExecutionSymbol() const;
    bool executionSymbolIsSet() const;
    void unsetexecutionSymbol();
    void setExecutionSymbol(const std::string& value);

    /// <summary>
    /// 执行时长
    /// </summary>

    int64_t getExecutionTime() const;
    bool executionTimeIsSet() const;
    void unsetexecutionTime();
    void setExecutionTime(int64_t value);

    /// <summary>
    /// 是否忽略大小写
    /// </summary>

    bool isIgnoreCase() const;
    bool ignoreCaseIsSet() const;
    void unsetignoreCase();
    void setIgnoreCase(bool value);

    /// <summary>
    /// 风险等级   - LOW：低  - MEDIUM：中  - HIGH：高  - NO_RISK：无
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
    /// 操作对象
    /// </summary>

    std::vector<SchemaBean>& getSchemas();
    bool schemasIsSet() const;
    void unsetschemas();
    void setSchemas(const std::vector<SchemaBean>& value);

    /// <summary>
    /// 状态  - OFF：已关闭  - ON：已开启
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string action_;
    bool actionIsSet_;
    int32_t affectRows_;
    bool affectRowsIsSet_;
    std::string affectSymbol_;
    bool affectSymbolIsSet_;
    std::string clientIps_;
    bool clientIpsIsSet_;
    std::string dbIds_;
    bool dbIdsIsSet_;
    std::string exceptionIps_;
    bool exceptionIpsIsSet_;
    std::string executionSymbol_;
    bool executionSymbolIsSet_;
    int64_t executionTime_;
    bool executionTimeIsSet_;
    bool ignoreCase_;
    bool ignoreCaseIsSet_;
    std::string riskLevel_;
    bool riskLevelIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::vector<SchemaBean> schemas_;
    bool schemasIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleAddRiskRuleRequest_H_
