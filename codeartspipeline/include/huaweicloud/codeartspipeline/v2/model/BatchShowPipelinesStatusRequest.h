
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_BatchShowPipelinesStatusRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_BatchShowPipelinesStatusRequest_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  BatchShowPipelinesStatusRequest
    : public ModelBase
{
public:
    BatchShowPipelinesStatusRequest();
    virtual ~BatchShowPipelinesStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchShowPipelinesStatusRequest members

    /// <summary>
    /// 要获取状态的流水线ID，用逗号隔开
    /// </summary>

    std::string getPipelineIds() const;
    bool pipelineIdsIsSet() const;
    void unsetpipelineIds();
    void setPipelineIds(const std::string& value);


protected:
    std::string pipelineIds_;
    bool pipelineIdsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchShowPipelinesStatusRequest& dereference_from_shared_ptr(std::shared_ptr<BatchShowPipelinesStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_BatchShowPipelinesStatusRequest_H_
