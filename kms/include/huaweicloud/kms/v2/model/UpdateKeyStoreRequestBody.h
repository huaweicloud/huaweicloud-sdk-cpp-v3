
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdateKeyStoreRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdateKeyStoreRequestBody_H_


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
/// 更新专属密钥库请求体
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  UpdateKeyStoreRequestBody
    : public ModelBase
{
public:
    UpdateKeyStoreRequestBody();
    virtual ~UpdateKeyStoreRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateKeyStoreRequestBody members

    /// <summary>
    /// 访问XKS-Proxy的凭据ID
    /// </summary>

    std::string getProxyAccessKeyId() const;
    bool proxyAccessKeyIdIsSet() const;
    void unsetproxyAccessKeyId();
    void setProxyAccessKeyId(const std::string& value);

    /// <summary>
    /// 访问XKS-Proxy的凭据Key
    /// </summary>

    std::string getProxySecretAccessKey() const;
    bool proxySecretAccessKeyIsSet() const;
    void unsetproxySecretAccessKey();
    void setProxySecretAccessKey(const std::string& value);


protected:
    std::string proxyAccessKeyId_;
    bool proxyAccessKeyIdIsSet_;
    std::string proxySecretAccessKey_;
    bool proxySecretAccessKeyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdateKeyStoreRequestBody_H_
