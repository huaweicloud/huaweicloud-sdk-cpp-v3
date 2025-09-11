
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowFlavorCapacityResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowFlavorCapacityResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/QueryFlavorCapacityAzInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ShowFlavorCapacityResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowFlavorCapacityResponse();
    virtual ~ShowFlavorCapacityResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFlavorCapacityResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<QueryFlavorCapacityAzInfo>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<QueryFlavorCapacityAzInfo>& value);


protected:
    std::vector<QueryFlavorCapacityAzInfo> resources_;
    bool resourcesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowFlavorCapacityResponse_H_
