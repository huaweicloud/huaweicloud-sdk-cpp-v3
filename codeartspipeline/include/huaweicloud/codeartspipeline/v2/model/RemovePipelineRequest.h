
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RemovePipelineRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RemovePipelineRequest_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  RemovePipelineRequest
    : public ModelBase
{
public:
    RemovePipelineRequest();
    virtual ~RemovePipelineRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemovePipelineRequest members

    /// <summary>
    /// 要删除的流水线ID
    /// </summary>

    std::string getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(const std::string& value);


protected:
    std::string pipelineId_;
    bool pipelineIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RemovePipelineRequest& dereference_from_shared_ptr(std::shared_ptr<RemovePipelineRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RemovePipelineRequest_H_
