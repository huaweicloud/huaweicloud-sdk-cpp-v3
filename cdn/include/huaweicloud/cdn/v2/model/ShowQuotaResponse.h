
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowQuotaResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowQuotaResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cdn/v2/model/Quotas.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ShowQuotaResponse
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
    /// 配额数组。
    /// </summary>

    std::vector<Quotas>& getQuotas();
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const std::vector<Quotas>& value);


protected:
    std::vector<Quotas> quotas_;
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

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowQuotaResponse_H_
