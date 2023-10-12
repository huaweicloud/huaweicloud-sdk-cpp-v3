
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretRequest_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/CreateSecretRequestBody.h>

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
class HUAWEICLOUD_CSMS_V1_EXPORT  CreateSecretRequest
    : public ModelBase
{
public:
    CreateSecretRequest();
    virtual ~CreateSecretRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSecretRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateSecretRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateSecretRequestBody& value);


protected:
    CreateSecretRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateSecretRequest& dereference_from_shared_ptr(std::shared_ptr<CreateSecretRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretRequest_H_
