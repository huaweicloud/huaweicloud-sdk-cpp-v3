
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_GetClusterQuotaResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_GetClusterQuotaResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/GetClusterQuotaBody_quotas.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  GetClusterQuotaResponse
    : public ModelBase, public HttpResponse
{
public:
    GetClusterQuotaResponse();
    virtual ~GetClusterQuotaResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetClusterQuotaResponse members

    /// <summary>
    /// 
    /// </summary>

    GetClusterQuotaBody_quotas getQuotas() const;
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const GetClusterQuotaBody_quotas& value);


protected:
    GetClusterQuotaBody_quotas quotas_;
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_GetClusterQuotaResponse_H_
