
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResetFingerprintResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResetFingerprintResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ResetFingerprintResponse
    : public ModelBase, public HttpResponse
{
public:
    ResetFingerprintResponse();
    virtual ~ResetFingerprintResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetFingerprintResponse members

    /// <summary>
    /// 设备ID，用于唯一标识一个设备。在注册设备时直接指定，或者由物联网平台分配获得。由物联网平台分配时，生成规则为\&quot;product_id\&quot; + \&quot;_\&quot; + \&quot;node_id\&quot;拼接而成。
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// 设备指纹。
    /// </summary>

    std::string getFingerprint() const;
    bool fingerprintIsSet() const;
    void unsetfingerprint();
    void setFingerprint(const std::string& value);

    /// <summary>
    /// **参数说明**：重置设备证书指纹的的类型。 **取值范围**： - PRIMARY：重置主指纹。 - SECONDARY：重置辅指纹。
    /// </summary>

    std::string getFingerprintType() const;
    bool fingerprintTypeIsSet() const;
    void unsetfingerprintType();
    void setFingerprintType(const std::string& value);


protected:
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::string fingerprint_;
    bool fingerprintIsSet_;
    std::string fingerprintType_;
    bool fingerprintTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResetFingerprintResponse_H_
