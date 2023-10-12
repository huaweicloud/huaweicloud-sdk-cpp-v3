
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowQuotaResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowQuotaResponse_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/Quota.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  ShowQuotaResponse
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

    Quota getQuotas() const;
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const Quota& value);


protected:
    Quota quotas_;
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

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowQuotaResponse_H_
