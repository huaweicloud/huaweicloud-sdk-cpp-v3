
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteInferServicesResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteInferServicesResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServiceResponse.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchDeleteInferServicesResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDeleteInferServicesResponse();
    virtual ~BatchDeleteInferServicesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteInferServicesResponse members

    /// <summary>
    /// **参数解释：** 服务响应返回体。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<ServiceResponse>& getServiceResponses();
    bool serviceResponsesIsSet() const;
    void unsetserviceResponses();
    void setServiceResponses(const std::vector<ServiceResponse>& value);


protected:
    std::vector<ServiceResponse> serviceResponses_;
    bool serviceResponsesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteInferServicesResponse_H_
