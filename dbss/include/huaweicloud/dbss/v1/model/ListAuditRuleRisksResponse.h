
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditRuleRisksResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditRuleRisksResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/RuleRiskResponse_rules.h>
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
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditRuleRisksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditRuleRisksResponse();
    virtual ~ListAuditRuleRisksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditRuleRisksResponse members

    /// <summary>
    /// 风险规则列表
    /// </summary>

    std::vector<RuleRiskResponse_rules>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<RuleRiskResponse_rules>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 自定义规则总数
    /// </summary>

    int32_t getCustomizeTotal() const;
    bool customizeTotalIsSet() const;
    void unsetcustomizeTotal();
    void setCustomizeTotal(int32_t value);


protected:
    std::vector<RuleRiskResponse_rules> rules_;
    bool rulesIsSet_;
    int32_t total_;
    bool totalIsSet_;
    int32_t customizeTotal_;
    bool customizeTotalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditRuleRisksResponse_H_
