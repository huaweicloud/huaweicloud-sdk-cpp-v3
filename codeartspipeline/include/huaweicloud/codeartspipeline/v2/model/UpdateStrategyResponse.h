
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UpdateStrategyResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UpdateStrategyResponse_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  UpdateStrategyResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateStrategyResponse();
    virtual ~UpdateStrategyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateStrategyResponse members

    /// <summary>
    /// **参数解释**： 是否调用成功。 **取值范围**： - true：调用成功。 - false：调用失败。 
    /// </summary>

    bool isStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(bool value);

    /// <summary>
    /// **参数解释**： 策略ID，策略的唯一标识，通过[获取策略列表](ListStrategy.xml)接口获取，data.id即为策略ID。 **约束限制**： 不涉及。 **取值范围**： 32位字符，由数字和字母组成。 **默认取值**： 不涉及。 
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

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UpdateStrategyResponse_H_
