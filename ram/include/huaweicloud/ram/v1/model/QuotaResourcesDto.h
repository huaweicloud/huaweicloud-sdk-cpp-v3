
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_QuotaResourcesDto_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_QuotaResourcesDto_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/Quotas.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配额信息列表。
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  QuotaResourcesDto
    : public ModelBase
{
public:
    QuotaResourcesDto();
    virtual ~QuotaResourcesDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuotaResourcesDto members

    /// <summary>
    /// 配额信息。
    /// </summary>

    std::vector<Quotas>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<Quotas>& value);


protected:
    std::vector<Quotas> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_QuotaResourcesDto_H_
