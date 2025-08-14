

#include "huaweicloud/identitycenter/v1/model/SessionConfigurationDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




SessionConfigurationDto::SessionConfigurationDto()
{
    maxAuthenticationAge_ = "";
    maxAuthenticationAgeIsSet_ = false;
}

SessionConfigurationDto::~SessionConfigurationDto() = default;

void SessionConfigurationDto::validate()
{
}

web::json::value SessionConfigurationDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maxAuthenticationAgeIsSet_) {
        val[utility::conversions::to_string_t("max_authentication_age")] = ModelBase::toJson(maxAuthenticationAge_);
    }

    return val;
}
bool SessionConfigurationDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("max_authentication_age"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_authentication_age"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxAuthenticationAge(refVal);
        }
    }
    return ok;
}


std::string SessionConfigurationDto::getMaxAuthenticationAge() const
{
    return maxAuthenticationAge_;
}

void SessionConfigurationDto::setMaxAuthenticationAge(const std::string& value)
{
    maxAuthenticationAge_ = value;
    maxAuthenticationAgeIsSet_ = true;
}

bool SessionConfigurationDto::maxAuthenticationAgeIsSet() const
{
    return maxAuthenticationAgeIsSet_;
}

void SessionConfigurationDto::unsetmaxAuthenticationAge()
{
    maxAuthenticationAgeIsSet_ = false;
}

}
}
}
}
}


