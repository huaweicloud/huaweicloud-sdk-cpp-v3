
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchRebootServersRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchRebootServersRequestBody_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/BatchRebootSeversOption.h"

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
class HUAWEICLOUD_ECS_EXPORT  BatchRebootServersRequestBody
    : public ModelBase
{
public:
    BatchRebootServersRequestBody();
    virtual ~BatchRebootServersRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchRebootServersRequestBody members

    /// <summary>
    /// 
    /// </summary>

    BatchRebootSeversOption getReboot() const;
    bool rebootIsSet() const;
    void unsetreboot();
    void setReboot(const BatchRebootSeversOption& value);


protected:
    BatchRebootSeversOption reboot_;
    bool rebootIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchRebootServersRequestBody_H_
