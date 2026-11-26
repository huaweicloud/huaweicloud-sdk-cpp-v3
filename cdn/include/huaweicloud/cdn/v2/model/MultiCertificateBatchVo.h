
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_MultiCertificateBatchVo_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_MultiCertificateBatchVo_H_


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
/// **参数解释：** 双证书场景下的单个证书配置项 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  MultiCertificateBatchVo
    : public ModelBase
{
public:
    MultiCertificateBatchVo();
    virtual ~MultiCertificateBatchVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MultiCertificateBatchVo members

    /// <summary>
    /// **参数解释：** 证书名称 **约束限制：** 不涉及 **取值范围：** - 3-64个字符 - 由英文字母、数字及“-”、“_”、空格组成  **默认取值：** 不涉及
    /// </summary>

    std::string getCertName() const;
    bool certNameIsSet() const;
    void unsetcertName();
    void setCertName(const std::string& value);

    /// <summary>
    /// **参数解释：** 证书类型 **约束限制：** 不涉及 **取值范围：** - 0: 国际证书 - 1: 国密证书  **默认取值：** 不涉及
    /// </summary>

    int32_t getCertificateCategory() const;
    bool certificateCategoryIsSet() const;
    void unsetcertificateCategory();
    void setCertificateCategory(int32_t value);

    /// <summary>
    /// **参数解释：** 证书类型 **约束限制：** 不涉及 **取值范围：** - 0: 自有证书 - 1: 云托管证书 - 2: SCM证书  **默认取值：** 不涉及
    /// </summary>

    int32_t getCertificateType() const;
    bool certificateTypeIsSet() const;
    void unsetcertificateType();
    void setCertificateType(int32_t value);

    /// <summary>
    /// **参数解释：** SSL证书内容 **约束限制：** - 仅支持PEM编码格式 - 需要传入完整证书链  **取值范围：** 证书链长度不超过20KB **默认取值：** 不涉及
    /// </summary>

    std::string getCertificate() const;
    bool certificateIsSet() const;
    void unsetcertificate();
    void setCertificate(const std::string& value);

    /// <summary>
    /// **参数解释：** SSL证书私钥内容 **约束限制：** - 仅支持PEM编码格式  **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getPrivateKey() const;
    bool privateKeyIsSet() const;
    void unsetprivateKey();
    void setPrivateKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 国密证书加密证书内容 **约束限制：** certificate_category 为 1 且 certificate_type 为 0 时必传，须与 enc_private_key 同时传入 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getEncCertificate() const;
    bool encCertificateIsSet() const;
    void unsetencCertificate();
    void setEncCertificate(const std::string& value);

    /// <summary>
    /// **参数解释：** 国密证书加密私钥内容 **约束限制：** certificate_category 为 1 且 certificate_type 为 0 时必传，须与 enc_certificate 同时传入 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getEncPrivateKey() const;
    bool encPrivateKeyIsSet() const;
    void unsetencPrivateKey();
    void setEncPrivateKey(const std::string& value);

    /// <summary>
    /// **参数解释：** SCM证书ID，配置SCM证书时必传 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getScmCertificateId() const;
    bool scmCertificateIdIsSet() const;
    void unsetscmCertificateId();
    void setScmCertificateId(const std::string& value);


protected:
    std::string certName_;
    bool certNameIsSet_;
    int32_t certificateCategory_;
    bool certificateCategoryIsSet_;
    int32_t certificateType_;
    bool certificateTypeIsSet_;
    std::string certificate_;
    bool certificateIsSet_;
    std::string privateKey_;
    bool privateKeyIsSet_;
    std::string encCertificate_;
    bool encCertificateIsSet_;
    std::string encPrivateKey_;
    bool encPrivateKeyIsSet_;
    std::string scmCertificateId_;
    bool scmCertificateIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_MultiCertificateBatchVo_H_
