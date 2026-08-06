
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_RotateOnDemandRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_RotateOnDemandRequestBody_H_


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
class HUAWEICLOUD_KMS_V2_EXPORT  RotateOnDemandRequestBody
    : public ModelBase
{
public:
    RotateOnDemandRequestBody();
    virtual ~RotateOnDemandRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RotateOnDemandRequestBody members

    /// <summary>
    /// **参数解释：** 密钥ID **约束限制：** - 36字节ID - 满足正则匹配“^[0-9a-z]{8}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{12}$” **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_RotateOnDemandRequestBody_H_
