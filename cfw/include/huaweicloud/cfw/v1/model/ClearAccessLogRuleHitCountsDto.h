
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ClearAccessLogRuleHitCountsDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ClearAccessLogRuleHitCountsDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// clear access log rule hit counts dto
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ClearAccessLogRuleHitCountsDto
    : public ModelBase
{
public:
    ClearAccessLogRuleHitCountsDto();
    virtual ~ClearAccessLogRuleHitCountsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClearAccessLogRuleHitCountsDto members

    /// <summary>
    /// 规则id列表
    /// </summary>

    std::vector<std::string>& getRuleIds();
    bool ruleIdsIsSet() const;
    void unsetruleIds();
    void setRuleIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> ruleIds_;
    bool ruleIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ClearAccessLogRuleHitCountsDto_H_
