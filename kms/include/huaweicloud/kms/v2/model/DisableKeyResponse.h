
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_DisableKeyResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_DisableKeyResponse_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/KeyStatusInfo.h>

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
class HUAWEICLOUD_KMS_V2_EXPORT  DisableKeyResponse
    : public ModelBase, public HttpResponse
{
public:
    DisableKeyResponse();
    virtual ~DisableKeyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DisableKeyResponse members

    /// <summary>
    /// 
    /// </summary>

    KeyStatusInfo getKeyInfo() const;
    bool keyInfoIsSet() const;
    void unsetkeyInfo();
    void setKeyInfo(const KeyStatusInfo& value);


protected:
    KeyStatusInfo keyInfo_;
    bool keyInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_DisableKeyResponse_H_
