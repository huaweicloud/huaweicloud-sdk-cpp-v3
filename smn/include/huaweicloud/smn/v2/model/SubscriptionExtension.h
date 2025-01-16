
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_SubscriptionExtension_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_SubscriptionExtension_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

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
    /// 这是应用ID字段。当protocol值为welink时，该字段为必填字段，从welink方获取。
    /// </summary>

    std::string getClientId() const;
    bool clientIdIsSet() const;
    void unsetclientId();
    void setClientId(const std::string& value);

    /// <summary>
    /// 该字段为应用secret字段。当protocol值为welink时，该字段为必填字段，从welink方获取。
    /// </summary>

    std::string getClientSecret() const;
    bool clientSecretIsSet() const;
    void unsetclientSecret();
    void setClientSecret(const std::string& value);

    /// <summary>
    /// 该字段为关键字字段。当protocol值为feishu时，这里的keyword字段和sign_secret字段二者必选其一。当用户在飞书或钉钉自定义机器人端添加关键字校验的安全策略时，这里的关键字必须是飞书或钉钉自定义机器人中所填写的关键字之一。
    /// </summary>

    std::string getKeyword() const;
    bool keywordIsSet() const;
    void unsetkeyword();
    void setKeyword(const std::string& value);

    /// <summary>
    /// 这是加签密钥字段。当protocol协议为feishu时，这个字段和keyword字段二者必选且只能选其一。密钥配置必须与客户在飞书或钉钉自定义机器人的密钥配置完全一致。例如，如果在飞书端配置了密钥并且没有配置关键字，则在此处填入从飞书获取的密钥字段，如果在飞书端没有配置密钥并且配置了关键字，则不填写该字段。
    /// </summary>

    std::string getSignSecret() const;
    bool signSecretIsSet() const;
    void unsetsignSecret();
    void setSignSecret(const std::string& value);

    /// <summary>
    /// 该字段为http header字段，用户可以在字段限制范围内自定义http header，header字段内容以KV对形式存在。当使用主题发送时，已确认的订阅发送消息会携带用户自定义的http header。 header应满足如下要求： key值限定为：包含英文字母([A-Za-z])、数字([0-9])、中划线(-)hyphens，中划线不得作为结尾，不得连续出现。 K/V不得超过10个 key需要以\&quot;x-\&quot;开头，不能以\&quot;x-smn\&quot;开头，正确示例：x-abc-cba, x-abc 所有K/V长度总和不得超过1024个字符 key不区分大小写 key值不可重复 value值限定为ASCII码，不支持中文或其他Unicode，支持空格
    /// </summary>

    std::map<std::string, std::string>& getHeader();
    bool headerIsSet() const;
    void unsetheader();
    void setHeader(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 个人钉钉appKey字段，字符长度限制64个，仅支持字母、数字、中划线(-)、下划线(_)。当订阅协议为dingTalkBot时，该字段必选。
    /// </summary>

    std::string getAppKey() const;
    bool appKeyIsSet() const;
    void unsetappKey();
    void setAppKey(const std::string& value);

    /// <summary>
    /// 个人钉钉appSecret字段，字符长度限制128个，仅支持字母、数字、中划线(-)、下划线(_)。当订阅协议为dingTalkBot时，该字段必选。
    /// </summary>

    std::string getAppSecret() const;
    bool appSecretIsSet() const;
    void unsetappSecret();
    void setAppSecret(const std::string& value);

    /// <summary>
    /// 个人钉钉robotCode字段，名称：机器人编码，字符长度限制64个，仅支持字母、数字、中划线(-)、下划线(_)，一般与appKey一致。当订阅协议为dingTalkBot时，该字段必选。
    /// </summary>

    std::string getRobotCode() const;
    bool robotCodeIsSet() const;
    void unsetrobotCode();
    void setRobotCode(const std::string& value);


protected:
    std::string clientId_;
    bool clientIdIsSet_;
    std::string clientSecret_;
    bool clientSecretIsSet_;
    std::string keyword_;
    bool keywordIsSet_;
    std::string signSecret_;
    bool signSecretIsSet_;
    std::map<std::string, std::string> header_;
    bool headerIsSet_;
    std::string appKey_;
    bool appKeyIsSet_;
    std::string appSecret_;
    bool appSecretIsSet_;
    std::string robotCode_;
    bool robotCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_SubscriptionExtension_H_
