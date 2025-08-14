

#include "huaweicloud/identitycenter/v1/model/SignInOptionsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




SignInOptionsDto::SignInOptionsDto()
{
    origin_ = "";
    originIsSet_ = false;
    applicationUrl_ = "";
    applicationUrlIsSet_ = false;
}

SignInOptionsDto::~SignInOptionsDto() = default;

void SignInOptionsDto::validate()
{
}

web::json::value SignInOptionsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(originIsSet_) {
        val[utility::conversions::to_string_t("origin")] = ModelBase::toJson(origin_);
    }
    if(applicationUrlIsSet_) {
        val[utility::conversions::to_string_t("application_url")] = ModelBase::toJson(applicationUrl_);
    }

    return val;
}
bool SignInOptionsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("origin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrigin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationUrl(refVal);
        }
    }
    return ok;
}


std::string SignInOptionsDto::getOrigin() const
{
    return origin_;
}

void SignInOptionsDto::setOrigin(const std::string& value)
{
    origin_ = value;
    originIsSet_ = true;
}

bool SignInOptionsDto::originIsSet() const
{
    return originIsSet_;
}

void SignInOptionsDto::unsetorigin()
{
    originIsSet_ = false;
}

std::string SignInOptionsDto::getApplicationUrl() const
{
    return applicationUrl_;
}

void SignInOptionsDto::setApplicationUrl(const std::string& value)
{
    applicationUrl_ = value;
    applicationUrlIsSet_ = true;
}

bool SignInOptionsDto::applicationUrlIsSet() const
{
    return applicationUrlIsSet_;
}

void SignInOptionsDto::unsetapplicationUrl()
{
    applicationUrlIsSet_ = false;
}

}
}
}
}
}


