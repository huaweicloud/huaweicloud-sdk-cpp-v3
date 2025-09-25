

#include "huaweicloud/codehub/v4/model/LockRepositoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




LockRepositoryResponse::LockRepositoryResponse()
{
    locked_ = "";
    lockedIsSet_ = false;
}

LockRepositoryResponse::~LockRepositoryResponse() = default;

void LockRepositoryResponse::validate()
{
}

web::json::value LockRepositoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lockedIsSet_) {
        val[utility::conversions::to_string_t("locked")] = ModelBase::toJson(locked_);
    }

    return val;
}
bool LockRepositoryResponse::fromJson(const web::json::value& val)
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


std::string LockRepositoryResponse::getLocked() const
{
    return locked_;
}

void LockRepositoryResponse::setLocked(const std::string& value)
{
    locked_ = value;
    lockedIsSet_ = true;
}

bool LockRepositoryResponse::lockedIsSet() const
{
    return lockedIsSet_;
}

void LockRepositoryResponse::unsetlocked()
{
    lockedIsSet_ = false;
}

}
}
}
}
}


