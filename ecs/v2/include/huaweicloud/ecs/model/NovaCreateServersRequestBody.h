
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateServersRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateServersRequestBody_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/NovaCreateServersSchedulerHint.h"
#include "huaweicloud/ecs/model/NovaCreateServersOption.h"

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
class HUAWEICLOUD_ECS_EXPORT  NovaCreateServersRequestBody
    : public ModelBase
{
public:
    NovaCreateServersRequestBody();
    virtual ~NovaCreateServersRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaCreateServersRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NovaCreateServersOption getServer() const;
    bool serverIsSet() const;
    void unsetserver();
    void setServer(const NovaCreateServersOption& value);

    /// <summary>
    /// 
    /// </summary>

    NovaCreateServersSchedulerHint getOsschedulerHints() const;
    bool osschedulerHintsIsSet() const;
    void unsetosschedulerHints();
    void setOsschedulerHints(const NovaCreateServersSchedulerHint& value);


protected:
    NovaCreateServersOption server_;
    bool serverIsSet_;
    NovaCreateServersSchedulerHint osschedulerHints_;
    bool osschedulerHintsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateServersRequestBody_H_
