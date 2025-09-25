
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ActionsPipelineRunsPollingQueryDTO_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ActionsPipelineRunsPollingQueryDTO_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ActionsPipelineRunsPollingQueryDTO
    : public ModelBase
{
public:
    ActionsPipelineRunsPollingQueryDTO();
    virtual ~ActionsPipelineRunsPollingQueryDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActionsPipelineRunsPollingQueryDTO members

    /// <summary>
    /// **参数解释**： 流水线运行实例ID列表。 **约束限制**： 不涉及。 **取值范围**： 32位字符，仅由数字和字母组成。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getPipelineRunIds();
    bool pipelineRunIdsIsSet() const;
    void unsetpipelineRunIds();
    void setPipelineRunIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> pipelineRunIds_;
    bool pipelineRunIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ActionsPipelineRunsPollingQueryDTO_H_
