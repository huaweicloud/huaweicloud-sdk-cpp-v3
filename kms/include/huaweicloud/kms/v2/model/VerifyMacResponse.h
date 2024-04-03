
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_VerifyMacResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_VerifyMacResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  VerifyMacResponse
    : public ModelBase, public HttpResponse
{
public:
    VerifyMacResponse();
    virtual ~VerifyMacResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VerifyMacResponse members

    /// <summary>
    /// 密钥ID
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// MAC算法
    /// </summary>

    std::string getMacAlgorithm() const;
    bool macAlgorithmIsSet() const;
    void unsetmacAlgorithm();
    void setMacAlgorithm(const std::string& value);

    /// <summary>
    /// 消息验证码校验结果
    /// </summary>

    bool isMacValid() const;
    bool macValidIsSet() const;
    void unsetmacValid();
    void setMacValid(bool value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string macAlgorithm_;
    bool macAlgorithmIsSet_;
    bool macValid_;
    bool macValidIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_VerifyMacResponse_H_
