
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_OutputResp_step_outputs_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_OutputResp_step_outputs_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/OutputResp_output_result.h>
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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  OutputResp_step_outputs
    : public ModelBase
{
public:
    OutputResp_step_outputs();
    virtual ~OutputResp_step_outputs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OutputResp_step_outputs members

    /// <summary>
    /// **参数解释**： 步骤ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getStepRunId() const;
    bool stepRunIdIsSet() const;
    void unsetstepRunId();
    void setStepRunId(const std::string& value);

    /// <summary>
    /// **参数解释**： 步骤输出。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<OutputResp_output_result>& getOutputResult();
    bool outputResultIsSet() const;
    void unsetoutputResult();
    void setOutputResult(const std::vector<OutputResp_output_result>& value);


protected:
    std::string stepRunId_;
    bool stepRunIdIsSet_;
    std::vector<OutputResp_output_result> outputResult_;
    bool outputResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_OutputResp_step_outputs_H_
