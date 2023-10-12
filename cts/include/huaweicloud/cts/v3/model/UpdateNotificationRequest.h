
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_UpdateNotificationRequest_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_UpdateNotificationRequest_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/UpdateNotificationRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  UpdateNotificationRequest
    : public ModelBase
{
public:
    UpdateNotificationRequest();
    virtual ~UpdateNotificationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateNotificationRequest members

    /// <summary>
    /// 
    /// </summary>

    UpdateNotificationRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateNotificationRequestBody& value);


protected:
    UpdateNotificationRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateNotificationRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateNotificationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_UpdateNotificationRequest_H_
