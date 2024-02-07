

#include "huaweicloud/cdn/v2/model/ForceRedirect.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ForceRedirect::ForceRedirect()
{
    switch_ = 0;
    switchIsSet_ = false;
    redirectType_ = "";
    redirectTypeIsSet_ = false;
}

ForceRedirect::~ForceRedirect() = default;

void ForceRedirect::validate()
{
}

web::json::value ForceRedirect::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchIsSet_) {
        val[utility::conversions::to_string_t("switch")] = ModelBase::toJson(switch_);
    }
    if(redirectTypeIsSet_) {
        val[utility::conversions::to_string_t("redirect_type")] = ModelBase::toJson(redirectType_);
    }

    return val;
}
bool ForceRedirect::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("redirect_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redirect_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRedirectType(refVal);
        }
    }
    return ok;
}


int32_t ForceRedirect::getSwitch() const
{
    return switch_;
}

void ForceRedirect::setSwitch(int32_t value)
{
    switch_ = value;
    switchIsSet_ = true;
}

bool ForceRedirect::switchIsSet() const
{
    return switchIsSet_;
}

void ForceRedirect::unsetswitch()
{
    switchIsSet_ = false;
}

std::string ForceRedirect::getRedirectType() const
{
    return redirectType_;
}

void ForceRedirect::setRedirectType(const std::string& value)
{
    redirectType_ = value;
    redirectTypeIsSet_ = true;
}

bool ForceRedirect::redirectTypeIsSet() const
{
    return redirectTypeIsSet_;
}

void ForceRedirect::unsetredirectType()
{
    redirectTypeIsSet_ = false;
}

}
}
}
}
}


