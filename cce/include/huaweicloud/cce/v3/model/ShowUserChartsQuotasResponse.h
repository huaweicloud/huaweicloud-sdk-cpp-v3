
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowUserChartsQuotasResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowUserChartsQuotasResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/QuotaResp_quotas.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  ShowUserChartsQuotasResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowUserChartsQuotasResponse();
    virtual ~ShowUserChartsQuotasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUserChartsQuotasResponse members

    /// <summary>
    /// 
    /// </summary>

    QuotaResp_quotas getQuotas() const;
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const QuotaResp_quotas& value);


protected:
    QuotaResp_quotas quotas_;
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowUserChartsQuotasResponse_H_
