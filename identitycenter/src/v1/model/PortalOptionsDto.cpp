

#include "huaweicloud/identitycenter/v1/model/PortalOptionsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




PortalOptionsDto::PortalOptionsDto()
{
    visible_ = false;
    visibleIsSet_ = false;
    visibility_ = "";
    visibilityIsSet_ = false;
    signInOptionsIsSet_ = false;
}

PortalOptionsDto::~PortalOptionsDto() = default;

void PortalOptionsDto::validate()
{
}

web::json::value PortalOptionsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(visibleIsSet_) {
        val[utility::conversions::to_string_t("visible")] = ModelBase::toJson(visible_);
    }
    if(visibilityIsSet_) {
        val[utility::conversions::to_string_t("visibility")] = ModelBase::toJson(visibility_);
    }
    if(signInOptionsIsSet_) {
        val[utility::conversions::to_string_t("sign_in_options")] = ModelBase::toJson(signInOptions_);
    }

    return val;
}
bool PortalOptionsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("visible"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visible"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisible(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visibility"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibility(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sign_in_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sign_in_options"));
        if(!fieldValue.is_null())
        {
            SignInOptionsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignInOptions(refVal);
        }
    }
    return ok;
}


bool PortalOptionsDto::isVisible() const
{
    return visible_;
}

void PortalOptionsDto::setVisible(bool value)
{
    visible_ = value;
    visibleIsSet_ = true;
}

bool PortalOptionsDto::visibleIsSet() const
{
    return visibleIsSet_;
}

void PortalOptionsDto::unsetvisible()
{
    visibleIsSet_ = false;
}

std::string PortalOptionsDto::getVisibility() const
{
    return visibility_;
}

void PortalOptionsDto::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool PortalOptionsDto::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void PortalOptionsDto::unsetvisibility()
{
    visibilityIsSet_ = false;
}

SignInOptionsDto PortalOptionsDto::getSignInOptions() const
{
    return signInOptions_;
}

void PortalOptionsDto::setSignInOptions(const SignInOptionsDto& value)
{
    signInOptions_ = value;
    signInOptionsIsSet_ = true;
}

bool PortalOptionsDto::signInOptionsIsSet() const
{
    return signInOptionsIsSet_;
}

void PortalOptionsDto::unsetsignInOptions()
{
    signInOptionsIsSet_ = false;
}

}
}
}
}
}


