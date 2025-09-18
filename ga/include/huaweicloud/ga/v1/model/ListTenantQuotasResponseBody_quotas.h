
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ListTenantQuotasResponseBody_quotas_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ListTenantQuotasResponseBody_quotas_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/QuotaOuterResource.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配额列表对象。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  ListTenantQuotasResponseBody_quotas
    : public ModelBase
{
public:
    ListTenantQuotasResponseBody_quotas();
    virtual ~ListTenantQuotasResponseBody_quotas();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTenantQuotasResponseBody_quotas members

    /// <summary>
    /// 配额资源列表。
    /// </summary>

    std::vector<QuotaOuterResource>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<QuotaOuterResource>& value);


protected:
    std::vector<QuotaOuterResource> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ListTenantQuotasResponseBody_quotas_H_
