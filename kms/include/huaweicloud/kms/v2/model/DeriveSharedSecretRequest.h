
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_DeriveSharedSecretRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_DeriveSharedSecretRequest_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/DeriveSharedSecretRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  DeriveSharedSecretRequest
    : public ModelBase
{
public:
    DeriveSharedSecretRequest();
    virtual ~DeriveSharedSecretRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeriveSharedSecretRequest members

    /// <summary>
    /// 
    /// </summary>

    DeriveSharedSecretRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeriveSharedSecretRequestBody& value);


protected:
    DeriveSharedSecretRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeriveSharedSecretRequest& dereference_from_shared_ptr(std::shared_ptr<DeriveSharedSecretRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_DeriveSharedSecretRequest_H_
