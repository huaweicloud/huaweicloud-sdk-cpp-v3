
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithCloudInitRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithCloudInitRequestBody_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/ReinstallServerWithCloudInitOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  ReinstallServerWithCloudInitRequestBody
    : public ModelBase
{
public:
    ReinstallServerWithCloudInitRequestBody();
    virtual ~ReinstallServerWithCloudInitRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ReinstallServerWithCloudInitRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ReinstallServerWithCloudInitOption getOsReinstall() const;
    bool osReinstallIsSet() const;
    void unsetosReinstall();
    void setOsReinstall(const ReinstallServerWithCloudInitOption& value);


protected:
    ReinstallServerWithCloudInitOption osReinstall_;
    bool osReinstallIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithCloudInitRequestBody_H_
