
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ValidateAuthorizationResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ValidateAuthorizationResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ValidateAuthResults.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ValidateAuthorizationResponse
    : public ModelBase, public HttpResponse
{
public:
    ValidateAuthorizationResponse();
    virtual ~ValidateAuthorizationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ValidateAuthorizationResponse members

    /// <summary>
    /// **参数解释**：鉴权结果。
    /// </summary>

    std::vector<ValidateAuthResults>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<ValidateAuthResults>& value);


protected:
    std::vector<ValidateAuthResults> results_;
    bool resultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ValidateAuthorizationResponse_H_
