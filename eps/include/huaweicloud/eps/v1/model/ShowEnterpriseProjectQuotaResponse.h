
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowEnterpriseProjectQuotaResponse_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowEnterpriseProjectQuotaResponse_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eps/v1/model/QuotasDetail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  ShowEnterpriseProjectQuotaResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowEnterpriseProjectQuotaResponse();
    virtual ~ShowEnterpriseProjectQuotaResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowEnterpriseProjectQuotaResponse members

    /// <summary>
    /// 
    /// </summary>

    QuotasDetail getQuotas() const;
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const QuotasDetail& value);


protected:
    QuotasDetail quotas_;
    bool quotasIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowEnterpriseProjectQuotaResponse_H_
