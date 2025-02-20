
#ifndef HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_UpdateSubscriptionUserRequest_H_
#define HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_UpdateSubscriptionUserRequest_H_


#include <huaweicloud/smnglobal/v2/SmnglobalExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/smnglobal/v2/model/UpdateSubscriptionUserRequestBody.h>

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
class HUAWEICLOUD_SMNGLOBAL_V2_EXPORT  UpdateSubscriptionUserRequest
    : public ModelBase
{
public:
    UpdateSubscriptionUserRequest();
    virtual ~UpdateSubscriptionUserRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSubscriptionUserRequest members

    /// <summary>
    /// 订阅用户ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateSubscriptionUserRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateSubscriptionUserRequestBody& value);


protected:
    std::string id_;
    bool idIsSet_;
    UpdateSubscriptionUserRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateSubscriptionUserRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateSubscriptionUserRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_UpdateSubscriptionUserRequest_H_
