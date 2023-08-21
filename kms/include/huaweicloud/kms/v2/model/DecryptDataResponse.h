
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDataResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDataResponse_H_

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
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  DecryptDataResponse
    : public ModelBase, public HttpResponse
{
public:
    DecryptDataResponse();
    virtual ~DecryptDataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DecryptDataResponse members

    /// <summary>
    /// 密钥ID。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 明文。
    /// </summary>

    std::string getPlainText() const;
    bool plainTextIsSet() const;
    void unsetplainText();
    void setPlainText(const std::string& value);

    /// <summary>
    /// 明文的Base64值，在非对称加密场景下，若加密的明文中含有不可见字符，则解密结果以该值为准。
    /// </summary>

    std::string getPlainTextBase64() const;
    bool plainTextBase64IsSet() const;
    void unsetplainTextBase64();
    void setPlainTextBase64(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string plainText_;
    bool plainTextIsSet_;
    std::string plainTextBase64_;
    bool plainTextBase64IsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDataResponse_H_
