
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDevice_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDevice_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/iotda/v5/model/AuthInfoWithoutSecret.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改设备信息对象。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateDevice
    : public ModelBase
{
public:
    UpdateDevice();
    virtual ~UpdateDevice();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDevice members

    /// <summary>
    /// **参数说明**：设备名称。 **取值范围**：长度不超过256，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合，建议不少于4个字符。
    /// </summary>

    std::string getDeviceName() const;
    bool deviceNameIsSet() const;
    void unsetdeviceName();
    void setDeviceName(const std::string& value);

    /// <summary>
    /// **参数说明**：设备的描述信息。 **取值范围**：长度不超过2048，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数说明**：设备扩展信息。用户可以自定义任何想要的扩展信息，修改子设备信息时不会下发给网关。
    /// </summary>

    Object getExtensionInfo() const;
    bool extensionInfoIsSet() const;
    void unsetextensionInfo();
    void setExtensionInfo(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    AuthInfoWithoutSecret getAuthInfo() const;
    bool authInfoIsSet() const;
    void unsetauthInfo();
    void setAuthInfo(const AuthInfoWithoutSecret& value);


protected:
    std::string deviceName_;
    bool deviceNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    Object extensionInfo_;
    bool extensionInfoIsSet_;
    AuthInfoWithoutSecret authInfo_;
    bool authInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDevice_H_
