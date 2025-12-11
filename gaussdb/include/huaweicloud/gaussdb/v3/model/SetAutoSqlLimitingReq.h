
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetAutoSqlLimitingReq_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetAutoSqlLimitingReq_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/AutoSqlLimitingRule.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  开启自治限流规则请求体。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SetAutoSqlLimitingReq
    : public ModelBase
{
public:
    SetAutoSqlLimitingReq();
    virtual ~SetAutoSqlLimitingReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetAutoSqlLimitingReq members

    /// <summary>
    /// **参数解释**：  开启自治限流规则。  **约束限制**：  不涉及。
    /// </summary>

    std::vector<AutoSqlLimitingRule>& getAutoSqlLimitingRules();
    bool autoSqlLimitingRulesIsSet() const;
    void unsetautoSqlLimitingRules();
    void setAutoSqlLimitingRules(const std::vector<AutoSqlLimitingRule>& value);


protected:
    std::vector<AutoSqlLimitingRule> autoSqlLimitingRules_;
    bool autoSqlLimitingRulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetAutoSqlLimitingReq_H_
