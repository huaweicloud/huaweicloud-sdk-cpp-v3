
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_BatchShowPipelinesStatusResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_BatchShowPipelinesStatusResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/PipelineExecuteStates.h>
#include <vector>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  BatchShowPipelinesStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchShowPipelinesStatusResponse();
    virtual ~BatchShowPipelinesStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchShowPipelinesStatusResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<PipelineExecuteStates>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<PipelineExecuteStates>& value);


protected:
    std::vector<PipelineExecuteStates> body_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_BatchShowPipelinesStatusResponse_H_
