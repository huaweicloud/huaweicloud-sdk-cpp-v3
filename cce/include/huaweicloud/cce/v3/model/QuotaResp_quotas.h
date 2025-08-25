
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_QuotaResp_quotas_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_QuotaResp_quotas_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/QuotaResp_quotas_resources.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 模板配额
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  QuotaResp_quotas
    : public ModelBase
{
public:
    QuotaResp_quotas();
    virtual ~QuotaResp_quotas();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuotaResp_quotas members

    /// <summary>
    /// 资源
    /// </summary>

    std::vector<QuotaResp_quotas_resources>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<QuotaResp_quotas_resources>& value);


protected:
    std::vector<QuotaResp_quotas_resources> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_QuotaResp_quotas_H_
