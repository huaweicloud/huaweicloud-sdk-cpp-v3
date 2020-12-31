
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServerGroupRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServerGroupRequest_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/CreateServerGroupRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  CreateServerGroupRequest
    : public ModelBase
{
public:
    CreateServerGroupRequest();
    virtual ~CreateServerGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateServerGroupRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateServerGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateServerGroupRequestBody& value);


protected:
    CreateServerGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateServerGroupRequest& dereference_from_shared_ptr(std::shared_ptr<CreateServerGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServerGroupRequest_H_
