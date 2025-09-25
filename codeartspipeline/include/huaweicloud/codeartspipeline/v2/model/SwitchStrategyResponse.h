
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_SwitchStrategyResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_SwitchStrategyResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  SwitchStrategyResponse
    : public ModelBase, public HttpResponse
{
public:
    SwitchStrategyResponse();
    virtual ~SwitchStrategyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchStrategyResponse members

    /// <summary>
    /// **参数解释**： 更新状态是否成功。 **取值范围**： - true：状态更新成功。 - false：状态更新失败。 
    /// </summary>

    bool isStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(bool value);

    /// <summary>
    /// **参数解释**： 更新的策略ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getRuleSetId() const;
    bool ruleSetIdIsSet() const;
    void unsetruleSetId();
    void setRuleSetId(const std::string& value);


protected:
    bool status_;
    bool statusIsSet_;
    std::string ruleSetId_;
    bool ruleSetIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_SwitchStrategyResponse_H_
