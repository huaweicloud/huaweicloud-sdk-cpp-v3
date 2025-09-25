
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UpdateRuleSetReq_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UpdateRuleSetReq_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/UpdateRuleInstance.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  UpdateRuleSetReq
    : public ModelBase
{
public:
    UpdateRuleSetReq();
    virtual ~UpdateRuleSetReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRuleSetReq members

    /// <summary>
    /// **参数解释**： 策略名称。 **约束限制**： 策略名称仅支持中文、大小写英文字母、数字、‘-’、‘_’。 **取值范围**： 不超过128个字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 策略中的规则列表。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<UpdateRuleInstance>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<UpdateRuleInstance>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<UpdateRuleInstance> rules_;
    bool rulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UpdateRuleSetReq_H_
