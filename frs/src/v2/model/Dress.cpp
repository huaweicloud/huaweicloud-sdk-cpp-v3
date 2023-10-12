

#include "huaweicloud/frs/v2/model/Dress.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




Dress::Dress()
{
    glass_ = "";
    glassIsSet_ = false;
    hat_ = "";
    hatIsSet_ = false;
}

Dress::~Dress() = default;

void Dress::validate()
{
}

web::json::value Dress::toJson() const
{
    web::json::value val = web::json::value::object();

    if(glassIsSet_) {
        val[utility::conversions::to_string_t("glass")] = ModelBase::toJson(glass_);
    }
    if(hatIsSet_) {
        val[utility::conversions::to_string_t("hat")] = ModelBase::toJson(hat_);
    }

    return val;
}
bool Dress::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("glass"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("glass"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlass(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hat"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hat"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHat(refVal);
        }
    }
    return ok;
}


std::string Dress::getGlass() const
{
    return glass_;
}

void Dress::setGlass(const std::string& value)
{
    glass_ = value;
    glassIsSet_ = true;
}

bool Dress::glassIsSet() const
{
    return glassIsSet_;
}

void Dress::unsetglass()
{
    glassIsSet_ = false;
}

std::string Dress::getHat() const
{
    return hat_;
}

void Dress::setHat(const std::string& value)
{
    hat_ = value;
    hatIsSet_ = true;
}

bool Dress::hatIsSet() const
{
    return hatIsSet_;
}

void Dress::unsethat()
{
    hatIsSet_ = false;
}

}
}
}
}
}


