
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RetentionPolicy_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RetentionPolicy_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  RetentionPolicy
    : public ModelBase
{
public:
    RetentionPolicy();
    virtual ~RetentionPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RetentionPolicy members

    /// <summary>
    /// **参数解释**：作业级库记录自动老化策略。 **约束限制**：   - 仅当平台开启作业老化能力且作业类型为自定义训练作业（kind&#x3D;job）时生效；   - 与用户级「作业自动老化」开关联动：     - 用户级开关**开启**：该用户下所有作业均参与老化（&#x60;policy&#x3D;disabled&#x60; 不能单独豁免）；     - 用户级开关**关闭**：仅 &#x60;policy&#x3D;enabled&#x60; 的作业参与老化；未设置或 &#x60;disabled&#x60; 均不参与。 **取值范围**：   - enabled：开启本作业老化   - disabled：关闭本作业老化（仅在用户级开关关闭时有效） **默认取值**：不传表示未单独设置，跟随用户级开关策略。
    /// </summary>

    std::string getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const std::string& value);


protected:
    std::string policy_;
    bool policyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RetentionPolicy_H_
