
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowRedistributionParametersResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowRedistributionParametersResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/RedistributionParameterResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowRedistributionParametersResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRedistributionParametersResponse();
    virtual ~ShowRedistributionParametersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRedistributionParametersResponse members

    /// <summary>
    /// **参数解释**: 参数列表信息。
    /// </summary>

    std::vector<RedistributionParameterResult>& getExpansionParameters();
    bool expansionParametersIsSet() const;
    void unsetexpansionParameters();
    void setExpansionParameters(const std::vector<RedistributionParameterResult>& value);


protected:
    std::vector<RedistributionParameterResult> expansionParameters_;
    bool expansionParametersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowRedistributionParametersResponse_H_
