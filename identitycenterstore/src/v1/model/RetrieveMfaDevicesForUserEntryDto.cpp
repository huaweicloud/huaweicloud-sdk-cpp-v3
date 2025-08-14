

#include "huaweicloud/identitycenterstore/v1/model/RetrieveMfaDevicesForUserEntryDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




RetrieveMfaDevicesForUserEntryDto::RetrieveMfaDevicesForUserEntryDto()
{
    mfaDevicesIsSet_ = false;
    userIsSet_ = false;
}

RetrieveMfaDevicesForUserEntryDto::~RetrieveMfaDevicesForUserEntryDto() = default;

void RetrieveMfaDevicesForUserEntryDto::validate()
{
}

web::json::value RetrieveMfaDevicesForUserEntryDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(mfaDevicesIsSet_) {
        val[utility::conversions::to_string_t("mfa_devices")] = ModelBase::toJson(mfaDevices_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }

    return val;
}
bool RetrieveMfaDevicesForUserEntryDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mfa_devices"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mfa_devices"));
        if(!fieldValue.is_null())
        {
            std::vector<MfaDeviceDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMfaDevices(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            RetrieveMfaDevicesForUserDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    return ok;
}


std::vector<MfaDeviceDto>& RetrieveMfaDevicesForUserEntryDto::getMfaDevices()
{
    return mfaDevices_;
}

void RetrieveMfaDevicesForUserEntryDto::setMfaDevices(const std::vector<MfaDeviceDto>& value)
{
    mfaDevices_ = value;
    mfaDevicesIsSet_ = true;
}

bool RetrieveMfaDevicesForUserEntryDto::mfaDevicesIsSet() const
{
    return mfaDevicesIsSet_;
}

void RetrieveMfaDevicesForUserEntryDto::unsetmfaDevices()
{
    mfaDevicesIsSet_ = false;
}

RetrieveMfaDevicesForUserDto RetrieveMfaDevicesForUserEntryDto::getUser() const
{
    return user_;
}

void RetrieveMfaDevicesForUserEntryDto::setUser(const RetrieveMfaDevicesForUserDto& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool RetrieveMfaDevicesForUserEntryDto::userIsSet() const
{
    return userIsSet_;
}

void RetrieveMfaDevicesForUserEntryDto::unsetuser()
{
    userIsSet_ = false;
}

}
}
}
}
}


