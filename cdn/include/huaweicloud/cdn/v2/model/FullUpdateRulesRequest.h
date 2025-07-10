
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_FullUpdateRulesRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_FullUpdateRulesRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cdn/v2/model/CreateRuleRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 全量更新规则配置 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  FullUpdateRulesRequest
    : public ModelBase
{
public:
    FullUpdateRulesRequest();
    virtual ~FullUpdateRulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FullUpdateRulesRequest members

    /// <summary>
    /// **参数解释：** 规则配置内容，可以配置多个规则 **约束限制：** 不涉及
    /// </summary>

    std::vector<CreateRuleRequest>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<CreateRuleRequest>& value);


protected:
    std::vector<CreateRuleRequest> rules_;
    bool rulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_FullUpdateRulesRequest_H_
