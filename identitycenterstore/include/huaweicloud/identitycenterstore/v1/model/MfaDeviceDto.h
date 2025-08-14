
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_MfaDeviceDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_MfaDeviceDto_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  MfaDeviceDto
    : public ModelBase
{
public:
    MfaDeviceDto();
    virtual ~MfaDeviceDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MfaDeviceDto members

    /// <summary>
    /// MFA设备唯一标识符（ID）
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// MFA设备名称
    /// </summary>

    std::string getDeviceName() const;
    bool deviceNameIsSet() const;
    void unsetdeviceName();
    void setDeviceName(const std::string& value);

    /// <summary>
    /// MFA设备显示名称
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// MFA类型
    /// </summary>

    std::string getMfaType() const;
    bool mfaTypeIsSet() const;
    void unsetmfaType();
    void setMfaType(const std::string& value);

    /// <summary>
    /// 注册时间
    /// </summary>

    int64_t getRegisteredDate() const;
    bool registeredDateIsSet() const;
    void unsetregisteredDate();
    void setRegisteredDate(int64_t value);


protected:
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::string deviceName_;
    bool deviceNameIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string mfaType_;
    bool mfaTypeIsSet_;
    int64_t registeredDate_;
    bool registeredDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_MfaDeviceDto_H_
