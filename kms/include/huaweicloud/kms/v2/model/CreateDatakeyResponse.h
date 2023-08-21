
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateDatakeyResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateDatakeyResponse_H_

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
class HUAWEICLOUD_KMS_V2_EXPORT  CreateDatakeyResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateDatakeyResponse();
    virtual ~CreateDatakeyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateDatakeyResponse members

    /// <summary>
    /// 密钥ID。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// DEK明文16进制，两位表示1byte。
    /// </summary>

    std::string getPlainText() const;
    bool plainTextIsSet() const;
    void unsetplainText();
    void setPlainText(const std::string& value);

    /// <summary>
    /// DEK密文16进制，两位表示1byte。
    /// </summary>

    std::string getCipherText() const;
    bool cipherTextIsSet() const;
    void unsetcipherText();
    void setCipherText(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string plainText_;
    bool plainTextIsSet_;
    std::string cipherText_;
    bool cipherTextIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateDatakeyResponse_H_
