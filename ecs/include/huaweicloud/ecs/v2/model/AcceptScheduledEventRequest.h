
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_AcceptScheduledEventRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_AcceptScheduledEventRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ScheduledEventAcceptBody.h>
#include <string>

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
class HUAWEICLOUD_ECS_V2_EXPORT  AcceptScheduledEventRequest
    : public ModelBase
{
public:
    AcceptScheduledEventRequest();
    virtual ~AcceptScheduledEventRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AcceptScheduledEventRequest members

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

    ScheduledEventAcceptBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ScheduledEventAcceptBody& value);


protected:
    std::string id_;
    bool idIsSet_;
    ScheduledEventAcceptBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AcceptScheduledEventRequest& dereference_from_shared_ptr(std::shared_ptr<AcceptScheduledEventRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_AcceptScheduledEventRequest_H_
