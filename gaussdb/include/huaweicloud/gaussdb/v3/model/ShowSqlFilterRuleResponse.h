
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSqlFilterRuleResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSqlFilterRuleResponse_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/SqlFilterRule.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowSqlFilterRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSqlFilterRuleResponse();
    virtual ~ShowSqlFilterRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowSqlFilterRuleResponse members

    /// <summary>
    /// 节点ID
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// SQL限流规则
    /// </summary>

    std::vector<SqlFilterRule>& getSqlFilterRules();
    bool sqlFilterRulesIsSet() const;
    void unsetsqlFilterRules();
    void setSqlFilterRules(const std::vector<SqlFilterRule>& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::vector<SqlFilterRule> sqlFilterRules_;
    bool sqlFilterRulesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSqlFilterRuleResponse_H_
