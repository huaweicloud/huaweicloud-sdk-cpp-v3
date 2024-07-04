
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdatePrimaryRegionResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdatePrimaryRegionResponse_H_


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
class HUAWEICLOUD_KMS_V2_EXPORT  UpdatePrimaryRegionResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdatePrimaryRegionResponse();
    virtual ~UpdatePrimaryRegionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePrimaryRegionResponse members

    /// <summary>
    /// 密钥ID，36字节，满足正则匹配“^[0-9a-z]{8}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{4}-[0-9a-z]{12}$”。 例如：0d0466b0-e727-4d9c-b35d-f84bb474a37f。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 密钥所在主区域编码。如cn-north-4。
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

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_UpdatePrimaryRegionResponse_H_
