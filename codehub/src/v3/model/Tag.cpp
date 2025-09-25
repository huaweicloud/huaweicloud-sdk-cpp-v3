

#include "huaweicloud/codehub/v3/model/Tag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




Tag::Tag()
{
    isDoubleName_ = false;
    isDoubleNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

Tag::~Tag() = default;

void Tag::validate()
{
}

web::json::value Tag::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isDoubleNameIsSet_) {
        val[utility::conversions::to_string_t("is_double_name")] = ModelBase::toJson(isDoubleName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool Tag::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_double_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_double_name"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDoubleName(refVal);
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


bool Tag::isIsDoubleName() const
{
    return isDoubleName_;
}

void Tag::setIsDoubleName(bool value)
{
    isDoubleName_ = value;
    isDoubleNameIsSet_ = true;
}

bool Tag::isDoubleNameIsSet() const
{
    return isDoubleNameIsSet_;
}

void Tag::unsetisDoubleName()
{
    isDoubleNameIsSet_ = false;
}

std::string Tag::getName() const
{
    return name_;
}

void Tag::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Tag::nameIsSet() const
{
    return nameIsSet_;
}

void Tag::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


