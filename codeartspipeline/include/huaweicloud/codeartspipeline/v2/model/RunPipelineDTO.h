
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineDTO_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineDTO_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/RunPipelineDTO_sources.h>
#include <huaweicloud/codeartspipeline/v2/model/RunPipelineDTO_variables.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 运行流水线请求体
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  RunPipelineDTO
    : public ModelBase
{
public:
    RunPipelineDTO();
    virtual ~RunPipelineDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunPipelineDTO members

    /// <summary>
    /// **参数解释**： 代码源信息列表。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<RunPipelineDTO_sources>& getSources();
    bool sourcesIsSet() const;
    void unsetsources();
    void setSources(const std::vector<RunPipelineDTO_sources>& value);

    /// <summary>
    /// **参数解释**： 流水线运行描述。 **约束限制**： 不涉及。 **取值范围**： 不超过1024字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 使用的自定义参数。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<RunPipelineDTO_variables>& getVariables();
    bool variablesIsSet() const;
    void unsetvariables();
    void setVariables(const std::vector<RunPipelineDTO_variables>& value);

    /// <summary>
    /// **参数解释**： 流水线运行时选择的流水线任务。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getChooseJobs();
    bool chooseJobsIsSet() const;
    void unsetchooseJobs();
    void setChooseJobs(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 选择的流水线阶段。优先级高于choose_jobs，即stage未选择时，无视choose_jobs中该stage下的job。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getChooseStages();
    bool chooseStagesIsSet() const;
    void unsetchooseStages();
    void setChooseStages(const std::vector<std::string>& value);


protected:
    std::vector<RunPipelineDTO_sources> sources_;
    bool sourcesIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<RunPipelineDTO_variables> variables_;
    bool variablesIsSet_;
    std::vector<std::string> chooseJobs_;
    bool chooseJobsIsSet_;
    std::vector<std::string> chooseStages_;
    bool chooseStagesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineDTO_H_
