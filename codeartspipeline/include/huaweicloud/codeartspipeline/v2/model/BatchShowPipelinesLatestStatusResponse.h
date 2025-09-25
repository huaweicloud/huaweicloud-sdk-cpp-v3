
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_BatchShowPipelinesLatestStatusResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_BatchShowPipelinesLatestStatusResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/PipelineLatestRun.h>
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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  BatchShowPipelinesLatestStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchShowPipelinesLatestStatusResponse();
    virtual ~BatchShowPipelinesLatestStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchShowPipelinesLatestStatusResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<PipelineLatestRun>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<PipelineLatestRun>& value);


protected:
    std::vector<PipelineLatestRun> body_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_BatchShowPipelinesLatestStatusResponse_H_
