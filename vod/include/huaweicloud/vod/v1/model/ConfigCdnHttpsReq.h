
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ConfigCdnHttpsReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ConfigCdnHttpsReq_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ConfigCdnHttpsReq
    : public ModelBase
{
public:
    ConfigCdnHttpsReq();
    virtual ~ConfigCdnHttpsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfigCdnHttpsReq members

    /// <summary>
    /// 来源，user表示用户自己上传，scm表示scm证书，默认user 
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// 加速域名 
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 证书名称，若来源是scm则非必填，不填默认取scm上的证书名称 
    /// </summary>

    std::string getCertName() const;
    bool certNameIsSet() const;
    void unsetcertName();
    void setCertName(const std::string& value);

    /// <summary>
    /// scm证书ID，若来源是scm则必填 
    /// </summary>

    std::string getCertId() const;
    bool certIdIsSet() const;
    void unsetcertId();
    void setCertId(const std::string& value);

    /// <summary>
    /// https配置，0为关闭https配置，1为开启https配置，默认0 
    /// </summary>

    int32_t getHttpsStatus() const;
    bool httpsStatusIsSet() const;
    void unsethttpsStatus();
    void setHttpsStatus(int32_t value);

    /// <summary>
    /// 证书内容，若来源是user则需填写，来源是scm则非必填 
    /// </summary>

    std::string getCertificate() const;
    bool certificateIsSet() const;
    void unsetcertificate();
    void setCertificate(const std::string& value);

    /// <summary>
    /// 私钥，若来源是user则需填写，来源是scm则非必填 
    /// </summary>

    std::string getPrivateKey() const;
    bool privateKeyIsSet() const;
    void unsetprivateKey();
    void setPrivateKey(const std::string& value);

    /// <summary>
    /// 客户端请求是否强制重定向，0表示不重定向，1表示重定向，默认0 
    /// </summary>

    int32_t getForceRedirectHttps() const;
    bool forceRedirectHttpsIsSet() const;
    void unsetforceRedirectHttps();
    void setForceRedirectHttps(int32_t value);

    /// <summary>
    /// 是否使用HTTP2.0，0表示不使用HTTP2.0，1表示使用，默认0 
    /// </summary>

    int32_t getHttp2() const;
    bool http2IsSet() const;
    void unsethttp2();
    void setHttp2(int32_t value);


protected:
    std::string source_;
    bool sourceIsSet_;
    std::string domain_;
    bool domainIsSet_;
    std::string certName_;
    bool certNameIsSet_;
    std::string certId_;
    bool certIdIsSet_;
    int32_t httpsStatus_;
    bool httpsStatusIsSet_;
    std::string certificate_;
    bool certificateIsSet_;
    std::string privateKey_;
    bool privateKeyIsSet_;
    int32_t forceRedirectHttps_;
    bool forceRedirectHttpsIsSet_;
    int32_t http2_;
    bool http2IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ConfigCdnHttpsReq_H_
