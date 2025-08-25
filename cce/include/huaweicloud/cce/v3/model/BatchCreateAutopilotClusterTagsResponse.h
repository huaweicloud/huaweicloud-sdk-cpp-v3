
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchCreateAutopilotClusterTagsResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchCreateAutopilotClusterTagsResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  BatchCreateAutopilotClusterTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchCreateAutopilotClusterTagsResponse();
    virtual ~BatchCreateAutopilotClusterTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateAutopilotClusterTagsResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchCreateAutopilotClusterTagsResponse_H_
