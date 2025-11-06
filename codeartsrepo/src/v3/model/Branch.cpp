

#include "huaweicloud/codeartsrepo/v3/model/Branch.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




Branch::Branch()
{
    isProtected_ = false;
    isProtectedIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

Branch::~Branch() = default;

void Branch::validate()
{
}

web::json::value Branch::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isProtectedIsSet_) {
        val[utility::conversions::to_string_t("is_protected")] = ModelBase::toJson(isProtected_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool Branch::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_protected"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_protected"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsProtected(refVal);
        }
    }
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


bool Branch::isIsProtected() const
{
    return isProtected_;
}

void Branch::setIsProtected(bool value)
{
    isProtected_ = value;
    isProtectedIsSet_ = true;
}

bool Branch::isProtectedIsSet() const
{
    return isProtectedIsSet_;
}

void Branch::unsetisProtected()
{
    isProtectedIsSet_ = false;
}

std::string Branch::getName() const
{
    return name_;
}

void Branch::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Branch::nameIsSet() const
{
    return nameIsSet_;
}

void Branch::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


