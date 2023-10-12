

#include "huaweicloud/rds/v3/model/RevokeRequestBody_users.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RevokeRequestBody_users::RevokeRequestBody_users()
{
    name_ = "";
    nameIsSet_ = false;
}

RevokeRequestBody_users::~RevokeRequestBody_users() = default;

void RevokeRequestBody_users::validate()
{
}

web::json::value RevokeRequestBody_users::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool RevokeRequestBody_users::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string RevokeRequestBody_users::getName() const
{
    return name_;
}

void RevokeRequestBody_users::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RevokeRequestBody_users::nameIsSet() const
{
    return nameIsSet_;
}

void RevokeRequestBody_users::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


