
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListQuotas_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListQuotas_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/geip/v3/model/ResourcesInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源列表
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  ListQuotas
    : public ModelBase
{
public:
    ListQuotas();
    virtual ~ListQuotas();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListQuotas members

    /// <summary>
    /// 资源列表
    /// </summary>

    std::vector<ResourcesInfo>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<ResourcesInfo>& value);


protected:
    std::vector<ResourcesInfo> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListQuotas_H_
