
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdatePrimaryRegionRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdatePrimaryRegionRequestBody_H_


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
class HUAWEICLOUD_KMS_V2_EXPORT  UpdatePrimaryRegionRequestBody
    : public ModelBase
{
public:
    UpdatePrimaryRegionRequestBody();
    virtual ~UpdatePrimaryRegionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePrimaryRegionRequestBody members

    /// <summary>
    /// 待复制的密钥ID，36字节，满足正则匹配“^[0-9a-z]{8}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{12}$”。 例如：0d0466b0-e727-4d9c-b35d-f84bb474a37f。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 指定密钥所属新的主区域的区域编码。如cn-north-4。
    /// </summary>

    std::string getPrimaryRegion() const;
    bool primaryRegionIsSet() const;
    void unsetprimaryRegion();
    void setPrimaryRegion(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string primaryRegion_;
    bool primaryRegionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdatePrimaryRegionRequestBody_H_
