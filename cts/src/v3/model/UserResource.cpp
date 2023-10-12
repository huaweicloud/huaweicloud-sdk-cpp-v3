

#include "huaweicloud/cts/v3/model/UserResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




UserResource::UserResource()
{
    name_ = "";
    nameIsSet_ = false;
}

UserResource::~UserResource() = default;

void UserResource::validate()
{
}

web::json::value UserResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool UserResource::fromJson(const web::json::value& val)
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


std::string UserResource::getName() const
{
    return name_;
}

void UserResource::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UserResource::nameIsSet() const
{
    return nameIsSet_;
}

void UserResource::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


