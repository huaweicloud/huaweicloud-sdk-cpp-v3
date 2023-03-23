
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ShowTagQuotaResponse_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ShowTagQuotaResponse_H_

#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/tms/v1/model/TagQuota.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ShowTagQuotaResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTagQuotaResponse();
    virtual ~ShowTagQuotaResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowTagQuotaResponse members

    /// <summary>
    /// 配额列表
    /// </summary>

    std::vector<TagQuota>& getQuotas();
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const std::vector<TagQuota>& value);


protected:
    std::vector<TagQuota> quotas_;
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

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ShowTagQuotaResponse_H_
