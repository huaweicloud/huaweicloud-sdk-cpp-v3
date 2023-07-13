
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowQuotaResponse_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowQuotaResponse_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/QuotaParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ShowQuotaResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowQuotaResponse();
    virtual ~ShowQuotaResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowQuotaResponse members

    /// <summary>
    /// 
    /// </summary>

    QuotaParams getQuotas() const;
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const QuotaParams& value);


protected:
    QuotaParams quotas_;
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

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowQuotaResponse_H_
