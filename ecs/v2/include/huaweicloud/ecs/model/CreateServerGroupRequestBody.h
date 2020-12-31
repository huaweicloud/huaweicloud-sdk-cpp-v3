
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServerGroupRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServerGroupRequestBody_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/CreateServerGroupOption.h"

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
class HUAWEICLOUD_ECS_EXPORT  CreateServerGroupRequestBody
    : public ModelBase
{
public:
    CreateServerGroupRequestBody();
    virtual ~CreateServerGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateServerGroupRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateServerGroupOption getServerGroup() const;
    bool serverGroupIsSet() const;
    void unsetserverGroup();
    void setServerGroup(const CreateServerGroupOption& value);


protected:
    CreateServerGroupOption serverGroup_;
    bool serverGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServerGroupRequestBody_H_
