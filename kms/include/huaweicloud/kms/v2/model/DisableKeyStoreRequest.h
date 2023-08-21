
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_DisableKeyStoreRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_DisableKeyStoreRequest_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_KMS_V2_EXPORT  DisableKeyStoreRequest
    : public ModelBase
{
public:
    DisableKeyStoreRequest();
    virtual ~DisableKeyStoreRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DisableKeyStoreRequest members

    /// <summary>
    /// 密钥库ID
    /// </summary>

    std::string getKeystoreId() const;
    bool keystoreIdIsSet() const;
    void unsetkeystoreId();
    void setKeystoreId(const std::string& value);


protected:
    std::string keystoreId_;
    bool keystoreIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DisableKeyStoreRequest& dereference_from_shared_ptr(std::shared_ptr<DisableKeyStoreRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_DisableKeyStoreRequest_H_
