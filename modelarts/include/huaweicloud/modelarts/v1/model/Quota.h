
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Quota_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Quota_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ResourceQuota.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// ModelArts资源管理服务中资源的配额信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Quota
    : public ModelBase
{
public:
    Quota();
    virtual ~Quota();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Quota members

    /// <summary>
    /// **参数解释**： 资源的配额信息。
    /// </summary>

    std::vector<ResourceQuota>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<ResourceQuota>& value);


protected:
    std::vector<ResourceQuota> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Quota_H_
