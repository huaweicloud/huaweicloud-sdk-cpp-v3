
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretVersionRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretVersionRequest_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/CreateSecretVersionRequestBody.h>
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
class HUAWEICLOUD_CSMS_V1_EXPORT  CreateSecretVersionRequest
    : public ModelBase
{
public:
    CreateSecretVersionRequest();
    virtual ~CreateSecretVersionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSecretVersionRequest members

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

    CreateSecretVersionRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateSecretVersionRequestBody& value);


protected:
    std::string secretName_;
    bool secretNameIsSet_;
    CreateSecretVersionRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateSecretVersionRequest& dereference_from_shared_ptr(std::shared_ptr<CreateSecretVersionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretVersionRequest_H_
