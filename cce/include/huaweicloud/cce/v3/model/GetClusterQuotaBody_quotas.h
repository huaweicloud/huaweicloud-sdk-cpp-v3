
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_GetClusterQuotaBody_quotas_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_GetClusterQuotaBody_quotas_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ClusterQuotaResource.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 集群配额 **约束限制**： 不涉及 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  GetClusterQuotaBody_quotas
    : public ModelBase
{
public:
    GetClusterQuotaBody_quotas();
    virtual ~GetClusterQuotaBody_quotas();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetClusterQuotaBody_quotas members

    /// <summary>
    /// **参数解释**： 集群配额 **约束限制**： 不涉及 
    /// </summary>

    std::vector<ClusterQuotaResource>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<ClusterQuotaResource>& value);


protected:
    std::vector<ClusterQuotaResource> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_GetClusterQuotaBody_quotas_H_
