
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowStepOutputsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowStepOutputsRequest_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ShowStepOutputsRequest
    : public ModelBase
{
public:
    ShowStepOutputsRequest();
    virtual ~ShowStepOutputsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStepOutputsRequest members

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
    /// 
    /// </summary>

    std::string getStepRunIds() const;
    bool stepRunIdsIsSet() const;
    void unsetstepRunIds();
    void setStepRunIds(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    std::string pipelineRunId_;
    bool pipelineRunIdIsSet_;
    std::string stepRunIds_;
    bool stepRunIdsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowStepOutputsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowStepOutputsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowStepOutputsRequest_H_
