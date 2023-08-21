
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_Quotas_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_Quotas_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/Resources.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配额详情。
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  Quotas
    : public ModelBase
{
public:
    Quotas();
    virtual ~Quotas();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Quotas members

    /// <summary>
    /// 资源配额列表，详情请参见Resources
    /// </summary>

    std::vector<Resources>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<Resources>& value);


protected:
    std::vector<Resources> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_Quotas_H_
