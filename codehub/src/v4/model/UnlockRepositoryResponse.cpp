

#include "huaweicloud/codehub/v4/model/UnlockRepositoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UnlockRepositoryResponse::UnlockRepositoryResponse()
{
    locked_ = "";
    lockedIsSet_ = false;
}

UnlockRepositoryResponse::~UnlockRepositoryResponse() = default;

void UnlockRepositoryResponse::validate()
{
}

web::json::value UnlockRepositoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lockedIsSet_) {
        val[utility::conversions::to_string_t("locked")] = ModelBase::toJson(locked_);
    }

    return val;
}
bool UnlockRepositoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("locked"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locked"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocked(refVal);
        }
    }
    return ok;
}


std::string UnlockRepositoryResponse::getLocked() const
{
    return locked_;
}

void UnlockRepositoryResponse::setLocked(const std::string& value)
{
    locked_ = value;
    lockedIsSet_ = true;
}

bool UnlockRepositoryResponse::lockedIsSet() const
{
    return lockedIsSet_;
}

void UnlockRepositoryResponse::unsetlocked()
{
    lockedIsSet_ = false;
}

}
}
}
}
}


