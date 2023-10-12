
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateDomainMultiCertificatesRequestBodyContent_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateDomainMultiCertificatesRequestBodyContent_H_


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
class HUAWEICLOUD_CDN_V1_EXPORT  UpdateDomainMultiCertificatesRequestBodyContent
    : public ModelBase
{
public:
    UpdateDomainMultiCertificatesRequestBodyContent();
    virtual ~UpdateDomainMultiCertificatesRequestBodyContent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDomainMultiCertificatesRequestBodyContent members

    /// <summary>
    /// 域名列表,逗号分割，上限50个域名
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// https开关(0：\&quot;关闭\&quot;；1：\&quot;设置证书\&quot;)。
    /// </summary>

    int32_t getHttpsSwitch() const;
    bool httpsSwitchIsSet() const;
    void unsethttpsSwitch();
    void setHttpsSwitch(int32_t value);

    /// <summary>
    /// 回源方式:1：\&quot;回源跟随\&quot;；2：\&quot;HTTP\&quot;(默认)，3：https（自建）。
    /// </summary>

    int32_t getAccessOriginWay() const;
    bool accessOriginWayIsSet() const;
    void unsetaccessOriginWay();
    void setAccessOriginWay(int32_t value);

    /// <summary>
    /// 强制跳转HTTPS（0：不强制；1：强制） 为空值时默认设置为关闭。（此参数即将下线，建议使用force_redirect_config修改配置）.
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
    /// http2.0（0：关闭；1：开启） 为空值时默认设置为关闭
    /// </summary>

    int32_t getHttp2() const;
    bool http2IsSet() const;
    void unsethttp2();
    void setHttp2(int32_t value);

    /// <summary>
    /// 证书名称（设置证书必填）（长度限制为3-64字符）。
    /// </summary>

    std::string getCertName() const;
    bool certNameIsSet() const;
    void unsetcertName();
    void setCertName(const std::string& value);

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
    /// 证书类型（0为自有证书 ；1为托管证书，此时不必不传入证书内容和私钥，自动根据证书名称匹配；不传默认为自有证书）
    /// </summary>

    int32_t getCertificateType() const;
    bool certificateTypeIsSet() const;
    void unsetcertificateType();
    void setCertificateType(int32_t value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    int32_t httpsSwitch_;
    bool httpsSwitchIsSet_;
    int32_t accessOriginWay_;
    bool accessOriginWayIsSet_;
    int32_t forceRedirectHttps_;
    bool forceRedirectHttpsIsSet_;
    ForceRedirect forceRedirectConfig_;
    bool forceRedirectConfigIsSet_;
    int32_t http2_;
    bool http2IsSet_;
    std::string certName_;
    bool certNameIsSet_;
    std::string certificate_;
    bool certificateIsSet_;
    std::string privateKey_;
    bool privateKeyIsSet_;
    int32_t certificateType_;
    bool certificateTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateDomainMultiCertificatesRequestBodyContent_H_
