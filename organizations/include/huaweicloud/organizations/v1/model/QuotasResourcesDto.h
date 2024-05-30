
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_QuotasResourcesDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_QuotasResourcesDto_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/QuotaDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 组织配额的响应体。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  QuotasResourcesDto
    : public ModelBase
{
public:
    QuotasResourcesDto();
    virtual ~QuotasResourcesDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuotasResourcesDto members

    /// <summary>
    /// 配额信息。
    /// </summary>

    std::vector<QuotaDto>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<QuotaDto>& value);


protected:
    std::vector<QuotaDto> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_QuotasResourcesDto_H_
