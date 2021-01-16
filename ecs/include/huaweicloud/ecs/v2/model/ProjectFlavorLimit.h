
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ProjectFlavorLimit_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ProjectFlavorLimit_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ProjectFlavorLimit
    : public ModelBase
{
public:
    ProjectFlavorLimit();
    virtual ~ProjectFlavorLimit();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ProjectFlavorLimit members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ProjectFlavorLimit_H_
