
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineRequest_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/RunPipelineDTO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  RunPipelineRequest
    : public ModelBase
{
public:
    RunPipelineRequest();
    virtual ~RunPipelineRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunPipelineRequest members

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 流水线ID
    /// </summary>

    std::string getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RunPipelineDTO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RunPipelineDTO& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    RunPipelineDTO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RunPipelineRequest& dereference_from_shared_ptr(std::shared_ptr<RunPipelineRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineRequest_H_
