
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowStepExecutionPolicyResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowStepExecutionPolicyResp_H_


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
/// workflow step execution 策略。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowStepExecutionPolicyResp
    : public ModelBase
{
public:
    WorkflowStepExecutionPolicyResp();
    virtual ~WorkflowStepExecutionPolicyResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowStepExecutionPolicyResp members

    /// <summary>
    /// **参数解释**：执行策略， **取值范围**：可选值如下： - retry：重试 - stop：停止 - continue：继续运行
    /// </summary>

    std::string getExecutionPolicy() const;
    bool executionPolicyIsSet() const;
    void unsetexecutionPolicy();
    void setExecutionPolicy(const std::string& value);

    /// <summary>
    /// **参数解释**：是否使用的是缓存。 **取值范围**： - true：是缓存 - false：不是缓存
    /// </summary>

    bool isUseCache() const;
    bool useCacheIsSet() const;
    void unsetuseCache();
    void setUseCache(bool value);


protected:
    std::string executionPolicy_;
    bool executionPolicyIsSet_;
    bool useCache_;
    bool useCacheIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowStepExecutionPolicyResp_H_
