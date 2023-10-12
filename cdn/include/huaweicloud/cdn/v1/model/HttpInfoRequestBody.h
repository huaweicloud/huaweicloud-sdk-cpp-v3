
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_HttpInfoRequestBody_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_HttpInfoRequestBody_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_CDN_V1_EXPORT  HttpInfoRequestBody
    : public ModelBase
{
public:
    HttpInfoRequestBody();
    virtual ~HttpInfoRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpInfoRequestBody members

    /// <summary>
    /// 证书名字。（长度限制为3-64字符）。
    /// </summary>

    std::string getCertName() const;
    bool certNameIsSet() const;
    void unsetcertName();
    void setCertName(const std::string& value);

    /// <summary>
    /// HTTPS证书是否启用。0：不启用，此时无需填写证书及私钥参数；1：启用HTTPS加速并协议跟随回源；2：启用HTTPS加速并HTTP回源；3：启用HTTPS加速并HTTPS回源，首次配置证书需要传递证书及私钥，如已有证书可不用传证书及私钥。
    /// </summary>

    int32_t getHttpsStatus() const;
    bool httpsStatusIsSet() const;
    void unsethttpsStatus();
    void setHttpsStatus(int32_t value);

    /// <summary>
    /// HTTPS协议使用的SSL证书内容，仅支持PEM编码格式。不启用证书则无需输入。初次配置证书时必传。
    /// </summary>

    std::string getCertificate() const;
    bool certificateIsSet() const;
    void unsetcertificate();
    void setCertificate(const std::string& value);

    /// <summary>
    /// HTTPS协议使用的SSL证书私钥内容，仅支持PEM编码格式。不启用证书则无需输入。初次配置证书时必传。
    /// </summary>

    std::string getPrivateKey() const;
    bool privateKeyIsSet() const;
    void unsetprivateKey();
    void setPrivateKey(const std::string& value);

    /// <summary>
    /// 是否使用HTTP2.0。（1：是，0：否。）
    /// </summary>

    int32_t getHttp2() const;
    bool http2IsSet() const;
    void unsethttp2();
    void setHttp2(int32_t value);

    /// <summary>
    /// 证书类型。1：代表华为云托管证书；0：表示自有证书。 默认值0。
    /// </summary>

    int32_t getCertificateType() const;
    bool certificateTypeIsSet() const;
    void unsetcertificateType();
    void setCertificateType(int32_t value);

    /// <summary>
    /// 强制跳转HTTPS（0：不强制；1：强制） 为空值时默认设置为关闭。（此参数即将下线,建议使用force_redirect_config修改配置）
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


protected:
    std::string certName_;
    bool certNameIsSet_;
    int32_t httpsStatus_;
    bool httpsStatusIsSet_;
    std::string certificate_;
    bool certificateIsSet_;
    std::string privateKey_;
    bool privateKeyIsSet_;
    int32_t http2_;
    bool http2IsSet_;
    int32_t certificateType_;
    bool certificateTypeIsSet_;
    int32_t forceRedirectHttps_;
    bool forceRedirectHttpsIsSet_;
    ForceRedirect forceRedirectConfig_;
    bool forceRedirectConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_HttpInfoRequestBody_H_
