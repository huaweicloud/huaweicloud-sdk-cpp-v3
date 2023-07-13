
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_QuotasDetail_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_QuotasDetail_H_

#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eps/v1/model/EpQuotas.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配额信息
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  QuotasDetail
    : public ModelBase
{
public:
    QuotasDetail();
    virtual ~QuotasDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QuotasDetail members

    /// <summary>
    /// 资源配额
    /// </summary>

    std::vector<EpQuotas>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<EpQuotas>& value);


protected:
    std::vector<EpQuotas> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_QuotasDetail_H_
