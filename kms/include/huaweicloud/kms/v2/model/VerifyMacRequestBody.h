
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_VerifyMacRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_VerifyMacRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  VerifyMacRequestBody
    : public ModelBase
{
public:
    VerifyMacRequestBody();
    virtual ~VerifyMacRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VerifyMacRequestBody members

    /// <summary>
    /// 密钥ID
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// Mac算法，HMAC_SM3只有中国区支持。枚举如下： - HMAC_SHA_256 - HMAC_SHA_384 - HMAC_SHA_512 - HMAC_SM3
    /// </summary>

    std::string getMacAlgorithm() const;
    bool macAlgorithmIsSet() const;
    void unsetmacAlgorithm();
    void setMacAlgorithm(const std::string& value);

    /// <summary>
    /// 待处理消息。原消息最小长度1、最大长度4096。请将原消息转为Base64格式后传入
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 待校验的消息验证码
    /// </summary>

    std::string getMac() const;
    bool macIsSet() const;
    void unsetmac();
    void setMac(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string macAlgorithm_;
    bool macAlgorithmIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string mac_;
    bool macIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_VerifyMacRequestBody_H_
