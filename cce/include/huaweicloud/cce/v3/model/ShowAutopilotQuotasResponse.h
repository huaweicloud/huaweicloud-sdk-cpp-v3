
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotQuotasResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotQuotasResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/QuotaResource.h>
#include <vector>

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
class HUAWEICLOUD_CCE_V3_EXPORT  ShowAutopilotQuotasResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutopilotQuotasResponse();
    virtual ~ShowAutopilotQuotasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutopilotQuotasResponse members

    /// <summary>
    /// 资源
    /// </summary>

    std::vector<QuotaResource>& getQuotas();
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const std::vector<QuotaResource>& value);


protected:
    std::vector<QuotaResource> quotas_;
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotQuotasResponse_H_
