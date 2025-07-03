
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateFlowsResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateFlowsResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/FlowDetailRespBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CreateFlowsResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateFlowsResponse();
    virtual ~CreateFlowsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFlowsResponse members

    /// <summary>
    /// 
    /// </summary>

    FlowDetailRespBody getFlow() const;
    bool flowIsSet() const;
    void unsetflow();
    void setFlow(const FlowDetailRespBody& value);


protected:
    FlowDetailRespBody flow_;
    bool flowIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateFlowsResponse_H_
