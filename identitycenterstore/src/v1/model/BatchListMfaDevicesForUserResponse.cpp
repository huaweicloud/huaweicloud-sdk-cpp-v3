

#include "huaweicloud/identitycenterstore/v1/model/BatchListMfaDevicesForUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




BatchListMfaDevicesForUserResponse::BatchListMfaDevicesForUserResponse()
{
    userMfaDevicesEntryListIsSet_ = false;
}

BatchListMfaDevicesForUserResponse::~BatchListMfaDevicesForUserResponse() = default;

void BatchListMfaDevicesForUserResponse::validate()
{
}

web::json::value BatchListMfaDevicesForUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userMfaDevicesEntryListIsSet_) {
        val[utility::conversions::to_string_t("user_mfa_devices_entry_list")] = ModelBase::toJson(userMfaDevicesEntryList_);
    }

    return val;
}
bool BatchListMfaDevicesForUserResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_mfa_devices_entry_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_mfa_devices_entry_list"));
        if(!fieldValue.is_null())
        {
            std::vector<RetrieveMfaDevicesForUserEntryDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserMfaDevicesEntryList(refVal);
        }
    }
    return ok;
}


std::vector<RetrieveMfaDevicesForUserEntryDto>& BatchListMfaDevicesForUserResponse::getUserMfaDevicesEntryList()
{
    return userMfaDevicesEntryList_;
}

void BatchListMfaDevicesForUserResponse::setUserMfaDevicesEntryList(const std::vector<RetrieveMfaDevicesForUserEntryDto>& value)
{
    userMfaDevicesEntryList_ = value;
    userMfaDevicesEntryListIsSet_ = true;
}

bool BatchListMfaDevicesForUserResponse::userMfaDevicesEntryListIsSet() const
{
    return userMfaDevicesEntryListIsSet_;
}

void BatchListMfaDevicesForUserResponse::unsetuserMfaDevicesEntryList()
{
    userMfaDevicesEntryListIsSet_ = false;
}

}
}
}
}
}


