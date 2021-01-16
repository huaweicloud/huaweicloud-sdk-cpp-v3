
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServersRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServersRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/CreateServersRequestBody.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  CreateServersRequest
    : public ModelBase
{
public:
    CreateServersRequest();
    virtual ~CreateServersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateServersRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateServersRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateServersRequestBody& value);


protected:
    CreateServersRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateServersRequest& dereference_from_shared_ptr(std::shared_ptr<CreateServersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServersRequest_H_
