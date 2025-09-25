
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineDTO_sources_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineDTO_sources_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/RunPipelineDTO_params.h>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  RunPipelineDTO_sources
    : public ModelBase
{
public:
    RunPipelineDTO_sources();
    virtual ~RunPipelineDTO_sources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunPipelineDTO_sources members

    /// <summary>
    /// **参数解释**： 流水线源类型，目前支持“code”、“artifact”等代码源类型。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RunPipelineDTO_params getParams() const;
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const RunPipelineDTO_params& value);


protected:
    std::string type_;
    bool typeIsSet_;
    RunPipelineDTO_params params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineDTO_sources_H_
