
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ValidateAuthorizationRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ValidateAuthorizationRequestBody_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AuthRequests.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ValidateAuthorizationRequestBody
    : public ModelBase
{
public:
    ValidateAuthorizationRequestBody();
    virtual ~ValidateAuthorizationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ValidateAuthorizationRequestBody members

    /// <summary>
    /// **参数解释**：工作空间鉴权请求体。
    /// </summary>

    std::vector<AuthRequests>& getRequests();
    bool requestsIsSet() const;
    void unsetrequests();
    void setRequests(const std::vector<AuthRequests>& value);


protected:
    std::vector<AuthRequests> requests_;
    bool requestsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ValidateAuthorizationRequestBody_H_
