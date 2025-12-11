
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditRuleRiskNewResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditRuleRiskNewResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/RuleRiskInfoBean_schemas.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ShowAuditRuleRiskNewResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAuditRuleRiskNewResponse();
    virtual ~ShowAuditRuleRiskNewResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuditRuleRiskNewResponse members

    /// <summary>
    /// 风险规则ID
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// 风险名称
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 风险规则状态 - OFF：禁用 - ON：启用
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 操作集合, 中间逗号分隔。 LOGIN,CREATE_TABLE,CREATE_TABLESPACE,DROP_TABLE, DROP_TABLESPACE,DELETE,INSERT,INSERT_SELECT,SELECT,SELECT_FOR_UPDATE, UPDATE,CREATE_USER,DROP_USER,GRANT,OPERATE ALL
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// Schema列表
    /// </summary>

    std::vector<RuleRiskInfoBean_schemas>& getSchemas();
    bool schemasIsSet() const;
    void unsetschemas();
    void setSchemas(const std::vector<RuleRiskInfoBean_schemas>& value);

    /// <summary>
    /// 风险规则优先级。数字越小优先级越高。
    /// </summary>

    int32_t getRank() const;
    bool rankIsSet() const;
    void unsetrank();
    void setRank(int32_t value);

    /// <summary>
    /// 是否忽略大小写
    /// </summary>

    bool isIgnoreCase() const;
    bool ignoreCaseIsSet() const;
    void unsetignoreCase();
    void setIgnoreCase(bool value);

    /// <summary>
    /// 风险级别 - LOW：低 - MEDIUM：中 - HIGH：高 - NO_RISK：无风险
    /// </summary>

    std::string getRiskLevel() const;
    bool riskLevelIsSet() const;
    void unsetriskLevel();
    void setRiskLevel(const std::string& value);

    /// <summary>
    /// 数据库id，中间逗号分隔（单个id 小于256位）
    /// </summary>

    std::string getDbIds() const;
    bool dbIdsIsSet() const;
    void unsetdbIds();
    void setDbIds(const std::string& value);

    /// <summary>
    /// 执行时长对执行时长阈值的关系 - GREATER：大于 - EQUAL：等于 - LESS：小于 - GREATER_EQUAL：大于等于 - LESS_EQUAL：小于等于 - NO_MATCH：不匹配
    /// </summary>

    std::string getExecutionSymbol() const;
    bool executionSymbolIsSet() const;
    void unsetexecutionSymbol();
    void setExecutionSymbol(const std::string& value);

    /// <summary>
    /// 设定的执行时长阈值
    /// </summary>

    int32_t getExecutionTime() const;
    bool executionTimeIsSet() const;
    void unsetexecutionTime();
    void setExecutionTime(int32_t value);

    /// <summary>
    /// 影响行数对行数阈值的关系：  - GREATER：大于 - EQUAL：等于 - LESS：小于 - GREATER_EQUAL：大于等于 - LESS_EQUAL：小于等于 - NO_MATCH：不匹配
    /// </summary>

    std::string getAffectSymbol() const;
    bool affectSymbolIsSet() const;
    void unsetaffectSymbol();
    void setAffectSymbol(const std::string& value);

    /// <summary>
    /// 设定的影响行数阈值
    /// </summary>

    int32_t getAffectRows() const;
    bool affectRowsIsSet() const;
    void unsetaffectRows();
    void setAffectRows(int32_t value);

    /// <summary>
    /// 客户端IP段: IP-IP格式，或IP/XX 格式。 各个IP段使用逗号连接
    /// </summary>

    std::string getClientIps() const;
    bool clientIpsIsSet() const;
    void unsetclientIps();
    void setClientIps(const std::string& value);


protected:
    std::string ruleId_;
    bool ruleIdIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::vector<RuleRiskInfoBean_schemas> schemas_;
    bool schemasIsSet_;
    int32_t rank_;
    bool rankIsSet_;
    bool ignoreCase_;
    bool ignoreCaseIsSet_;
    std::string riskLevel_;
    bool riskLevelIsSet_;
    std::string dbIds_;
    bool dbIdsIsSet_;
    std::string executionSymbol_;
    bool executionSymbolIsSet_;
    int32_t executionTime_;
    bool executionTimeIsSet_;
    std::string affectSymbol_;
    bool affectSymbolIsSet_;
    int32_t affectRows_;
    bool affectRowsIsSet_;
    std::string clientIps_;
    bool clientIpsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditRuleRiskNewResponse_H_
