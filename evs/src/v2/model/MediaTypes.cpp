

#include "huaweicloud/evs/v2/model/MediaTypes.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




MediaTypes::MediaTypes()
{
    base_ = "";
    baseIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

MediaTypes::~MediaTypes() = default;

void MediaTypes::validate()
{
}

web::json::value MediaTypes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(baseIsSet_) {
        val[utility::conversions::to_string_t("base")] = ModelBase::toJson(base_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool MediaTypes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("base"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}

std::string MediaTypes::getBase() const
{
    return base_;
}

void MediaTypes::setBase(const std::string& value)
{
    base_ = value;
    baseIsSet_ = true;
}

bool MediaTypes::baseIsSet() const
{
    return baseIsSet_;
}

void MediaTypes::unsetbase()
{
    baseIsSet_ = false;
}

std::string MediaTypes::getType() const
{
    return type_;
}

void MediaTypes::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MediaTypes::typeIsSet() const
{
    return typeIsSet_;
}

void MediaTypes::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


