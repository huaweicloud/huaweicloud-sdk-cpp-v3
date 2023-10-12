
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_KeyDescriptionInfo_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_KeyDescriptionInfo_H_


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
/// 密钥描述信息。
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  KeyDescriptionInfo
    : public ModelBase
{
public:
    KeyDescriptionInfo();
    virtual ~KeyDescriptionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KeyDescriptionInfo members

    /// <summary>
    /// 密钥ID。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 密钥描述。
    /// </summary>

    std::string getKeyDescription() const;
    bool keyDescriptionIsSet() const;
    void unsetkeyDescription();
    void setKeyDescription(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string keyDescription_;
    bool keyDescriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_KeyDescriptionInfo_H_
