
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StartPipelineParameters_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StartPipelineParameters_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/StartPipelineBuildParams.h>
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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  StartPipelineParameters
    : public ModelBase
{
public:
    StartPipelineParameters();
    virtual ~StartPipelineParameters();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartPipelineParameters members

    /// <summary>
    /// **参数解释**： 启动流水线时的构建参数。 **约束限制**： 不涉及。 **取值范围**： 不超过8192个字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<StartPipelineBuildParams>& getBuildParams();
    bool buildParamsIsSet() const;
    void unsetbuildParams();
    void setBuildParams(const std::vector<StartPipelineBuildParams>& value);


protected:
    std::vector<StartPipelineBuildParams> buildParams_;
    bool buildParamsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StartPipelineParameters_H_
