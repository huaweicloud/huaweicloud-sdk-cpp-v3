
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineGroupBindDTO_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineGroupBindDTO_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/PipelineGroupBindDTO_pipelines.h>
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
/// **参数解释**： 流水线分组参数详情。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PipelineGroupBindDTO
    : public ModelBase
{
public:
    PipelineGroupBindDTO();
    virtual ~PipelineGroupBindDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineGroupBindDTO members

    /// <summary>
    /// **参数解释**： 分组ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线集合。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<PipelineGroupBindDTO_pipelines>& getPipelines();
    bool pipelinesIsSet() const;
    void unsetpipelines();
    void setPipelines(const std::vector<PipelineGroupBindDTO_pipelines>& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::vector<PipelineGroupBindDTO_pipelines> pipelines_;
    bool pipelinesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineGroupBindDTO_H_
