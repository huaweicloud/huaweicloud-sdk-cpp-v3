
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowAomMappingRuleRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowAomMappingRuleRequest_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ShowAomMappingRuleRequest
    : public ModelBase
{
public:
    ShowAomMappingRuleRequest();
    virtual ~ShowAomMappingRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowAomMappingRuleRequest members

    /// <summary>
    /// 接入规则ID
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);


protected:
    std::string ruleId_;
    bool ruleIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAomMappingRuleRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAomMappingRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowAomMappingRuleRequest_H_
