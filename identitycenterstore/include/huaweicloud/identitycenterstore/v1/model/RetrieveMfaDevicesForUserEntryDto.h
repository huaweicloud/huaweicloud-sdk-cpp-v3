
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_RetrieveMfaDevicesForUserEntryDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_RetrieveMfaDevicesForUserEntryDto_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenterstore/v1/model/MfaDeviceDto.h>
#include <huaweicloud/identitycenterstore/v1/model/RetrieveMfaDevicesForUserDto.h>
#include <vector>

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
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  RetrieveMfaDevicesForUserEntryDto
    : public ModelBase
{
public:
    RetrieveMfaDevicesForUserEntryDto();
    virtual ~RetrieveMfaDevicesForUserEntryDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RetrieveMfaDevicesForUserEntryDto members

    /// <summary>
    /// MFA设备列表
    /// </summary>

    std::vector<MfaDeviceDto>& getMfaDevices();
    bool mfaDevicesIsSet() const;
    void unsetmfaDevices();
    void setMfaDevices(const std::vector<MfaDeviceDto>& value);

    /// <summary>
    /// 
    /// </summary>

    RetrieveMfaDevicesForUserDto getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const RetrieveMfaDevicesForUserDto& value);


protected:
    std::vector<MfaDeviceDto> mfaDevices_;
    bool mfaDevicesIsSet_;
    RetrieveMfaDevicesForUserDto user_;
    bool userIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_RetrieveMfaDevicesForUserEntryDto_H_
