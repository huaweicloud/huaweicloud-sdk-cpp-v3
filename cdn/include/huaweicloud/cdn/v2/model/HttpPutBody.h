
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_HttpPutBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_HttpPutBody_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cdn/v2/model/CertificatesPutBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 证书设置
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  HttpPutBody
    : public ModelBase
{
public:
    HttpPutBody();
    virtual ~HttpPutBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpPutBody members

    /// <summary>
    /// HTTPS证书是否启用，on：开启，off：关闭。
    /// </summary>

    std::string getHttpsStatus() const;
    bool httpsStatusIsSet() const;
    void unsethttpsStatus();
    void setHttpsStatus(const std::string& value);

    /// <summary>
    /// 证书类型，server：国际证书；server_sm：国密证书。
    /// </summary>

    std::string getCertificateType() const;
    bool certificateTypeIsSet() const;
    void unsetcertificateType();
    void setCertificateType(const std::string& value);

    /// <summary>
    /// 证书来源，0：自有证书。2：SCM证书。  &gt; 证书开启时必传
    /// </summary>

    int32_t getCertificateSource() const;
    bool certificateSourceIsSet() const;
    void unsetcertificateSource();
    void setCertificateSource(int32_t value);

    /// <summary>
    /// SCM证书id
    /// </summary>

    std::string getScmCertificateId() const;
    bool scmCertificateIdIsSet() const;
    void unsetscmCertificateId();
    void setScmCertificateId(const std::string& value);

    /// <summary>
    /// 证书名字，长度限制为3-64字符。  &gt; 当证书开启时必传。
    /// </summary>

    std::string getCertificateName() const;
    bool certificateNameIsSet() const;
    void unsetcertificateName();
    void setCertificateName(const std::string& value);

    /// <summary>
    /// HTTPS协议使用的证书内容，当证书开启时必传。  &gt; PEM编码格式。
    /// </summary>

    std::string getCertificateValue() const;
    bool certificateValueIsSet() const;
    void unsetcertificateValue();
    void setCertificateValue(const std::string& value);

    /// <summary>
    /// HTTPS协议使用的私钥，当证书开启时必传。  &gt; PEM编码格式。
    /// </summary>

    std::string getPrivateKey() const;
    bool privateKeyIsSet() const;
    void unsetprivateKey();
    void setPrivateKey(const std::string& value);

    /// <summary>
    /// 加密证书内容，证书类型为国密证书时必传。  &gt; PEM编码格式。
    /// </summary>

    std::string getEncCertificateValue() const;
    bool encCertificateValueIsSet() const;
    void unsetencCertificateValue();
    void setEncCertificateValue(const std::string& value);

    /// <summary>
    /// 加密私钥内容，证书类型为国密证书时必传。  &gt; PEM编码格式。
    /// </summary>

    std::string getEncPrivateKey() const;
    bool encPrivateKeyIsSet() const;
    void unsetencPrivateKey();
    void setEncPrivateKey(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<CertificatesPutBody>& getCertificates();
    bool certificatesIsSet() const;
    void unsetcertificates();
    void setCertificates(const std::vector<CertificatesPutBody>& value);

    /// <summary>
    /// 是否使用HTTP2.0，on：是，off：否。  &gt; 默认关闭，https_status&#x3D;off时，该值不生效。
    /// </summary>

    std::string getHttp2Status() const;
    bool http2StatusIsSet() const;
    void unsethttp2Status();
    void setHttp2Status(const std::string& value);

    /// <summary>
    /// 传输层安全性协议， 目前支持TLSv1.0/1.1/1.2/1.3四个版本的协议，CDN默认开启TLS1.1/1.2/1.3，不可全部关闭。  &gt; 1.需开启连续或单个版本号，例：不可仅开启TLS1.0/1.2而关闭TLS1.1。  &gt; 2.多版本开启时，使用逗号拼接传输，例：TLSv1.1,TLSv1.2。
    /// </summary>

    std::string getTlsVersion() const;
    bool tlsVersionIsSet() const;
    void unsettlsVersion();
    void setTlsVersion(const std::string& value);

    /// <summary>
    /// 是否开启ocsp stapling,on：是，off：否。
    /// </summary>

    std::string getOcspStaplingStatus() const;
    bool ocspStaplingStatusIsSet() const;
    void unsetocspStaplingStatus();
    void setOcspStaplingStatus(const std::string& value);


protected:
    std::string httpsStatus_;
    bool httpsStatusIsSet_;
    std::string certificateType_;
    bool certificateTypeIsSet_;
    int32_t certificateSource_;
    bool certificateSourceIsSet_;
    std::string scmCertificateId_;
    bool scmCertificateIdIsSet_;
    std::string certificateName_;
    bool certificateNameIsSet_;
    std::string certificateValue_;
    bool certificateValueIsSet_;
    std::string privateKey_;
    bool privateKeyIsSet_;
    std::string encCertificateValue_;
    bool encCertificateValueIsSet_;
    std::string encPrivateKey_;
    bool encPrivateKeyIsSet_;
    std::vector<CertificatesPutBody> certificates_;
    bool certificatesIsSet_;
    std::string http2Status_;
    bool http2StatusIsSet_;
    std::string tlsVersion_;
    bool tlsVersionIsSet_;
    std::string ocspStaplingStatus_;
    bool ocspStaplingStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_HttpPutBody_H_
