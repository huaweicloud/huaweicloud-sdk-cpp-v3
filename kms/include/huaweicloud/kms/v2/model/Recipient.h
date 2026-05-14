
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_Recipient_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_Recipient_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 擎天机密计算请求体
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  Recipient
    : public ModelBase
{
public:
    Recipient();
    virtual ~Recipient();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Recipient members

    /// <summary>
    /// 擎天机密计算证明文档
    /// </summary>

    std::string getAttestationDocument() const;
    bool attestationDocumentIsSet() const;
    void unsetattestationDocument();
    void setAttestationDocument(const std::string& value);

    /// <summary>
    /// 指定加密算法，仅支持RSAES_OAEP_SHA_256
    /// </summary>

    std::string getKeyEncryptionAlgorithm() const;
    bool keyEncryptionAlgorithmIsSet() const;
    void unsetkeyEncryptionAlgorithm();
    void setKeyEncryptionAlgorithm(const std::string& value);


protected:
    std::string attestationDocument_;
    bool attestationDocumentIsSet_;
    std::string keyEncryptionAlgorithm_;
    bool keyEncryptionAlgorithmIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_Recipient_H_
