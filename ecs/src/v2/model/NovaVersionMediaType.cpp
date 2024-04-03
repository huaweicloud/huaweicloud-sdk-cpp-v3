

#include "huaweicloud/ecs/v2/model/NovaVersionMediaType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaVersionMediaType::NovaVersionMediaType()
{
    base_ = "";
    baseIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

NovaVersionMediaType::~NovaVersionMediaType() = default;

void NovaVersionMediaType::validate()
{
}

web::json::value NovaVersionMediaType::toJson() const
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
bool NovaVersionMediaType::fromJson(const web::json::value& val)
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


std::string NovaVersionMediaType::getBase() const
{
    return base_;
}

void NovaVersionMediaType::setBase(const std::string& value)
{
    base_ = value;
    baseIsSet_ = true;
}

bool NovaVersionMediaType::baseIsSet() const
{
    return baseIsSet_;
}

void NovaVersionMediaType::unsetbase()
{
    baseIsSet_ = false;
}

std::string NovaVersionMediaType::getType() const
{
    return type_;
}

void NovaVersionMediaType::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool NovaVersionMediaType::typeIsSet() const
{
    return typeIsSet_;
}

void NovaVersionMediaType::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


