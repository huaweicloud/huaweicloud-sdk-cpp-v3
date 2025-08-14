
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AuthInfoWithoutSecret_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AuthInfoWithoutSecret_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设备接入类型不返回密钥模式。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  AuthInfoWithoutSecret
    : public ModelBase
{
public:
    AuthInfoWithoutSecret();
    virtual ~AuthInfoWithoutSecret();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuthInfoWithoutSecret members

    /// <summary>
    /// **参数说明**：指设备是否通过安全协议方式接入。 **取值范围**： - true：通过安全协议方式接入。 - false：通过非安全协议方式接入。非安全接入的设备存在被仿冒等安全风险，请谨慎使用。
    /// </summary>

    bool isSecureAccess() const;
    bool secureAccessIsSet() const;
    void unsetsecureAccess();
    void setSecureAccess(bool value);

    /// <summary>
    /// **参数说明**：设备接入的有效时间，单位：秒，默认值：0。若设备在有效时间内未接入物联网平台并激活，则平台会删除该设备的注册信息。若设置为“0”，则表示平台不会删除该设备的注册信息（建议填写为“0”）。
    /// </summary>

    int32_t getTimeout() const;
    bool timeoutIsSet() const;
    void unsettimeout();
    void setTimeout(int32_t value);


protected:
    bool secureAccess_;
    bool secureAccessIsSet_;
    int32_t timeout_;
    bool timeoutIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AuthInfoWithoutSecret_H_
