
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetAuthorizationsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetAuthorizationsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AuthorizationResponse.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  GetAuthorizationsResponse
    : public ModelBase, public HttpResponse
{
public:
    GetAuthorizationsResponse();
    virtual ~GetAuthorizationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetAuthorizationsResponse members

    /// <summary>
    /// **参数解释**：授权信息总数。 **取值范围**：不涉及。
    /// </summary>

    double getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(double value);

    /// <summary>
    /// **参数解释**：授权信息列表。
    /// </summary>

    std::vector<AuthorizationResponse>& getAuth();
    bool authIsSet() const;
    void unsetauth();
    void setAuth(const std::vector<AuthorizationResponse>& value);


protected:
    double totalCount_;
    bool totalCountIsSet_;
    std::vector<AuthorizationResponse> auth_;
    bool authIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetAuthorizationsResponse_H_
