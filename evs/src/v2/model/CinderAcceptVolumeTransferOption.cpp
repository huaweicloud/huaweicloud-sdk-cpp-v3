

#include "huaweicloud/evs/v2/model/CinderAcceptVolumeTransferOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderAcceptVolumeTransferOption::CinderAcceptVolumeTransferOption()
{
    authKey_ = "";
    authKeyIsSet_ = false;
}

CinderAcceptVolumeTransferOption::~CinderAcceptVolumeTransferOption() = default;

void CinderAcceptVolumeTransferOption::validate()
{
}

web::json::value CinderAcceptVolumeTransferOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authKeyIsSet_) {
        val[utility::conversions::to_string_t("auth_key")] = ModelBase::toJson(authKey_);
    }

    return val;
}

bool CinderAcceptVolumeTransferOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auth_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthKey(refVal);
        }
    }
    return ok;
}


std::string CinderAcceptVolumeTransferOption::getAuthKey() const
{
    return authKey_;
}

void CinderAcceptVolumeTransferOption::setAuthKey(const std::string& value)
{
    authKey_ = value;
    authKeyIsSet_ = true;
}

bool CinderAcceptVolumeTransferOption::authKeyIsSet() const
{
    return authKeyIsSet_;
}

void CinderAcceptVolumeTransferOption::unsetauthKey()
{
    authKeyIsSet_ = false;
}

}
}
}
}
}


