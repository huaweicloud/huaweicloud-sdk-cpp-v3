
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_AcceptManualReviewRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_AcceptManualReviewRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  AcceptManualReviewRequest
    : public ModelBase
{
public:
    AcceptManualReviewRequest();
    virtual ~AcceptManualReviewRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AcceptManualReviewRequest members

    /// <summary>
    /// 流水线任务ID
    /// </summary>

    std::string getJobRunId() const;
    bool jobRunIdIsSet() const;
    void unsetjobRunId();
    void setJobRunId(const std::string& value);

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
    /// 流水线运行实例ID
    /// </summary>

    std::string getPipelineRunId() const;
    bool pipelineRunIdIsSet() const;
    void unsetpipelineRunId();
    void setPipelineRunId(const std::string& value);

    /// <summary>
    /// 流水线步骤ID
    /// </summary>

    std::string getStepRunId() const;
    bool stepRunIdIsSet() const;
    void unsetstepRunId();
    void setStepRunId(const std::string& value);


protected:
    std::string jobRunId_;
    bool jobRunIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    std::string pipelineRunId_;
    bool pipelineRunIdIsSet_;
    std::string stepRunId_;
    bool stepRunIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AcceptManualReviewRequest& dereference_from_shared_ptr(std::shared_ptr<AcceptManualReviewRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_AcceptManualReviewRequest_H_
