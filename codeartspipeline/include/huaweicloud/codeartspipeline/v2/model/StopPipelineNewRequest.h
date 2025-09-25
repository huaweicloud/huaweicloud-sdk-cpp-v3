
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StopPipelineNewRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StopPipelineNewRequest_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  StopPipelineNewRequest
    : public ModelBase
{
public:
    StopPipelineNewRequest();
    virtual ~StopPipelineNewRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StopPipelineNewRequest members

    /// <summary>
    /// 流水线ID
    /// </summary>

    std::string getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(const std::string& value);

    /// <summary>
    /// 流水线执行ID
    /// </summary>

    std::string getBuildId() const;
    bool buildIdIsSet() const;
    void unsetbuildId();
    void setBuildId(const std::string& value);


protected:
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    std::string buildId_;
    bool buildIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    StopPipelineNewRequest& dereference_from_shared_ptr(std::shared_ptr<StopPipelineNewRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StopPipelineNewRequest_H_
