
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretRequest_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/UpdateSecretRequestBody.h>
#include <string>

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
class HUAWEICLOUD_CSMS_V1_EXPORT  UpdateSecretRequest
    : public ModelBase
{
public:
    UpdateSecretRequest();
    virtual ~UpdateSecretRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSecretRequest members

    /// <summary>
    /// 凭据名称。
    /// </summary>

    std::string getSecretName() const;
    bool secretNameIsSet() const;
    void unsetsecretName();
    void setSecretName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateSecretRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateSecretRequestBody& value);


protected:
    std::string secretName_;
    bool secretNameIsSet_;
    UpdateSecretRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateSecretRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateSecretRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretRequest_H_
