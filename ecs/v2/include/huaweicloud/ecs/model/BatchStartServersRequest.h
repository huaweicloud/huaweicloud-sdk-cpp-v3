
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchStartServersRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchStartServersRequest_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/BatchStartServersRequestBody.h"

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
class HUAWEICLOUD_ECS_EXPORT  BatchStartServersRequest
    : public ModelBase
{
public:
    BatchStartServersRequest();
    virtual ~BatchStartServersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchStartServersRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchStartServersRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchStartServersRequestBody& value);


protected:
    BatchStartServersRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchStartServersRequest& dereference_from_shared_ptr(std::shared_ptr<BatchStartServersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchStartServersRequest_H_
