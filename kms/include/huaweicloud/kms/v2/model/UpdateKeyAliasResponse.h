
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdateKeyAliasResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdateKeyAliasResponse_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/KeyAliasInfo.h>

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
class HUAWEICLOUD_KMS_V2_EXPORT  UpdateKeyAliasResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateKeyAliasResponse();
    virtual ~UpdateKeyAliasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateKeyAliasResponse members

    /// <summary>
    /// 
    /// </summary>

    KeyAliasInfo getKeyInfo() const;
    bool keyInfoIsSet() const;
    void unsetkeyInfo();
    void setKeyInfo(const KeyAliasInfo& value);


protected:
    KeyAliasInfo keyInfo_;
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

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdateKeyAliasResponse_H_
