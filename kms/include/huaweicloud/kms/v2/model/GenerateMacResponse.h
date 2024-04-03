
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_GenerateMacResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_GenerateMacResponse_H_


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
class HUAWEICLOUD_KMS_V2_EXPORT  GenerateMacResponse
    : public ModelBase, public HttpResponse
{
public:
    GenerateMacResponse();
    virtual ~GenerateMacResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GenerateMacResponse members

    /// <summary>
    /// 密钥ID
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// Mac算法
    /// </summary>

    std::string getMacAlgorithm() const;
    bool macAlgorithmIsSet() const;
    void unsetmacAlgorithm();
    void setMacAlgorithm(const std::string& value);

    /// <summary>
    /// 生成的消息验证码
    /// </summary>

    std::string getMac() const;
    bool macIsSet() const;
    void unsetmac();
    void setMac(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string macAlgorithm_;
    bool macAlgorithmIsSet_;
    std::string mac_;
    bool macIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_GenerateMacResponse_H_
