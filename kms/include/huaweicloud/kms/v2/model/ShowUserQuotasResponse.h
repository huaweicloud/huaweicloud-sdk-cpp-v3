
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowUserQuotasResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowUserQuotasResponse_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/Quotas.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ShowUserQuotasResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowUserQuotasResponse();
    virtual ~ShowUserQuotasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowUserQuotasResponse members

    /// <summary>
    /// 
    /// </summary>

    Quotas getQuotas() const;
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const Quotas& value);


protected:
    Quotas quotas_;
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

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowUserQuotasResponse_H_
