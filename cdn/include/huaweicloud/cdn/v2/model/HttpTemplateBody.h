
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_HttpTemplateBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_HttpTemplateBody_H_


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
/// **参数解释：** 在CDN节点添加证书，支持客户端以HTTPS协议访问节点，实现HTTPS安全加速 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  HttpTemplateBody
    : public ModelBase
{
public:
    HttpTemplateBody();
    virtual ~HttpTemplateBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpTemplateBody members

    /// <summary>
    /// **参数解释：** 证书配置开关 **约束限制：** 不涉及 **取值范围：** - on: 开启 - off: 关闭 **默认取值：** 不涉及
    /// </summary>

    std::string getHttpsStatus() const;
    bool httpsStatusIsSet() const;
    void unsethttpsStatus();
    void setHttpsStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 证书类型 **约束限制：** 不涉及 **取值范围：** - server: 国际证书 - server_sm: 国密证书 **默认取值：** 不涉及
    /// </summary>

    std::string getCertificateType() const;
    bool certificateTypeIsSet() const;
    void unsetcertificateType();
    void setCertificateType(const std::string& value);

    /// <summary>
    /// **参数解释：** 证书来源 **约束限制：** 证书开启时必传 **取值范围：** - 0: 自有证书 - 2: SCM证书 **默认取值：** 不涉及
    /// </summary>

    int32_t getCertificateSource() const;
    bool certificateSourceIsSet() const;
    void unsetcertificateSource();
    void setCertificateSource(int32_t value);

    /// <summary>
    /// **参数解释：** SCM证书ID，可使用云证书与管理服务（CCM）的查询证书列表接口获取 **约束限制：** 配置SCM证书时必传 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getScmCertificateId() const;
    bool scmCertificateIdIsSet() const;
    void unsetscmCertificateId();
    void setScmCertificateId(const std::string& value);

    /// <summary>
    /// **参数解释：** 证书名称 **约束限制：** - 当证书开启时必传 - 3-64个字符 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getCertificateName() const;
    bool certificateNameIsSet() const;
    void unsetcertificateName();
    void setCertificateName(const std::string& value);

    /// <summary>
    /// **参数解释：** HTTPS协议使用的证书内容 **约束限制：** - 仅支持PEM编码格式 - 当证书开启时必传 -  需要传入完整证书链 **取值范围：** 证书链长度不超过20KB **默认取值：** 不涉及
    /// </summary>

    std::string getCertificateValue() const;
    bool certificateValueIsSet() const;
    void unsetcertificateValue();
    void setCertificateValue(const std::string& value);

    /// <summary>
    /// **参数解释：** HTTPS协议使用的私钥 **约束限制：** - 当证书开启时必传 - 仅支持PEM编码格式 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getPrivateKey() const;
    bool privateKeyIsSet() const;
    void unsetprivateKey();
    void setPrivateKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 加密证书内容 **约束限制：** - 证书类型为国密证书时必传 - 仅支持PEM编码格式 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getEncCertificateValue() const;
    bool encCertificateValueIsSet() const;
    void unsetencCertificateValue();
    void setEncCertificateValue(const std::string& value);

    /// <summary>
    /// **参数解释：** 加密私钥内容 **约束限制：** - 证书类型为国密证书时必传 - 仅支持PEM编码格式 **取值范围：** 不涉及 **默认取值：** 不涉及
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
    /// **参数解释：** HTTP/2开关，支持客户端采用HTTP/2协议访问CDN节点 **约束限制：** https_status&#x3D;off时，该值不生效 **取值范围：** - on: 是 - off: 否 **默认取值：** off: 否
    /// </summary>

    std::string getHttp2Status() const;
    bool http2StatusIsSet() const;
    void unsethttp2Status();
    void setHttp2Status(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否开启ocsp stapling **约束限制：** 不涉及 **取值范围：** - on: 是 - off: 否 **默认取值：** 不涉及
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
    std::string ocspStaplingStatus_;
    bool ocspStaplingStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_HttpTemplateBody_H_
