
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_KeyAliasInfo_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_KeyAliasInfo_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 密钥别名信息。
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  KeyAliasInfo
    : public ModelBase
{
public:
    KeyAliasInfo();
    virtual ~KeyAliasInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KeyAliasInfo members

    /// <summary>
    /// 密钥ID。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 密钥别名。
    /// </summary>

    std::string getKeyAlias() const;
    bool keyAliasIsSet() const;
    void unsetkeyAlias();
    void setKeyAlias(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string keyAlias_;
    bool keyAliasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_KeyAliasInfo_H_
