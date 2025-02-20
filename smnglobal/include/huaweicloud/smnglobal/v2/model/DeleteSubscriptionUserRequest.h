
#ifndef HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_DeleteSubscriptionUserRequest_H_
#define HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_DeleteSubscriptionUserRequest_H_


#include <huaweicloud/smnglobal/v2/SmnglobalExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SMNGLOBAL_V2_EXPORT  DeleteSubscriptionUserRequest
    : public ModelBase
{
public:
    DeleteSubscriptionUserRequest();
    virtual ~DeleteSubscriptionUserRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteSubscriptionUserRequest members

    /// <summary>
    /// 订阅用户ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteSubscriptionUserRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteSubscriptionUserRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_DeleteSubscriptionUserRequest_H_
