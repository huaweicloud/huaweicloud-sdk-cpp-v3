
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResetFingerprint_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResetFingerprint_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ResetFingerprint
    : public ModelBase
{
public:
    ResetFingerprint();
    virtual ~ResetFingerprint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetFingerprint members

    /// <summary>
    /// **参数说明**：设备指纹。设置该字段时平台将设备指纹重置为指定值；不携带时将之置空，后续设备第一次接入时，该设备指纹的值将设置为第一次接入时的证书指纹。 **取值范围**：长度为40的十六进制字符串或者长度为64的十六进制字符串。
    /// </summary>

    std::string getFingerprint() const;
    bool fingerprintIsSet() const;
    void unsetfingerprint();
    void setFingerprint(const std::string& value);

    /// <summary>
    /// **参数说明**：是否强制断开设备的连接，当前仅限长连接。默认值false。
    /// </summary>

    bool isForceDisconnect() const;
    bool forceDisconnectIsSet() const;
    void unsetforceDisconnect();
    void setForceDisconnect(bool value);

    /// <summary>
    /// **参数说明**：重置设备证书指纹的的类型。 **取值范围**： - PRIMARY：重置主指纹。设备证书鉴权优先使用的指纹，当设备接入物联网平台时，平台将优先使用主指纹进行校验。 - SECONDARY：重置辅指纹。设备的备用指纹，当主指纹校验不通过时，会启用辅指纹校验，辅指纹与主指纹有相同的效力。
    /// </summary>

    std::string getFingerprintType() const;
    bool fingerprintTypeIsSet() const;
    void unsetfingerprintType();
    void setFingerprintType(const std::string& value);


protected:
    std::string fingerprint_;
    bool fingerprintIsSet_;
    bool forceDisconnect_;
    bool forceDisconnectIsSet_;
    std::string fingerprintType_;
    bool fingerprintTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResetFingerprint_H_
