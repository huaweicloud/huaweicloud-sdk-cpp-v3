
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StopPipelineNewResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StopPipelineNewResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  StopPipelineNewResponse
    : public ModelBase, public HttpResponse
{
public:
    StopPipelineNewResponse();
    virtual ~StopPipelineNewResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StopPipelineNewResponse members

    /// <summary>
    /// 流水线ID
    /// </summary>

    std::string getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(const std::string& value);

    /// <summary>
    /// 流水线名字
    /// </summary>

    std::string getPipelineName() const;
    bool pipelineNameIsSet() const;
    void unsetpipelineName();
    void setPipelineName(const std::string& value);


protected:
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    std::string pipelineName_;
    bool pipelineNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StopPipelineNewResponse_H_
