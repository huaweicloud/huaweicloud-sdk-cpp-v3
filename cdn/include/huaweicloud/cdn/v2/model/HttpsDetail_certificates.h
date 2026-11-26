
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_HttpsDetail_certificates_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_HttpsDetail_certificates_H_


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
/// 双证书场景下的单个证书信息
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  HttpsDetail_certificates
    : public ModelBase
{
public:
    HttpsDetail_certificates();
    virtual ~HttpsDetail_certificates();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpsDetail_certificates members

    /// <summary>
    /// **参数解释：** 证书类型 **约束限制：** 不涉及 **取值范围：** - server: 国际证书 - server_sm: 国密证书  **默认取值：** 不涉及
    /// </summary>

    std::string getCertificateType() const;
    bool certificateTypeIsSet() const;
    void unsetcertificateType();
    void setCertificateType(const std::string& value);

    /// <summary>
    /// **参数解释：** 证书来源 **约束限制：** 不涉及 **取值范围：** - 0: 自有证书 - 1: 云托管证书 - 2: SCM证书  **默认取值：** 不涉及
    /// </summary>

    int32_t getCertificateSource() const;
    bool certificateSourceIsSet() const;
    void unsetcertificateSource();
    void setCertificateSource(int32_t value);

    /// <summary>
    /// **参数解释：** 证书名称 **约束限制：** 不涉及 **取值范围：** 不涉及
    /// </summary>

    std::string getCertificateName() const;
    bool certificateNameIsSet() const;
    void unsetcertificateName();
    void setCertificateName(const std::string& value);

    /// <summary>
    /// **参数解释：** 证书内容 **约束限制：** 不涉及 **取值范围：** 不涉及
    /// </summary>

    std::string getCertificateValue() const;
    bool certificateValueIsSet() const;
    void unsetcertificateValue();
    void setCertificateValue(const std::string& value);

    /// <summary>
    /// **参数解释：** 私钥内容 **约束限制：** 不涉及 **取值范围：** 不涉及
    /// </summary>

    std::string getPrivateKey() const;
    bool privateKeyIsSet() const;
    void unsetprivateKey();
    void setPrivateKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 国密证书加密证书内容 **约束限制：** 不涉及 **取值范围：** 不涉及
    /// </summary>

    std::string getEncCertificateValue() const;
    bool encCertificateValueIsSet() const;
    void unsetencCertificateValue();
    void setEncCertificateValue(const std::string& value);

    /// <summary>
    /// **参数解释：** 国密证书加密私钥内容 **约束限制：** 不涉及 **取值范围：** 不涉及
    /// </summary>

    std::string getEncPrivateKey() const;
    bool encPrivateKeyIsSet() const;
    void unsetencPrivateKey();
    void setEncPrivateKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 证书过期时间，Unix时间戳格式，单位为毫秒 **约束限制：** 不涉及 **取值范围：** 不涉及
    /// </summary>

    int64_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int64_t value);

    /// <summary>
    /// **参数解释：** SCM证书ID **约束限制：** 不涉及 **取值范围：** 不涉及
    /// </summary>

    std::string getScmCertificateId() const;
    bool scmCertificateIdIsSet() const;
    void unsetscmCertificateId();
    void setScmCertificateId(const std::string& value);


protected:
    std::string certificateType_;
    bool certificateTypeIsSet_;
    int32_t certificateSource_;
    bool certificateSourceIsSet_;
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
    int64_t expireTime_;
    bool expireTimeIsSet_;
    std::string scmCertificateId_;
    bool scmCertificateIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_HttpsDetail_certificates_H_
