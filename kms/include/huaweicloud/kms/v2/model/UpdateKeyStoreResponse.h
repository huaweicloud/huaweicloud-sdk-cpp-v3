
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdateKeyStoreResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdateKeyStoreResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/KeyStoreStateInfo.h>

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
class HUAWEICLOUD_KMS_V2_EXPORT  UpdateKeyStoreResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateKeyStoreResponse();
    virtual ~UpdateKeyStoreResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateKeyStoreResponse members

    /// <summary>
    /// 
    /// </summary>

    KeyStoreStateInfo getKeystore() const;
    bool keystoreIsSet() const;
    void unsetkeystore();
    void setKeystore(const KeyStoreStateInfo& value);


protected:
    KeyStoreStateInfo keystore_;
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

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdateKeyStoreResponse_H_
