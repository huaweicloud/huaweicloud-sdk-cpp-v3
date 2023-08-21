
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKeyStoreResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKeyStoreResponse_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/KeystoreInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  CreateKeyStoreResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateKeyStoreResponse();
    virtual ~CreateKeyStoreResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateKeyStoreResponse members

    /// <summary>
    /// 
    /// </summary>

    KeystoreInfo getKeystore() const;
    bool keystoreIsSet() const;
    void unsetkeystore();
    void setKeystore(const KeystoreInfo& value);


protected:
    KeystoreInfo keystore_;
    bool keystoreIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKeyStoreResponse_H_
