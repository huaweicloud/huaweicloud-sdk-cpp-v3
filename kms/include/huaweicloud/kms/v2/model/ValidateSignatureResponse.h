
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ValidateSignatureResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ValidateSignatureResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ValidateSignatureResponse
    : public ModelBase, public HttpResponse
{
public:
    ValidateSignatureResponse();
    virtual ~ValidateSignatureResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ValidateSignatureResponse members

    /// <summary>
    /// 密钥ID。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 签名验证合法性，“true”表示验证签名合法，“false”表示验证签名非法。
    /// </summary>

    std::string getSignatureValid() const;
    bool signatureValidIsSet() const;
    void unsetsignatureValid();
    void setSignatureValid(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string signatureValid_;
    bool signatureValidIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ValidateSignatureResponse_H_
