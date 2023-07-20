
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_HttpGetBody_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_HttpGetBody_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 证书配置查询响应体。
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  HttpGetBody
    : public ModelBase
{
public:
    HttpGetBody();
    virtual ~HttpGetBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// HttpGetBody members

    /// <summary>
    /// HTTPS证书是否启用，on：开启，off：关闭。
    /// </summary>

    std::string getHttpsStatus() const;
    bool httpsStatusIsSet() const;
    void unsethttpsStatus();
    void setHttpsStatus(const std::string& value);

    /// <summary>
    /// 证书名字。
    /// </summary>

    std::string getCertificateName() const;
    bool certificateNameIsSet() const;
    void unsetcertificateName();
    void setCertificateName(const std::string& value);

    /// <summary>
    /// HTTPS协议使用的证书内容，PEM编码格式。
    /// </summary>

    std::string getCertificateValue() const;
    bool certificateValueIsSet() const;
    void unsetcertificateValue();
    void setCertificateValue(const std::string& value);

    /// <summary>
    /// 证书来源,1：华为云托管证书,0：自有证书。
    /// </summary>

    int32_t getCertificateSource() const;
    bool certificateSourceIsSet() const;
    void unsetcertificateSource();
    void setCertificateSource(int32_t value);

    /// <summary>
    /// 是否使用HTTP2.0，on：是，off：否。
    /// </summary>

    std::string getHttp2Status() const;
    bool http2StatusIsSet() const;
    void unsethttp2Status();
    void setHttp2Status(const std::string& value);

    /// <summary>
    /// 传输层安全性协议。
    /// </summary>

    std::string getTlsVersion() const;
    bool tlsVersionIsSet() const;
    void unsettlsVersion();
    void setTlsVersion(const std::string& value);


protected:
    std::string httpsStatus_;
    bool httpsStatusIsSet_;
    std::string certificateName_;
    bool certificateNameIsSet_;
    std::string certificateValue_;
    bool certificateValueIsSet_;
    int32_t certificateSource_;
    bool certificateSourceIsSet_;
    std::string http2Status_;
    bool http2StatusIsSet_;
    std::string tlsVersion_;
    bool tlsVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_HttpGetBody_H_