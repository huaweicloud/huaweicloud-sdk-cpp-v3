
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_HttpForwarding_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_HttpForwarding_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// httpserver配置信息
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  HttpForwarding
    : public ModelBase
{
public:
    HttpForwarding();
    virtual ~HttpForwarding();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpForwarding members

    /// <summary>
    /// **参数说明**：用于接收满足规则条件数据的http服务器地址。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// **参数说明**：证书id，请参见[[加载推送证书第3步](https://support.huaweicloud.com/usermanual-iothub/iot_01_0001.html#section3)](tag:hws)[[加载推送证书第3步](https://support.huaweicloud.com/intl/zh-cn/usermanual-iothub/iot_01_0001.html#section3)](tag:hws_hk)获取证书ID
    /// </summary>

    std::string getCertId() const;
    bool certIdIsSet() const;
    void unsetcertId();
    void setCertId(const std::string& value);

    /// <summary>
    /// **参数说明**：当sni_enable为true时，此字段需要填写，内容为将要请求的服务端证书的域名,举例:domain:8443;当sni_enbale为false时，此字段默认不填写。
    /// </summary>

    std::string getCnName() const;
    bool cnNameIsSet() const;
    void unsetcnName();
    void setCnName(const std::string& value);

    /// <summary>
    /// **参数说明**：需要https服务端和客户端都支持此功能，默认为false，设成true表明Https的客户端在发起请求时，需要携带cn_name；https服务端根据cn_name返回对应的证书；设为false可关闭此功能。
    /// </summary>

    bool isSniEnable() const;
    bool sniEnableIsSet() const;
    void unsetsniEnable();
    void setSniEnable(bool value);

    /// <summary>
    /// **参数说明**：是否启用签名。填写token时， 该参数必须为true， token才可以生效，否则token不生效。推荐设置成true，使用token签名验证消息是否来自平台。
    /// </summary>

    bool isSignatureEnable() const;
    bool signatureEnableIsSet() const;
    void unsetsignatureEnable();
    void setSignatureEnable(bool value);

    /// <summary>
    /// **参数说明**：用作生成签名的Token，客户端可以使用该token按照规则生成签名并与推送消息中携带的签名做对比， 从而验证安全性。**取值范围**: 长度不超过32， 不小于3， 只允许字母、数字的组合。请参见[[HTTP/HTTPS推送基于Token认证物联网平台](https://support.huaweicloud.com/usermanual-iothub/iot_01_0001.html#section6)](tag:hws)[[HTTP/HTTPS推送基于Token认证物联网平台](https://support.huaweicloud.com/intl/zh-cn/usermanual-iothub/iot_01_0001.html#section6)](tag:hws_hk)
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);


protected:
    std::string url_;
    bool urlIsSet_;
    std::string certId_;
    bool certIdIsSet_;
    std::string cnName_;
    bool cnNameIsSet_;
    bool sniEnable_;
    bool sniEnableIsSet_;
    bool signatureEnable_;
    bool signatureEnableIsSet_;
    std::string token_;
    bool tokenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_HttpForwarding_H_
