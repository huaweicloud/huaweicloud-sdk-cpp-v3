
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowHistoricalSqlFilterRuleResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowHistoricalSqlFilterRuleResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/HistoricalSqlFilterRule.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowHistoricalSqlFilterRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowHistoricalSqlFilterRuleResponse();
    virtual ~ShowHistoricalSqlFilterRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHistoricalSqlFilterRuleResponse members

    /// <summary>
    /// **参数解释**：  历史SQL限流规则。
    /// </summary>

    std::vector<HistoricalSqlFilterRule>& getSqlFilterRules();
    bool sqlFilterRulesIsSet() const;
    void unsetsqlFilterRules();
    void setSqlFilterRules(const std::vector<HistoricalSqlFilterRule>& value);


protected:
    std::vector<HistoricalSqlFilterRule> sqlFilterRules_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowHistoricalSqlFilterRuleResponse_H_
