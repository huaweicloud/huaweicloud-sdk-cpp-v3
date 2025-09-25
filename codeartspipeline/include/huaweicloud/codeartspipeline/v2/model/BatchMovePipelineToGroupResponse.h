
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_BatchMovePipelineToGroupResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_BatchMovePipelineToGroupResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/codeartspipeline/v2/model/PipelineMoveToGroupResponseVo.h>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  BatchMovePipelineToGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchMovePipelineToGroupResponse();
    virtual ~BatchMovePipelineToGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchMovePipelineToGroupResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<PipelineMoveToGroupResponseVo>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<PipelineMoveToGroupResponseVo>& value);


protected:
    std::vector<PipelineMoveToGroupResponseVo> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_BatchMovePipelineToGroupResponse_H_
