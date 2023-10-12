
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_KafkaSecurity_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_KafkaSecurity_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Kafka安全认证相关参数
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  KafkaSecurity
    : public ModelBase
{
public:
    KafkaSecurity();
    virtual ~KafkaSecurity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KafkaSecurity members

    /// <summary>
    /// 证书名称，使用安全认证时必填。
    /// </summary>

    std::string getTrustStoreKeyName() const;
    bool trustStoreKeyNameIsSet() const;
    void unsettrustStoreKeyName();
    void setTrustStoreKeyName(const std::string& value);

    /// <summary>
    /// 安全证书base64转码后的值，使用安全认证时必填。
    /// </summary>

    std::string getTrustStoreKey() const;
    bool trustStoreKeyIsSet() const;
    void unsettrustStoreKey();
    void setTrustStoreKey(const std::string& value);

    /// <summary>
    /// 证书密码，使用安全认证时必填。
    /// </summary>

    std::string getTrustStorePassword() const;
    bool trustStorePasswordIsSet() const;
    void unsettrustStorePassword();
    void setTrustStorePassword(const std::string& value);

    /// <summary>
    /// 认证类型，PLAINTEXT为无认证，，使用安全认证时必填。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string trustStoreKeyName_;
    bool trustStoreKeyNameIsSet_;
    std::string trustStoreKey_;
    bool trustStoreKeyIsSet_;
    std::string trustStorePassword_;
    bool trustStorePasswordIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_KafkaSecurity_H_
