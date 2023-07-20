
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyEpsQuotaRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyEpsQuotaRequestBody_H_

#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/EpsQuotasOption.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ModifyEpsQuotaRequestBody
    : public ModelBase
{
public:
    ModifyEpsQuotaRequestBody();
    virtual ~ModifyEpsQuotaRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyEpsQuotaRequestBody members

    /// <summary>
    /// 需要修改的企业配额列表。
    /// </summary>

    std::vector<EpsQuotasOption>& getEpsQuotas();
    bool epsQuotasIsSet() const;
    void unsetepsQuotas();
    void setEpsQuotas(const std::vector<EpsQuotasOption>& value);


protected:
    std::vector<EpsQuotasOption> epsQuotas_;
    bool epsQuotasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyEpsQuotaRequestBody_H_
