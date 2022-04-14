
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretTagRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretTagRequest_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/CreateSecretTagRequestBody.h>
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
class HUAWEICLOUD_CSMS_V1_EXPORT  CreateSecretTagRequest
    : public ModelBase
{
public:
    CreateSecretTagRequest();
    virtual ~CreateSecretTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSecretTagRequest members

    /// <summary>
    /// 凭据ID
    /// </summary>

    std::string getSecretId() const;
    bool secretIdIsSet() const;
    void unsetsecretId();
    void setSecretId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateSecretTagRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateSecretTagRequestBody& value);


protected:
    std::string secretId_;
    bool secretIdIsSet_;
    CreateSecretTagRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateSecretTagRequest& dereference_from_shared_ptr(std::shared_ptr<CreateSecretTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretTagRequest_H_
