
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreatePinRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreatePinRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  CreatePinRequestBody
    : public ModelBase
{
public:
    CreatePinRequestBody();
    virtual ~CreatePinRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePinRequestBody members

    /// <summary>
    /// pin码的类型，默认为“CipherText”： - PlainText - CipherText
    /// </summary>

    std::string getPinType() const;
    bool pinTypeIsSet() const;
    void unsetpinType();
    void setPinType(const std::string& value);

    /// <summary>
    /// 密钥库ID，指定密文pin时必选： 1：管理面manage_az集群（共享卡集群） 2：数据面共享集群(pod区) 其它：租户专属
    /// </summary>

    std::string getKeystoreId() const;
    bool keystoreIdIsSet() const;
    void unsetkeystoreId();
    void setKeystoreId(const std::string& value);


protected:
    std::string pinType_;
    bool pinTypeIsSet_;
    std::string keystoreId_;
    bool keystoreIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreatePinRequestBody_H_
