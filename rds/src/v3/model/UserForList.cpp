

#include "huaweicloud/rds/v3/model/UserForList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UserForList::UserForList()
{
    name_ = "";
    nameIsSet_ = false;
}

UserForList::~UserForList() = default;

void UserForList::validate()
{
}

web::json::value UserForList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool UserForList::fromJson(const web::json::value& val)
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

std::string UserForList::getName() const
{
    return name_;
}

void UserForList::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UserForList::nameIsSet() const
{
    return nameIsSet_;
}

void UserForList::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


