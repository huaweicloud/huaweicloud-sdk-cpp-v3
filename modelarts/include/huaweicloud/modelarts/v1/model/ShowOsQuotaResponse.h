
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowOsQuotaResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowOsQuotaResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Quota.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowOsQuotaResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowOsQuotaResponse();
    virtual ~ShowOsQuotaResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowOsQuotaResponse members

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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowOsQuotaResponse_H_
