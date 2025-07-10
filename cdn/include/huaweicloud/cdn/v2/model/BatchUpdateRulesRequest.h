
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchUpdateRulesRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchUpdateRulesRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/UpdateRuleStatusRequest.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 批量更新规则状态和优先级 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  BatchUpdateRulesRequest
    : public ModelBase
{
public:
    BatchUpdateRulesRequest();
    virtual ~BatchUpdateRulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateRulesRequest members

    /// <summary>
    /// **参数解释：** 规则列表 **约束限制：** 不涉及
    /// </summary>

    std::vector<UpdateRuleStatusRequest>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<UpdateRuleStatusRequest>& value);


protected:
    std::vector<UpdateRuleStatusRequest> rules_;
    bool rulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchUpdateRulesRequest_H_
