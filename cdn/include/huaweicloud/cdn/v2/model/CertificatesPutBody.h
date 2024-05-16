
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_CertificatesPutBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_CertificatesPutBody_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配置双证书时必传，需要同时传入国际证书和国密证书，不支持传两个国际证书或两个国密证书。   &gt; - 您也可以在certificates参数下传入一个国际证书或一个国密证书。   &gt; - 如果certificates传了证书（国际证书、国密证书或国际+国密双证书），外层证书配置将失效，仅保留当前参数传入的证书信息。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  CertificatesPutBody
    : public ModelBase
{
public:
    CertificatesPutBody();
    virtual ~CertificatesPutBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CertificatesPutBody members

    /// <summary>
    /// 证书类型，server：国际证书；server_sm：国密证书。
    /// </summary>

    std::string getCertificateType() const;
    bool certificateTypeIsSet() const;
    void unsetcertificateType();
    void setCertificateType(const std::string& value);

    /// <summary>
    /// 证书名字，长度限制为3-64字符。
    /// </summary>

    std::string getCertificateName() const;
    bool certificateNameIsSet() const;
    void unsetcertificateName();
    void setCertificateName(const std::string& value);

    /// <summary>
    /// HTTPS协议使用的证书内容。  &gt; PEM编码格式。
    /// </summary>

    std::string getCertificateValue() const;
    bool certificateValueIsSet() const;
    void unsetcertificateValue();
    void setCertificateValue(const std::string& value);

    /// <summary>
    /// HTTPS协议使用的私钥。  &gt; PEM编码格式。
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


protected:
    std::string certificateType_;
    bool certificateTypeIsSet_;
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_CertificatesPutBody_H_
