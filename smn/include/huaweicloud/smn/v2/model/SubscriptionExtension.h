
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_SubscriptionExtension_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_SubscriptionExtension_H_

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
class HUAWEICLOUD_SMN_V2_EXPORT  SubscriptionExtension
    : public ModelBase
{
public:
    SubscriptionExtension();
    virtual ~SubscriptionExtension();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SubscriptionExtension members

    /// <summary>
    /// 该字段为welink订阅下的租户ID字段，由租户从welink方获取。当protocol值为welink时，该字段为必填字段。
    /// </summary>

    std::string getClientId() const;
    bool clientIdIsSet() const;
    void unsetclientId();
    void setClientId(const std::string& value);

    /// <summary>
    /// 该字段为welink订阅下的租户获取的client secret字段，由租户从welink方获取。当protocol值为welink时，该字段为必填字段。
    /// </summary>

    std::string getClientSecret() const;
    bool clientSecretIsSet() const;
    void unsetclientSecret();
    void setClientSecret(const std::string& value);

    /// <summary>
    /// 该字段为关键字字段。当protocol协议为feishu时，这里的keyword字段和sign_secret字段二者必选其一。当用户在飞书或钉钉机器人端添加关键字校验的安全策略时，这里的关键字必须是飞书或钉钉端所填写的关键字之一。
    /// </summary>

    std::string getKeyword() const;
    bool keywordIsSet() const;
    void unsetkeyword();
    void setKeyword(const std::string& value);

    /// <summary>
    /// 这是加签密钥字段。当protocol协议为feishu或dingding时，这个字段和keyword字段二者必选且只能选其一，密钥配置必须与客户在飞书或钉钉客户端的密钥配置完全一致。例如，如果在飞书端配置了密钥并且没有配置关键字，则在此处填入从飞书获取的密钥字段，如果在飞书端没有配置密钥并且配置了关键字，则不填写该字段。
    /// </summary>

    std::string getSignSecret() const;
    bool signSecretIsSet() const;
    void unsetsignSecret();
    void setSignSecret(const std::string& value);


protected:
    std::string clientId_;
    bool clientIdIsSet_;
    std::string clientSecret_;
    bool clientSecretIsSet_;
    std::string keyword_;
    bool keywordIsSet_;
    std::string signSecret_;
    bool signSecretIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_SubscriptionExtension_H_
