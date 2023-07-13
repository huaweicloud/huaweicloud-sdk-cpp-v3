
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_CreateNotificationRequest_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_CreateNotificationRequest_H_

#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/CreateNotificationRequestBody.h>

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
class HUAWEICLOUD_CTS_V3_EXPORT  CreateNotificationRequest
    : public ModelBase
{
public:
    CreateNotificationRequest();
    virtual ~CreateNotificationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateNotificationRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateNotificationRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateNotificationRequestBody& value);


protected:
    CreateNotificationRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateNotificationRequest& dereference_from_shared_ptr(std::shared_ptr<CreateNotificationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_CreateNotificationRequest_H_
