
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServerGroupResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServerGroupResponse_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/CreateServerGroupResult.h"

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
class HUAWEICLOUD_ECS_EXPORT  CreateServerGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateServerGroupResponse();
    virtual ~CreateServerGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateServerGroupResponse members

    /// <summary>
    /// 
    /// </summary>

    CreateServerGroupResult getServerGroup() const;
    bool serverGroupIsSet() const;
    void unsetserverGroup();
    void setServerGroup(const CreateServerGroupResult& value);


protected:
    CreateServerGroupResult serverGroup_;
    bool serverGroupIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServerGroupResponse_H_
