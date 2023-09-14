
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretEventRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretEventRequest_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/CreateSecretEventRequestBody.h>

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
class HUAWEICLOUD_CSMS_V1_EXPORT  CreateSecretEventRequest
    : public ModelBase
{
public:
    CreateSecretEventRequest();
    virtual ~CreateSecretEventRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSecretEventRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateSecretEventRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateSecretEventRequestBody& value);


protected:
    CreateSecretEventRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateSecretEventRequest& dereference_from_shared_ptr(std::shared_ptr<CreateSecretEventRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretEventRequest_H_
