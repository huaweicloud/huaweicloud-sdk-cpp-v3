
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_WafCustomRuleAction_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_WafCustomRuleAction_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  WafCustomRuleAction
    : public ModelBase
{
public:
    WafCustomRuleAction();
    virtual ~WafCustomRuleAction();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WafCustomRuleAction members

    /// <summary>
    /// 防护动作。 “block”：拦截。 “pass”：放行。 “log”：仅记录
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);


protected:
    std::string category_;
    bool categoryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_WafCustomRuleAction_H_
