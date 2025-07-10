
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListRuleDetailsResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListRuleDetailsResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/RuleResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ListRuleDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRuleDetailsResponse();
    virtual ~ListRuleDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRuleDetailsResponse members

    /// <summary>
    /// 规则列表
    /// </summary>

    std::vector<RuleResponse>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<RuleResponse>& value);


protected:
    std::vector<RuleResponse> rules_;
    bool rulesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListRuleDetailsResponse_H_
