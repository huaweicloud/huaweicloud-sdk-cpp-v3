

#include "huaweicloud/codehub/v3/model/AddProtectRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




AddProtectRequest::AddProtectRequest()
{
    accessLevelIsSet_ = false;
}

AddProtectRequest::~AddProtectRequest() = default;

void AddProtectRequest::validate()
{
}

web::json::value AddProtectRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessLevelIsSet_) {
        val[utility::conversions::to_string_t("access_level")] = ModelBase::toJson(accessLevel_);
    }

    return val;
}
bool AddProtectRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_level"));
        if(!fieldValue.is_null())
        {
            AddProtectAccessLevel refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessLevel(refVal);
        }
    }
    return ok;
}


AddProtectAccessLevel AddProtectRequest::getAccessLevel() const
{
    return accessLevel_;
}

void AddProtectRequest::setAccessLevel(const AddProtectAccessLevel& value)
{
    accessLevel_ = value;
    accessLevelIsSet_ = true;
}

bool AddProtectRequest::accessLevelIsSet() const
{
    return accessLevelIsSet_;
}

void AddProtectRequest::unsetaccessLevel()
{
    accessLevelIsSet_ = false;
}

}
}
}
}
}


