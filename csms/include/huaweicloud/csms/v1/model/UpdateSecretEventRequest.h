
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretEventRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretEventRequest_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/csms/v1/model/UpdateSecretEventRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  UpdateSecretEventRequest
    : public ModelBase
{
public:
    UpdateSecretEventRequest();
    virtual ~UpdateSecretEventRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSecretEventRequest members

    /// <summary>
    /// 事件通知名称。
    /// </summary>

    std::string getEventName() const;
    bool eventNameIsSet() const;
    void unseteventName();
    void setEventName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateSecretEventRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateSecretEventRequestBody& value);


protected:
    std::string eventName_;
    bool eventNameIsSet_;
    UpdateSecretEventRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateSecretEventRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateSecretEventRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretEventRequest_H_
