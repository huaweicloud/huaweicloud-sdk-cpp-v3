
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateParametersForImportResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateParametersForImportResponse_H_

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
class HUAWEICLOUD_KMS_V2_EXPORT  CreateParametersForImportResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateParametersForImportResponse();
    virtual ~CreateParametersForImportResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateParametersForImportResponse members

    /// <summary>
    /// 密钥ID。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 密钥导入令牌。
    /// </summary>

    std::string getImportToken() const;
    bool importTokenIsSet() const;
    void unsetimportToken();
    void setImportToken(const std::string& value);

    /// <summary>
    /// 导入参数到期时间，时间戳，即从1970年1月1日至该时间的总秒数。
    /// </summary>

    int64_t getExpirationTime() const;
    bool expirationTimeIsSet() const;
    void unsetexpirationTime();
    void setExpirationTime(int64_t value);

    /// <summary>
    /// 加密密钥材料的公钥，base64格式。
    /// </summary>

    std::string getPublicKey() const;
    bool publicKeyIsSet() const;
    void unsetpublicKey();
    void setPublicKey(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string importToken_;
    bool importTokenIsSet_;
    int64_t expirationTime_;
    bool expirationTimeIsSet_;
    std::string publicKey_;
    bool publicKeyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateParametersForImportResponse_H_
