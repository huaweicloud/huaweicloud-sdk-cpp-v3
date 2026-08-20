
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionExecution_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionExecution_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/ExtensionExecutionStep.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 执行定义
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ExtensionExecution
    : public ModelBase
{
public:
    ExtensionExecution();
    virtual ~ExtensionExecution();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtensionExecution members

    /// <summary>
    /// 执行步骤列表。
    /// </summary>

    std::vector<ExtensionExecutionStep>& getSteps();
    bool stepsIsSet() const;
    void unsetsteps();
    void setSteps(const std::vector<ExtensionExecutionStep>& value);


protected:
    std::vector<ExtensionExecutionStep> steps_;
    bool stepsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionExecution_H_
