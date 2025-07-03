
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateScheduledEventRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateScheduledEventRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/ScheduledEventUpdateBody.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateScheduledEventRequest
    : public ModelBase
{
public:
    UpdateScheduledEventRequest();
    virtual ~UpdateScheduledEventRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateScheduledEventRequest members

    /// <summary>
    /// resource id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ScheduledEventUpdateBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ScheduledEventUpdateBody& value);


protected:
    std::string id_;
    bool idIsSet_;
    ScheduledEventUpdateBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateScheduledEventRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateScheduledEventRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateScheduledEventRequest_H_
