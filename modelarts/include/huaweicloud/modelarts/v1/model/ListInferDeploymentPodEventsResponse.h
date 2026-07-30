
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferDeploymentPodEventsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferDeploymentPodEventsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServicePodEventResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListInferDeploymentPodEventsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInferDeploymentPodEventsResponse();
    virtual ~ListInferDeploymentPodEventsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInferDeploymentPodEventsResponse members

    /// <summary>
    /// **参数解释：** 服务Pod事件列表。
    /// </summary>

    std::vector<ServicePodEventResponse>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<ServicePodEventResponse>& value);


protected:
    std::vector<ServicePodEventResponse> body_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferDeploymentPodEventsResponse_H_
