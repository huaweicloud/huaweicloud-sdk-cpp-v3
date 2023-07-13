
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_HttpInfoResponseBody_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_HttpInfoResponseBody_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cdn/v1/model/ForceRedirect.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  HttpInfoResponseBody
    : public ModelBase
{
public:
    HttpInfoResponseBody();
    virtual ~HttpInfoResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// HttpInfoResponseBody members

    /// <summary>
    /// HTTPS证书是否启用。0：不启用，此时无需填写证书及私钥参数；1：启用HTTPS加速并协议跟随回源；2：启用HTTPS加速并HTTP回源；3：启用HTTPS加速并HTTPS回源，开启时需要传递证书及私钥
    /// </summary>

    int32_t getHttpsStatus() const;
    bool httpsStatusIsSet() const;
    void unsethttpsStatus();
    void setHttpsStatus(int32_t value);

    /// <summary>
    /// 证书名称。（长度限制为3-32字符）。
    /// </summary>

    std::string getCertName() const;
    bool certNameIsSet() const;
    void unsetcertName();
    void setCertName(const std::string& value);

    /// <summary>
    /// 证书内容。
    /// </summary>

    std::string getCertificate() const;
    bool certificateIsSet() const;
    void unsetcertificate();
    void setCertificate(const std::string& value);

    /// <summary>
    /// 功能说明： HTTPS协议使用的私钥，不启用证书则无需输入。（为了客户信息安全，接口返回私钥为空）
    /// </summary>

    std::string getPrivateKey() const;
    bool privateKeyIsSet() const;
    void unsetprivateKey();
    void setPrivateKey(const std::string& value);

    /// <summary>
    /// 证书类型。1：代表华为云托管证书；0：表示自有证书。
    /// </summary>

    int32_t getCertificateType() const;
    bool certificateTypeIsSet() const;
    void unsetcertificateType();
    void setCertificateType(int32_t value);

    /// <summary>
    /// 客户端请求是否强制重定向。1是，0否。（如果为2，表示强制跳转HTTP）
    /// </summary>

    int32_t getForceRedirectHttps() const;
    bool forceRedirectHttpsIsSet() const;
    void unsetforceRedirectHttps();
    void setForceRedirectHttps(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ForceRedirect getForceRedirectConfig() const;
    bool forceRedirectConfigIsSet() const;
    void unsetforceRedirectConfig();
    void setForceRedirectConfig(const ForceRedirect& value);

    /// <summary>
    /// 是否使用HTTP2.0。（1是，0否。）
    /// </summary>

    int32_t getHttp2() const;
    bool http2IsSet() const;
    void unsethttp2();
    void setHttp2(int32_t value);

    /// <summary>
    /// 证书过期时间
    /// </summary>

    int64_t getExpirationTime() const;
    bool expirationTimeIsSet() const;
    void unsetexpirationTime();
    void setExpirationTime(int64_t value);


protected:
    int32_t httpsStatus_;
    bool httpsStatusIsSet_;
    std::string certName_;
    bool certNameIsSet_;
    std::string certificate_;
    bool certificateIsSet_;
    std::string privateKey_;
    bool privateKeyIsSet_;
    int32_t certificateType_;
    bool certificateTypeIsSet_;
    int32_t forceRedirectHttps_;
    bool forceRedirectHttpsIsSet_;
    ForceRedirect forceRedirectConfig_;
    bool forceRedirectConfigIsSet_;
    int32_t http2_;
    bool http2IsSet_;
    int64_t expirationTime_;
    bool expirationTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_HttpInfoResponseBody_H_
