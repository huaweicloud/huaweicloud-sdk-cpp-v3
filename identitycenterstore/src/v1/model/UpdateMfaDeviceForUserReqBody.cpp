

#include "huaweicloud/identitycenterstore/v1/model/UpdateMfaDeviceForUserReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




UpdateMfaDeviceForUserReqBody::UpdateMfaDeviceForUserReqBody()
{
    displayName_ = "";
    displayNameIsSet_ = false;
}

UpdateMfaDeviceForUserReqBody::~UpdateMfaDeviceForUserReqBody() = default;

void UpdateMfaDeviceForUserReqBody::validate()
{
}

web::json::value UpdateMfaDeviceForUserReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }

    return val;
}
bool UpdateMfaDeviceForUserReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    return ok;
}


std::string UpdateMfaDeviceForUserReqBody::getDisplayName() const
{
    return displayName_;
}

void UpdateMfaDeviceForUserReqBody::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool UpdateMfaDeviceForUserReqBody::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void UpdateMfaDeviceForUserReqBody::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

}
}
}
}
}


