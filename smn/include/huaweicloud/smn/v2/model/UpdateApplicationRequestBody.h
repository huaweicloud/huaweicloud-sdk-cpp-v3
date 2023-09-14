
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateApplicationRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateApplicationRequestBody_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  UpdateApplicationRequestBody
    : public ModelBase
{
public:
    UpdateApplicationRequestBody();
    virtual ~UpdateApplicationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateApplicationRequestBody members

    /// <summary>
    /// 对于HMS平台是APP ID，只能包含英文字母和数字，最大20个字符。  对于苹果APNS、APNS_SandBox平台是推送证书，大小不超过8K，且是Base64编码。
    /// </summary>

    std::string getPlatformPrincipal() const;
    bool platformPrincipalIsSet() const;
    void unsetplatformPrincipal();
    void setPlatformPrincipal(const std::string& value);

    /// <summary>
    /// 对于HMS平台是APP SECRET， 只能包含英文字母和数字，32到64个字符。  对于苹果APNS、APNS_SandBox平台是推送证书的私钥（private key）， 大小不超过8K，且是Base64编码。
    /// </summary>

    std::string getPlatformCredential() const;
    bool platformCredentialIsSet() const;
    void unsetplatformCredential();
    void setPlatformCredential(const std::string& value);


protected:
    std::string platformPrincipal_;
    bool platformPrincipalIsSet_;
    std::string platformCredential_;
    bool platformCredentialIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateApplicationRequestBody_H_
