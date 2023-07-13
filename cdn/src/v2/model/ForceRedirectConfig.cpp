

#include "huaweicloud/cdn/v2/model/ForceRedirectConfig.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ForceRedirectConfig::ForceRedirectConfig()
{
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    redirectCode_ = 0;
    redirectCodeIsSet_ = false;
}

ForceRedirectConfig::~ForceRedirectConfig() = default;

void ForceRedirectConfig::validate()
{
}

web::json::value ForceRedirectConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(redirectCodeIsSet_) {
        val[utility::conversions::to_string_t("redirect_code")] = ModelBase::toJson(redirectCode_);
    }

    return val;
}

bool ForceRedirectConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("redirect_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redirect_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRedirectCode(refVal);
        }
    }
    return ok;
}

std::string ForceRedirectConfig::getStatus() const
{
    return status_;
}

void ForceRedirectConfig::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ForceRedirectConfig::statusIsSet() const
{
    return statusIsSet_;
}

void ForceRedirectConfig::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ForceRedirectConfig::getType() const
{
    return type_;
}

void ForceRedirectConfig::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ForceRedirectConfig::typeIsSet() const
{
    return typeIsSet_;
}

void ForceRedirectConfig::unsettype()
{
    typeIsSet_ = false;
}

int32_t ForceRedirectConfig::getRedirectCode() const
{
    return redirectCode_;
}

void ForceRedirectConfig::setRedirectCode(int32_t value)
{
    redirectCode_ = value;
    redirectCodeIsSet_ = true;
}

bool ForceRedirectConfig::redirectCodeIsSet() const
{
    return redirectCodeIsSet_;
}

void ForceRedirectConfig::unsetredirectCode()
{
    redirectCodeIsSet_ = false;
}

}
}
}
}
}


